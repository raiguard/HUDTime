[ResetButton]
Meter=String
MeterStyle=StyleText
FontSize=11
FontColor=89,186,255,230
StringAlign=Center
X=(#bgWidth# / 2)
Y=-30r
Text="Reset to defaults"
LeftMouseUpAction=[!WriteKeyValue Variables page "resetConfirm"][!Refresh]

; ----- Font Color -----
[ColoringOptionsFontColorLabelString]
Meter=String
MeterStyle=StyleText
FontSize=11
Y=30
Text="Text Color"

[ColoringOptionsFontColorBoxBg]
Meter=Image
SolidColor=0,0,0,255
X=2r
Y=17r
W=24
H=24

[ColoringOptionsFontColorBox]
Meter=Image
SolidColor=#fontColor#
X=2r
Y=2r
W=20
H=20

[ColoringOptionsFontColorAlphaBarBg]
Meter=Image
SolidColor=100,100,100,130
X=26r
Y=0r
W=120
H=4
ToolTipText="Set the transparency of this color"
LeftMouseUpAction=[!CommandMeasure ScriptSettings "changeAlpha('fontColor', '$MouseX:%$', 'StyleSheet.inc')"][!RefreshGroup HUDTime]

[ColoringOptionsFontColorAlphaBar]
Meter=Image
SolidColor=250,250,250,240
X=0r
Y=0r
W=80
H=4

[ColoringOptionsFontColorTextField]
Meter=String
MeterStyle=StyleText
X=0r
Y=7r
Text=#fontColor#
LeftMouseUpAction=[!CommandMeasure InputText "ExecuteBatch 1"]

; ----- Font -----
[OptionsFontFaceLabel]
Meter=String
MeterStyle=StyleText
Y=17r
Text="Font:"

[OptionsFontFaceTextField]
Meter=String
MeterStyle=StyleText
X=([OptionsFontFaceLabel:W] + 3)r
Y=0r
Text=#fontFace#
LeftMouseUpAction=[!CommandMeasure InputText "ExecuteBatch 2"]

[OptionsFontFaceNoteString]
Meter=String
MeterStyle=StyleText
FontColor=200,200,200,255
FontSize=9
ClipString=2
W=(#bgWidth# - 10)
Text="Please note that changing the font could potentially cause positioning in HUDTime to get skewed. Proceed at your own risk."

; ----- Toggle Options -----

; 24-hour time
[ToggleOptions24hrTimeBoxEnabled]
Meter=String
MeterStyle=StyleText | StyleCheckbox
Y=([OptionsFontFaceNoteString:H] + 3)r
Text="þ"
Hidden=(#24hrTime# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables 24hrTime 0 "#styleSheetPath#"][!RefreshGroup HUDTime]

[ToggleOptions24hrTimeBoxDisabled]
Meter=String
MeterStyle=StyleText | StyleCheckbox
X=0r
Y=0r
Text="o"
Hidden=#24hrTime#
LeftMouseUpAction=[!WriteKeyValue Variables 24hrTime 1 "#styleSheetPath#"][!RefreshGroup HUDTime]

[ToggleOptions24hrTimeLabelString]
Meter=String
MeterStyle=StyleText
X=20r
Y=0r
Text="Use 24-hour time"

; ----- Update checker -----
[UCString]
Meter=String
MeterStyle=StyleText | StyleUpdateCheckerButton
Y=25r