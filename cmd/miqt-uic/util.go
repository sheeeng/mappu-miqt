package main

import (
	"fmt"
	"strings"
)

// lineDiff does some basic diagnostic printing to show where two files differ.
// It is not clever about resyncronizing runs of differences.
func lineDiff(a, b string) string {
	aLines := strings.Split(a, "\n")
	bLines := strings.Split(b, "\n")

	var diff []string

	aIdx := 0
	bIdx := 0
	for {
		// Check if one-or both- files have reached the final line already
		if aIdx == len(aLines) {
			if bIdx == len(bLines) {
				break
			} else {
				diff = append(diff, fmt.Sprintf("%d: < %q", bIdx, bLines[bIdx]))
				bIdx++
				continue
			}
		} else if bIdx == len(bLines) {
			diff = append(diff, fmt.Sprintf("%d: > %q", aIdx, aLines[aIdx]))
			aIdx++
			continue
		}

		// Both have remaining lines
		if aLines[aIdx] == bLines[bIdx] {
			// Match OK
		} else {
			diff = append(diff, fmt.Sprintf("%d: < %q", bIdx, aLines[aIdx]))
			diff = append(diff, fmt.Sprintf("%d: > %q", aIdx, bLines[bIdx]))
		}
		aIdx++
		bIdx++
	}

	return strings.Join(diff, "\n")
}

// xmlConvertToSelfClosing converts a multiline XML file, where if a line
// consists of <foo ...></foo>, it is replaced with <foo />.
func xmlConvertToSelfClosing(input string) string {

	lines := strings.Split(input, "\n")

	for i, l := range lines {
		tll := strings.TrimLeft(l, " \t")
		indent := l[0 : len(l)-len(tll)]
		spos := strings.IndexAny(tll, " >")
		if spos == -1 {
			continue
		}

		opentag := tll[0:spos]
		closetag := "</" + opentag[1:] + ">"
		if !strings.HasSuffix(tll, ">"+closetag) {
			continue
		}

		tll = tll[0:len(tll)-len(closetag)-1] + "/>"
		lines[i] = indent + tll
	}

	return strings.Join(lines, "\n")
}
