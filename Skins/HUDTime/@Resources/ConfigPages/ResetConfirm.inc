[ResetConfirmMessageString]
Meter=String
MeterStyle=StyleText
StringAlign=Center
ClipString=2
X=(#bgWidth# / 2)
Y=50
W=(#bgWidth# - 10)
Text="Are you sure? This is irreversable!"

[ResetConfirmButtonYesString]
Meter=String
MeterStyle=StyleText
FontColor=89,186,255,230
StringAlign=Center
X=(#bgWidth# / 4)
Y=80
Text="Yes"
LeftMouseUpAction=[!CommandMeasure ScriptSettings "resetSettings()"][!WriteKeyValue Variables page "main"]

[ResetConfirmButtonNoString]
Meter=String
MeterStyle=StyleText
FontColor=89,186,255,230
StringAlign=Center
X=(#bgWidth# / 4 * 3)
Y=0r
Text="No"
LeftMouseUpAction=[!WriteKeyValue Variables page "main"][!Refresh]