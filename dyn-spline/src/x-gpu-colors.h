
#pragma once

#include "x-gpu-ifc.h"
#include "x-simd.h"


// Standard colors (Red/Green/Blue/Alpha)
// Taken from DX11 header and converted to use a cross-platform neutral type.
// Also refactored to use an h/inl combination, in case we need to deal with some toolchain that lacks
// features like comdat elimination and/or LTO.

struct GPU_Colors {
	static const float4 AliceBlue            ;
	static const float4 AntiqueWhite         ;
	static const float4 Aqua                 ;
	static const float4 Aquamarine           ;
	static const float4 Azure                ;
	static const float4 Beige                ;
	static const float4 Bisque               ;
	static const float4 Black                ;
	static const float4 BlanchedAlmond       ;
	static const float4 Blue                 ;
	static const float4 BlueViolet           ;
	static const float4 Brown                ;
	static const float4 BurlyWood            ;
	static const float4 CadetBlue            ;
	static const float4 Chartreuse           ;
	static const float4 Chocolate            ;
	static const float4 Coral                ;
	static const float4 CornflowerBlue       ;
	static const float4 Cornsilk             ;
	static const float4 Crimson              ;
	static const float4 Cyan                 ;
	static const float4 DarkBlue             ;
	static const float4 DarkCyan             ;
	static const float4 DarkGoldenrod        ;
	static const float4 DarkGray             ;
	static const float4 DarkGreen            ;
	static const float4 DarkKhaki            ;
	static const float4 DarkMagenta          ;
	static const float4 DarkOliveGreen       ;
	static const float4 DarkOrange           ;
	static const float4 DarkOrchid           ;
	static const float4 DarkRed              ;
	static const float4 DarkSalmon           ;
	static const float4 DarkSeaGreen         ;
	static const float4 DarkSlateBlue        ;
	static const float4 DarkSlateGray        ;
	static const float4 DarkTurquoise        ;
	static const float4 DarkViolet           ;
	static const float4 DeepPink             ;
	static const float4 DeepSkyBlue          ;
	static const float4 DimGray              ;
	static const float4 DodgerBlue           ;
	static const float4 Firebrick            ;
	static const float4 FloralWhite          ;
	static const float4 ForestGreen          ;
	static const float4 Fuchsia              ;
	static const float4 Gainsboro            ;
	static const float4 GhostWhite           ;
	static const float4 Gold                 ;
	static const float4 Goldenrod            ;
	static const float4 Gray                 ;
	static const float4 Green                ;
	static const float4 GreenYellow          ;
	static const float4 Honeydew             ;
	static const float4 HotPink              ;
	static const float4 IndianRed            ;
	static const float4 Indigo               ;
	static const float4 Ivory                ;
	static const float4 Khaki                ;
	static const float4 Lavender             ;
	static const float4 LavenderBlush        ;
	static const float4 LawnGreen            ;
	static const float4 LemonChiffon         ;
	static const float4 LightBlue            ;
	static const float4 LightCoral           ;
	static const float4 LightCyan            ;
	static const float4 LightGoldenrodYellow ;
	static const float4 LightGreen           ;
	static const float4 LightGray            ;
	static const float4 LightPink            ;
	static const float4 LightSalmon          ;
	static const float4 LightSeaGreen        ;
	static const float4 LightSkyBlue         ;
	static const float4 LightSlateGray       ;
	static const float4 LightSteelBlue       ;
	static const float4 LightYellow          ;
	static const float4 Lime                 ;
	static const float4 LimeGreen            ;
	static const float4 Linen                ;
	static const float4 Magenta              ;
	static const float4 Maroon               ;
	static const float4 MediumAquamarine     ;
	static const float4 MediumBlue           ;
	static const float4 MediumOrchid         ;
	static const float4 MediumPurple         ;
	static const float4 MediumSeaGreen       ;
	static const float4 MediumSlateBlue      ;
	static const float4 MediumSpringGreen    ;
	static const float4 MediumTurquoise      ;
	static const float4 MediumVioletRed      ;
	static const float4 MidnightBlue         ;
	static const float4 MintCream            ;
	static const float4 MistyRose            ;
	static const float4 Moccasin             ;
	static const float4 NavajoWhite          ;
	static const float4 Navy                 ;
	static const float4 OldLace              ;
	static const float4 Olive                ;
	static const float4 OliveDrab            ;
	static const float4 Orange               ;
	static const float4 OrangeRed            ;
	static const float4 Orchid               ;
	static const float4 PaleGoldenrod        ;
	static const float4 PaleGreen            ;
	static const float4 PaleTurquoise        ;
	static const float4 PaleVioletRed        ;
	static const float4 PapayaWhip           ;
	static const float4 PeachPuff            ;
	static const float4 Peru                 ;
	static const float4 Pink                 ;
	static const float4 Plum                 ;
	static const float4 PowderBlue           ;
	static const float4 Purple               ;
	static const float4 Red                  ;
	static const float4 RosyBrown            ;
	static const float4 RoyalBlue            ;
	static const float4 SaddleBrown          ;
	static const float4 Salmon               ;
	static const float4 SandyBrown           ;
	static const float4 SeaGreen             ;
	static const float4 SeaShell             ;
	static const float4 Sienna               ;
	static const float4 Silver               ;
	static const float4 SkyBlue              ;
	static const float4 SlateBlue            ;
	static const float4 SlateGray            ;
	static const float4 Snow                 ;
	static const float4 SpringGreen          ;
	static const float4 SteelBlue            ;
	static const float4 Tan                  ;
	static const float4 Teal                 ;
	static const float4 Thistle              ;
	static const float4 Tomato               ;
	static const float4 Transparent          ;
	static const float4 Turquoise            ;
	static const float4 Violet               ;
	static const float4 Wheat                ;
	static const float4 White                ;
	static const float4 WhiteSmoke           ;
	static const float4 Yellow               ;
	static const float4 YellowGreen          ;
};
