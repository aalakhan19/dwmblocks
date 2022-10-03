// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal + 34*/
	{"", "echo VOL: $(pactl list sinks | grep -iq 'muted: yes' && echo muted || (pactl list sinks | grep -i volume | head -n1 | awk '{print $5}'))", 0, 10},
	{"", "echo BAT: $(upower -i $(upower -e | grep BAT) | grep percentage | awk '{print $2}')", 60, 0},
	{"", "date +'%d.%m.%y %H:%M'", 60, 0},

};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
