//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"Root:", "df -h /dev/sda2 |awk 'NR==2{print $4\"/\"$2 }'", 		60,		0},

	{"BTC:", "curl rate.sx/btc | awk 'NR==36{print $2}' | cut -c 1-7",	60,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
