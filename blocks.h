//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "music-block", 5, 9},
  {"",	"vol-block",	0,	10},
	{"", "mem-block",	30,		0},
  {"",	"temp-block",	1800,	0},
	{"", "date '+%H:%M %a %d/%m W:%V '",					15,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
