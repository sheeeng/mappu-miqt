package qt6

/*

#include "gen_qbrush.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGradient__Type int

const (
	QGradient__LinearGradient  QGradient__Type = 0
	QGradient__RadialGradient  QGradient__Type = 1
	QGradient__ConicalGradient QGradient__Type = 2
	QGradient__NoGradient      QGradient__Type = 3
)

type QGradient__Spread int

const (
	QGradient__PadSpread     QGradient__Spread = 0
	QGradient__ReflectSpread QGradient__Spread = 1
	QGradient__RepeatSpread  QGradient__Spread = 2
)

type QGradient__CoordinateMode int

const (
	QGradient__LogicalMode         QGradient__CoordinateMode = 0
	QGradient__StretchToDeviceMode QGradient__CoordinateMode = 1
	QGradient__ObjectBoundingMode  QGradient__CoordinateMode = 2
	QGradient__ObjectMode          QGradient__CoordinateMode = 3
)

type QGradient__InterpolationMode int

const (
	QGradient__ColorInterpolation     QGradient__InterpolationMode = 0
	QGradient__ComponentInterpolation QGradient__InterpolationMode = 1
)

type QGradient__Preset int

const (
	QGradient__WarmFlame        QGradient__Preset = 1
	QGradient__NightFade        QGradient__Preset = 2
	QGradient__SpringWarmth     QGradient__Preset = 3
	QGradient__JuicyPeach       QGradient__Preset = 4
	QGradient__YoungPassion     QGradient__Preset = 5
	QGradient__LadyLips         QGradient__Preset = 6
	QGradient__SunnyMorning     QGradient__Preset = 7
	QGradient__RainyAshville    QGradient__Preset = 8
	QGradient__FrozenDreams     QGradient__Preset = 9
	QGradient__WinterNeva       QGradient__Preset = 10
	QGradient__DustyGrass       QGradient__Preset = 11
	QGradient__TemptingAzure    QGradient__Preset = 12
	QGradient__HeavyRain        QGradient__Preset = 13
	QGradient__AmyCrisp         QGradient__Preset = 14
	QGradient__MeanFruit        QGradient__Preset = 15
	QGradient__DeepBlue         QGradient__Preset = 16
	QGradient__RipeMalinka      QGradient__Preset = 17
	QGradient__CloudyKnoxville  QGradient__Preset = 18
	QGradient__MalibuBeach      QGradient__Preset = 19
	QGradient__NewLife          QGradient__Preset = 20
	QGradient__TrueSunset       QGradient__Preset = 21
	QGradient__MorpheusDen      QGradient__Preset = 22
	QGradient__RareWind         QGradient__Preset = 23
	QGradient__NearMoon         QGradient__Preset = 24
	QGradient__WildApple        QGradient__Preset = 25
	QGradient__SaintPetersburg  QGradient__Preset = 26
	QGradient__PlumPlate        QGradient__Preset = 28
	QGradient__EverlastingSky   QGradient__Preset = 29
	QGradient__HappyFisher      QGradient__Preset = 30
	QGradient__Blessing         QGradient__Preset = 31
	QGradient__SharpeyeEagle    QGradient__Preset = 32
	QGradient__LadogaBottom     QGradient__Preset = 33
	QGradient__LemonGate        QGradient__Preset = 34
	QGradient__ItmeoBranding    QGradient__Preset = 35
	QGradient__ZeusMiracle      QGradient__Preset = 36
	QGradient__OldHat           QGradient__Preset = 37
	QGradient__StarWine         QGradient__Preset = 38
	QGradient__HappyAcid        QGradient__Preset = 41
	QGradient__AwesomePine      QGradient__Preset = 42
	QGradient__NewYork          QGradient__Preset = 43
	QGradient__ShyRainbow       QGradient__Preset = 44
	QGradient__MixedHopes       QGradient__Preset = 46
	QGradient__FlyHigh          QGradient__Preset = 47
	QGradient__StrongBliss      QGradient__Preset = 48
	QGradient__FreshMilk        QGradient__Preset = 49
	QGradient__SnowAgain        QGradient__Preset = 50
	QGradient__FebruaryInk      QGradient__Preset = 51
	QGradient__KindSteel        QGradient__Preset = 52
	QGradient__SoftGrass        QGradient__Preset = 53
	QGradient__GrownEarly       QGradient__Preset = 54
	QGradient__SharpBlues       QGradient__Preset = 55
	QGradient__ShadyWater       QGradient__Preset = 56
	QGradient__DirtyBeauty      QGradient__Preset = 57
	QGradient__GreatWhale       QGradient__Preset = 58
	QGradient__TeenNotebook     QGradient__Preset = 59
	QGradient__PoliteRumors     QGradient__Preset = 60
	QGradient__SweetPeriod      QGradient__Preset = 61
	QGradient__WideMatrix       QGradient__Preset = 62
	QGradient__SoftCherish      QGradient__Preset = 63
	QGradient__RedSalvation     QGradient__Preset = 64
	QGradient__BurningSpring    QGradient__Preset = 65
	QGradient__NightParty       QGradient__Preset = 66
	QGradient__SkyGlider        QGradient__Preset = 67
	QGradient__HeavenPeach      QGradient__Preset = 68
	QGradient__PurpleDivision   QGradient__Preset = 69
	QGradient__AquaSplash       QGradient__Preset = 70
	QGradient__SpikyNaga        QGradient__Preset = 72
	QGradient__LoveKiss         QGradient__Preset = 73
	QGradient__CleanMirror      QGradient__Preset = 75
	QGradient__PremiumDark      QGradient__Preset = 76
	QGradient__ColdEvening      QGradient__Preset = 77
	QGradient__CochitiLake      QGradient__Preset = 78
	QGradient__SummerGames      QGradient__Preset = 79
	QGradient__PassionateBed    QGradient__Preset = 80
	QGradient__MountainRock     QGradient__Preset = 81
	QGradient__DesertHump       QGradient__Preset = 82
	QGradient__JungleDay        QGradient__Preset = 83
	QGradient__PhoenixStart     QGradient__Preset = 84
	QGradient__OctoberSilence   QGradient__Preset = 85
	QGradient__FarawayRiver     QGradient__Preset = 86
	QGradient__AlchemistLab     QGradient__Preset = 87
	QGradient__OverSun          QGradient__Preset = 88
	QGradient__PremiumWhite     QGradient__Preset = 89
	QGradient__MarsParty        QGradient__Preset = 90
	QGradient__EternalConstance QGradient__Preset = 91
	QGradient__JapanBlush       QGradient__Preset = 92
	QGradient__SmilingRain      QGradient__Preset = 93
	QGradient__CloudyApple      QGradient__Preset = 94
	QGradient__BigMango         QGradient__Preset = 95
	QGradient__HealthyWater     QGradient__Preset = 96
	QGradient__AmourAmour       QGradient__Preset = 97
	QGradient__RiskyConcrete    QGradient__Preset = 98
	QGradient__StrongStick      QGradient__Preset = 99
	QGradient__ViciousStance    QGradient__Preset = 100
	QGradient__PaloAlto         QGradient__Preset = 101
	QGradient__HappyMemories    QGradient__Preset = 102
	QGradient__MidnightBloom    QGradient__Preset = 103
	QGradient__Crystalline      QGradient__Preset = 104
	QGradient__PartyBliss       QGradient__Preset = 106
	QGradient__ConfidentCloud   QGradient__Preset = 107
	QGradient__LeCocktail       QGradient__Preset = 108
	QGradient__RiverCity        QGradient__Preset = 109
	QGradient__FrozenBerry      QGradient__Preset = 110
	QGradient__ChildCare        QGradient__Preset = 112
	QGradient__FlyingLemon      QGradient__Preset = 113
	QGradient__NewRetrowave     QGradient__Preset = 114
	QGradient__HiddenJaguar     QGradient__Preset = 115
	QGradient__AboveTheSky      QGradient__Preset = 116
	QGradient__Nega             QGradient__Preset = 117
	QGradient__DenseWater       QGradient__Preset = 118
	QGradient__Seashore         QGradient__Preset = 120
	QGradient__MarbleWall       QGradient__Preset = 121
	QGradient__CheerfulCaramel  QGradient__Preset = 122
	QGradient__NightSky         QGradient__Preset = 123
	QGradient__MagicLake        QGradient__Preset = 124
	QGradient__YoungGrass       QGradient__Preset = 125
	QGradient__ColorfulPeach    QGradient__Preset = 126
	QGradient__GentleCare       QGradient__Preset = 127
	QGradient__PlumBath         QGradient__Preset = 128
	QGradient__HappyUnicorn     QGradient__Preset = 129
	QGradient__AfricanField     QGradient__Preset = 131
	QGradient__SolidStone       QGradient__Preset = 132
	QGradient__OrangeJuice      QGradient__Preset = 133
	QGradient__GlassWater       QGradient__Preset = 134
	QGradient__NorthMiracle     QGradient__Preset = 136
	QGradient__FruitBlend       QGradient__Preset = 137
	QGradient__MillenniumPine   QGradient__Preset = 138
	QGradient__HighFlight       QGradient__Preset = 139
	QGradient__MoleHall         QGradient__Preset = 140
	QGradient__SpaceShift       QGradient__Preset = 142
	QGradient__ForestInei       QGradient__Preset = 143
	QGradient__RoyalGarden      QGradient__Preset = 144
	QGradient__RichMetal        QGradient__Preset = 145
	QGradient__JuicyCake        QGradient__Preset = 146
	QGradient__SmartIndigo      QGradient__Preset = 147
	QGradient__SandStrike       QGradient__Preset = 148
	QGradient__NorseBeauty      QGradient__Preset = 149
	QGradient__AquaGuidance     QGradient__Preset = 150
	QGradient__SunVeggie        QGradient__Preset = 151
	QGradient__SeaLord          QGradient__Preset = 152
	QGradient__BlackSea         QGradient__Preset = 153
	QGradient__GrassShampoo     QGradient__Preset = 154
	QGradient__LandingAircraft  QGradient__Preset = 155
	QGradient__WitchDance       QGradient__Preset = 156
	QGradient__SleeplessNight   QGradient__Preset = 157
	QGradient__AngelCare        QGradient__Preset = 158
	QGradient__CrystalRiver     QGradient__Preset = 159
	QGradient__SoftLipstick     QGradient__Preset = 160
	QGradient__SaltMountain     QGradient__Preset = 161
	QGradient__PerfectWhite     QGradient__Preset = 162
	QGradient__FreshOasis       QGradient__Preset = 163
	QGradient__StrictNovember   QGradient__Preset = 164
	QGradient__MorningSalad     QGradient__Preset = 165
	QGradient__DeepRelief       QGradient__Preset = 166
	QGradient__SeaStrike        QGradient__Preset = 167
	QGradient__NightCall        QGradient__Preset = 168
	QGradient__SupremeSky       QGradient__Preset = 169
	QGradient__LightBlue        QGradient__Preset = 170
	QGradient__MindCrawl        QGradient__Preset = 171
	QGradient__LilyMeadow       QGradient__Preset = 172
	QGradient__SugarLollipop    QGradient__Preset = 173
	QGradient__SweetDessert     QGradient__Preset = 174
	QGradient__MagicRay         QGradient__Preset = 175
	QGradient__TeenParty        QGradient__Preset = 176
	QGradient__FrozenHeat       QGradient__Preset = 177
	QGradient__GagarinView      QGradient__Preset = 178
	QGradient__FabledSunset     QGradient__Preset = 179
	QGradient__PerfectBlue      QGradient__Preset = 180
	QGradient__NumPresets       QGradient__Preset = 181
)

type QBrush struct {
	h *C.QBrush
}

func (this *QBrush) cPointer() *C.QBrush {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBrush) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQBrush(h *C.QBrush) *QBrush {
	if h == nil {
		return nil
	}
	return &QBrush{h: h}
}

func UnsafeNewQBrush(h unsafe.Pointer) *QBrush {
	return newQBrush((*C.QBrush)(h))
}

// NewQBrush constructs a new QBrush object.
func NewQBrush() *QBrush {
	ret := C.QBrush_new()
	return newQBrush(ret)
}

// NewQBrush2 constructs a new QBrush object.
func NewQBrush2(bs BrushStyle) *QBrush {
	ret := C.QBrush_new2((C.int)(bs))
	return newQBrush(ret)
}

// NewQBrush3 constructs a new QBrush object.
func NewQBrush3(color *QColor) *QBrush {
	ret := C.QBrush_new3(color.cPointer())
	return newQBrush(ret)
}

// NewQBrush4 constructs a new QBrush object.
func NewQBrush4(color GlobalColor) *QBrush {
	ret := C.QBrush_new4((C.int)(color))
	return newQBrush(ret)
}

// NewQBrush5 constructs a new QBrush object.
func NewQBrush5(color *QColor, pixmap *QPixmap) *QBrush {
	ret := C.QBrush_new5(color.cPointer(), pixmap.cPointer())
	return newQBrush(ret)
}

// NewQBrush6 constructs a new QBrush object.
func NewQBrush6(color GlobalColor, pixmap *QPixmap) *QBrush {
	ret := C.QBrush_new6((C.int)(color), pixmap.cPointer())
	return newQBrush(ret)
}

// NewQBrush7 constructs a new QBrush object.
func NewQBrush7(pixmap *QPixmap) *QBrush {
	ret := C.QBrush_new7(pixmap.cPointer())
	return newQBrush(ret)
}

// NewQBrush8 constructs a new QBrush object.
func NewQBrush8(image *QImage) *QBrush {
	ret := C.QBrush_new8(image.cPointer())
	return newQBrush(ret)
}

// NewQBrush9 constructs a new QBrush object.
func NewQBrush9(brush *QBrush) *QBrush {
	ret := C.QBrush_new9(brush.cPointer())
	return newQBrush(ret)
}

// NewQBrush10 constructs a new QBrush object.
func NewQBrush10(gradient *QGradient) *QBrush {
	ret := C.QBrush_new10(gradient.cPointer())
	return newQBrush(ret)
}

// NewQBrush11 constructs a new QBrush object.
func NewQBrush11(color *QColor, bs BrushStyle) *QBrush {
	ret := C.QBrush_new11(color.cPointer(), (C.int)(bs))
	return newQBrush(ret)
}

// NewQBrush12 constructs a new QBrush object.
func NewQBrush12(color GlobalColor, bs BrushStyle) *QBrush {
	ret := C.QBrush_new12((C.int)(color), (C.int)(bs))
	return newQBrush(ret)
}

func (this *QBrush) OperatorAssign(brush *QBrush) {
	C.QBrush_OperatorAssign(this.h, brush.cPointer())
}

func (this *QBrush) Swap(other *QBrush) {
	C.QBrush_Swap(this.h, other.cPointer())
}

func (this *QBrush) Style() BrushStyle {
	return (BrushStyle)(C.QBrush_Style(this.h))
}

func (this *QBrush) SetStyle(style BrushStyle) {
	C.QBrush_SetStyle(this.h, (C.int)(style))
}

func (this *QBrush) Transform() *QTransform {
	_ret := C.QBrush_Transform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) SetTransform(transform *QTransform) {
	C.QBrush_SetTransform(this.h, transform.cPointer())
}

func (this *QBrush) Texture() *QPixmap {
	_ret := C.QBrush_Texture(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) SetTexture(pixmap *QPixmap) {
	C.QBrush_SetTexture(this.h, pixmap.cPointer())
}

func (this *QBrush) TextureImage() *QImage {
	_ret := C.QBrush_TextureImage(this.h)
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) SetTextureImage(image *QImage) {
	C.QBrush_SetTextureImage(this.h, image.cPointer())
}

func (this *QBrush) Color() *QColor {
	return UnsafeNewQColor(unsafe.Pointer(C.QBrush_Color(this.h)))
}

func (this *QBrush) SetColor(color *QColor) {
	C.QBrush_SetColor(this.h, color.cPointer())
}

func (this *QBrush) SetColorWithColor(color GlobalColor) {
	C.QBrush_SetColorWithColor(this.h, (C.int)(color))
}

func (this *QBrush) Gradient() *QGradient {
	return UnsafeNewQGradient(unsafe.Pointer(C.QBrush_Gradient(this.h)))
}

func (this *QBrush) IsOpaque() bool {
	return (bool)(C.QBrush_IsOpaque(this.h))
}

func (this *QBrush) OperatorEqual(b *QBrush) bool {
	return (bool)(C.QBrush_OperatorEqual(this.h, b.cPointer()))
}

func (this *QBrush) OperatorNotEqual(b *QBrush) bool {
	return (bool)(C.QBrush_OperatorNotEqual(this.h, b.cPointer()))
}

func (this *QBrush) IsDetached() bool {
	return (bool)(C.QBrush_IsDetached(this.h))
}

// Delete this object from C++ memory.
func (this *QBrush) Delete() {
	C.QBrush_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBrush) GoGC() {
	runtime.SetFinalizer(this, func(this *QBrush) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QBrushData struct {
	h *C.QBrushData
}

func (this *QBrushData) cPointer() *C.QBrushData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBrushData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQBrushData(h *C.QBrushData) *QBrushData {
	if h == nil {
		return nil
	}
	return &QBrushData{h: h}
}

func UnsafeNewQBrushData(h unsafe.Pointer) *QBrushData {
	return newQBrushData((*C.QBrushData)(h))
}

// NewQBrushData constructs a new QBrushData object.
func NewQBrushData(param1 *QBrushData) *QBrushData {
	ret := C.QBrushData_new(param1.cPointer())
	return newQBrushData(ret)
}

func (this *QBrushData) OperatorAssign(param1 *QBrushData) {
	C.QBrushData_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QBrushData) Delete() {
	C.QBrushData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBrushData) GoGC() {
	runtime.SetFinalizer(this, func(this *QBrushData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGradient struct {
	h *C.QGradient
}

func (this *QGradient) cPointer() *C.QGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGradient(h *C.QGradient) *QGradient {
	if h == nil {
		return nil
	}
	return &QGradient{h: h}
}

func UnsafeNewQGradient(h unsafe.Pointer) *QGradient {
	return newQGradient((*C.QGradient)(h))
}

// NewQGradient constructs a new QGradient object.
func NewQGradient() *QGradient {
	ret := C.QGradient_new()
	return newQGradient(ret)
}

// NewQGradient2 constructs a new QGradient object.
func NewQGradient2(param1 QGradient__Preset) *QGradient {
	ret := C.QGradient_new2((C.int)(param1))
	return newQGradient(ret)
}

// NewQGradient3 constructs a new QGradient object.
func NewQGradient3(param1 *QGradient) *QGradient {
	ret := C.QGradient_new3(param1.cPointer())
	return newQGradient(ret)
}

func (this *QGradient) Type() QGradient__Type {
	return (QGradient__Type)(C.QGradient_Type(this.h))
}

func (this *QGradient) SetSpread(spread QGradient__Spread) {
	C.QGradient_SetSpread(this.h, (C.int)(spread))
}

func (this *QGradient) Spread() QGradient__Spread {
	return (QGradient__Spread)(C.QGradient_Spread(this.h))
}

func (this *QGradient) SetColorAt(pos float64, color *QColor) {
	C.QGradient_SetColorAt(this.h, (C.double)(pos), color.cPointer())
}

func (this *QGradient) CoordinateMode() QGradient__CoordinateMode {
	return (QGradient__CoordinateMode)(C.QGradient_CoordinateMode(this.h))
}

func (this *QGradient) SetCoordinateMode(mode QGradient__CoordinateMode) {
	C.QGradient_SetCoordinateMode(this.h, (C.int)(mode))
}

func (this *QGradient) InterpolationMode() QGradient__InterpolationMode {
	return (QGradient__InterpolationMode)(C.QGradient_InterpolationMode(this.h))
}

func (this *QGradient) SetInterpolationMode(mode QGradient__InterpolationMode) {
	C.QGradient_SetInterpolationMode(this.h, (C.int)(mode))
}

func (this *QGradient) OperatorEqual(gradient *QGradient) bool {
	return (bool)(C.QGradient_OperatorEqual(this.h, gradient.cPointer()))
}

func (this *QGradient) OperatorNotEqual(other *QGradient) bool {
	return (bool)(C.QGradient_OperatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QGradient) Delete() {
	C.QGradient_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGradient) GoGC() {
	runtime.SetFinalizer(this, func(this *QGradient) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QLinearGradient struct {
	h *C.QLinearGradient
	*QGradient
}

func (this *QLinearGradient) cPointer() *C.QLinearGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLinearGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQLinearGradient(h *C.QLinearGradient) *QLinearGradient {
	if h == nil {
		return nil
	}
	return &QLinearGradient{h: h, QGradient: UnsafeNewQGradient(unsafe.Pointer(h))}
}

func UnsafeNewQLinearGradient(h unsafe.Pointer) *QLinearGradient {
	return newQLinearGradient((*C.QLinearGradient)(h))
}

// NewQLinearGradient constructs a new QLinearGradient object.
func NewQLinearGradient() *QLinearGradient {
	ret := C.QLinearGradient_new()
	return newQLinearGradient(ret)
}

// NewQLinearGradient2 constructs a new QLinearGradient object.
func NewQLinearGradient2(start *QPointF, finalStop *QPointF) *QLinearGradient {
	ret := C.QLinearGradient_new2(start.cPointer(), finalStop.cPointer())
	return newQLinearGradient(ret)
}

// NewQLinearGradient3 constructs a new QLinearGradient object.
func NewQLinearGradient3(xStart float64, yStart float64, xFinalStop float64, yFinalStop float64) *QLinearGradient {
	ret := C.QLinearGradient_new3((C.double)(xStart), (C.double)(yStart), (C.double)(xFinalStop), (C.double)(yFinalStop))
	return newQLinearGradient(ret)
}

// NewQLinearGradient4 constructs a new QLinearGradient object.
func NewQLinearGradient4(param1 *QLinearGradient) *QLinearGradient {
	ret := C.QLinearGradient_new4(param1.cPointer())
	return newQLinearGradient(ret)
}

func (this *QLinearGradient) Start() *QPointF {
	_ret := C.QLinearGradient_Start(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLinearGradient) SetStart(start *QPointF) {
	C.QLinearGradient_SetStart(this.h, start.cPointer())
}

func (this *QLinearGradient) SetStart2(x float64, y float64) {
	C.QLinearGradient_SetStart2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QLinearGradient) FinalStop() *QPointF {
	_ret := C.QLinearGradient_FinalStop(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLinearGradient) SetFinalStop(stop *QPointF) {
	C.QLinearGradient_SetFinalStop(this.h, stop.cPointer())
}

func (this *QLinearGradient) SetFinalStop2(x float64, y float64) {
	C.QLinearGradient_SetFinalStop2(this.h, (C.double)(x), (C.double)(y))
}

// Delete this object from C++ memory.
func (this *QLinearGradient) Delete() {
	C.QLinearGradient_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLinearGradient) GoGC() {
	runtime.SetFinalizer(this, func(this *QLinearGradient) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QRadialGradient struct {
	h *C.QRadialGradient
	*QGradient
}

func (this *QRadialGradient) cPointer() *C.QRadialGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadialGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRadialGradient(h *C.QRadialGradient) *QRadialGradient {
	if h == nil {
		return nil
	}
	return &QRadialGradient{h: h, QGradient: UnsafeNewQGradient(unsafe.Pointer(h))}
}

func UnsafeNewQRadialGradient(h unsafe.Pointer) *QRadialGradient {
	return newQRadialGradient((*C.QRadialGradient)(h))
}

// NewQRadialGradient constructs a new QRadialGradient object.
func NewQRadialGradient() *QRadialGradient {
	ret := C.QRadialGradient_new()
	return newQRadialGradient(ret)
}

// NewQRadialGradient2 constructs a new QRadialGradient object.
func NewQRadialGradient2(center *QPointF, radius float64, focalPoint *QPointF) *QRadialGradient {
	ret := C.QRadialGradient_new2(center.cPointer(), (C.double)(radius), focalPoint.cPointer())
	return newQRadialGradient(ret)
}

// NewQRadialGradient3 constructs a new QRadialGradient object.
func NewQRadialGradient3(cx float64, cy float64, radius float64, fx float64, fy float64) *QRadialGradient {
	ret := C.QRadialGradient_new3((C.double)(cx), (C.double)(cy), (C.double)(radius), (C.double)(fx), (C.double)(fy))
	return newQRadialGradient(ret)
}

// NewQRadialGradient4 constructs a new QRadialGradient object.
func NewQRadialGradient4(center *QPointF, radius float64) *QRadialGradient {
	ret := C.QRadialGradient_new4(center.cPointer(), (C.double)(radius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient5 constructs a new QRadialGradient object.
func NewQRadialGradient5(cx float64, cy float64, radius float64) *QRadialGradient {
	ret := C.QRadialGradient_new5((C.double)(cx), (C.double)(cy), (C.double)(radius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient6 constructs a new QRadialGradient object.
func NewQRadialGradient6(center *QPointF, centerRadius float64, focalPoint *QPointF, focalRadius float64) *QRadialGradient {
	ret := C.QRadialGradient_new6(center.cPointer(), (C.double)(centerRadius), focalPoint.cPointer(), (C.double)(focalRadius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient7 constructs a new QRadialGradient object.
func NewQRadialGradient7(cx float64, cy float64, centerRadius float64, fx float64, fy float64, focalRadius float64) *QRadialGradient {
	ret := C.QRadialGradient_new7((C.double)(cx), (C.double)(cy), (C.double)(centerRadius), (C.double)(fx), (C.double)(fy), (C.double)(focalRadius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient8 constructs a new QRadialGradient object.
func NewQRadialGradient8(param1 *QRadialGradient) *QRadialGradient {
	ret := C.QRadialGradient_new8(param1.cPointer())
	return newQRadialGradient(ret)
}

func (this *QRadialGradient) Center() *QPointF {
	_ret := C.QRadialGradient_Center(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRadialGradient) SetCenter(center *QPointF) {
	C.QRadialGradient_SetCenter(this.h, center.cPointer())
}

func (this *QRadialGradient) SetCenter2(x float64, y float64) {
	C.QRadialGradient_SetCenter2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRadialGradient) FocalPoint() *QPointF {
	_ret := C.QRadialGradient_FocalPoint(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRadialGradient) SetFocalPoint(focalPoint *QPointF) {
	C.QRadialGradient_SetFocalPoint(this.h, focalPoint.cPointer())
}

func (this *QRadialGradient) SetFocalPoint2(x float64, y float64) {
	C.QRadialGradient_SetFocalPoint2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRadialGradient) Radius() float64 {
	return (float64)(C.QRadialGradient_Radius(this.h))
}

func (this *QRadialGradient) SetRadius(radius float64) {
	C.QRadialGradient_SetRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) CenterRadius() float64 {
	return (float64)(C.QRadialGradient_CenterRadius(this.h))
}

func (this *QRadialGradient) SetCenterRadius(radius float64) {
	C.QRadialGradient_SetCenterRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) FocalRadius() float64 {
	return (float64)(C.QRadialGradient_FocalRadius(this.h))
}

func (this *QRadialGradient) SetFocalRadius(radius float64) {
	C.QRadialGradient_SetFocalRadius(this.h, (C.double)(radius))
}

// Delete this object from C++ memory.
func (this *QRadialGradient) Delete() {
	C.QRadialGradient_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadialGradient) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadialGradient) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QConicalGradient struct {
	h *C.QConicalGradient
	*QGradient
}

func (this *QConicalGradient) cPointer() *C.QConicalGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QConicalGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQConicalGradient(h *C.QConicalGradient) *QConicalGradient {
	if h == nil {
		return nil
	}
	return &QConicalGradient{h: h, QGradient: UnsafeNewQGradient(unsafe.Pointer(h))}
}

func UnsafeNewQConicalGradient(h unsafe.Pointer) *QConicalGradient {
	return newQConicalGradient((*C.QConicalGradient)(h))
}

// NewQConicalGradient constructs a new QConicalGradient object.
func NewQConicalGradient() *QConicalGradient {
	ret := C.QConicalGradient_new()
	return newQConicalGradient(ret)
}

// NewQConicalGradient2 constructs a new QConicalGradient object.
func NewQConicalGradient2(center *QPointF, startAngle float64) *QConicalGradient {
	ret := C.QConicalGradient_new2(center.cPointer(), (C.double)(startAngle))
	return newQConicalGradient(ret)
}

// NewQConicalGradient3 constructs a new QConicalGradient object.
func NewQConicalGradient3(cx float64, cy float64, startAngle float64) *QConicalGradient {
	ret := C.QConicalGradient_new3((C.double)(cx), (C.double)(cy), (C.double)(startAngle))
	return newQConicalGradient(ret)
}

// NewQConicalGradient4 constructs a new QConicalGradient object.
func NewQConicalGradient4(param1 *QConicalGradient) *QConicalGradient {
	ret := C.QConicalGradient_new4(param1.cPointer())
	return newQConicalGradient(ret)
}

func (this *QConicalGradient) Center() *QPointF {
	_ret := C.QConicalGradient_Center(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QConicalGradient) SetCenter(center *QPointF) {
	C.QConicalGradient_SetCenter(this.h, center.cPointer())
}

func (this *QConicalGradient) SetCenter2(x float64, y float64) {
	C.QConicalGradient_SetCenter2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QConicalGradient) Angle() float64 {
	return (float64)(C.QConicalGradient_Angle(this.h))
}

func (this *QConicalGradient) SetAngle(angle float64) {
	C.QConicalGradient_SetAngle(this.h, (C.double)(angle))
}

// Delete this object from C++ memory.
func (this *QConicalGradient) Delete() {
	C.QConicalGradient_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QConicalGradient) GoGC() {
	runtime.SetFinalizer(this, func(this *QConicalGradient) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGradient__QGradientData struct {
	h *C.QGradient__QGradientData
}

func (this *QGradient__QGradientData) cPointer() *C.QGradient__QGradientData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGradient__QGradientData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGradient__QGradientData(h *C.QGradient__QGradientData) *QGradient__QGradientData {
	if h == nil {
		return nil
	}
	return &QGradient__QGradientData{h: h}
}

func UnsafeNewQGradient__QGradientData(h unsafe.Pointer) *QGradient__QGradientData {
	return newQGradient__QGradientData((*C.QGradient__QGradientData)(h))
}

// NewQGradient__QGradientData constructs a new QGradient::QGradientData object.
func NewQGradient__QGradientData(param1 *QGradient__QGradientData) *QGradient__QGradientData {
	ret := C.QGradient__QGradientData_new(param1.cPointer())
	return newQGradient__QGradientData(ret)
}

// Delete this object from C++ memory.
func (this *QGradient__QGradientData) Delete() {
	C.QGradient__QGradientData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGradient__QGradientData) GoGC() {
	runtime.SetFinalizer(this, func(this *QGradient__QGradientData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}