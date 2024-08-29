package main

import (
	"strings"
)

func applyTypedefs(p CppParameter) CppParameter {

	if td, ok := KnownTypedefs[p.ParameterType]; ok {
		p = td.UnderlyingType.CopyWithAlias(p)
	}

	if t, ok := p.QListOf(); ok {
		t2 := applyTypedefs(t) // recursive

		// Wipe out so that RenderTypeQtCpp() does not see it
		t2.TypeAlias = ""

		// QListOf returns for either QList< or QVector<
		// Patch it up to the first < position and last character
		bpos := strings.Index(p.ParameterType, `<`)
		p.ParameterType = p.ParameterType[0:bpos] + `<` + t2.RenderTypeQtCpp() + `>`
	}

	return p
}

// astTransformTypedefs replaces the ParameterType with any known typedef value.
func astTransformTypedefs(parsed *CppParsedHeader) {

	for i, c := range parsed.Classes {

		for j, m := range c.Methods {

			for k, p := range m.Parameters {
				m.Parameters[k] = applyTypedefs(p)
			}

			m.ReturnType = applyTypedefs(m.ReturnType)
			c.Methods[j] = m
		}

		for j, m := range c.Ctors {

			for k, p := range m.Parameters {
				m.Parameters[k] = applyTypedefs(p)
			}

			c.Ctors[j] = m
		}
		parsed.Classes[i] = c
	}
}