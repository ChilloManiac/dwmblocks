#define SCRIPT_PATH "~/.config/dwmblocks/blockscripts/"
#define SCRIPT(file) SCRIPT_PATH file
#define EMPTYBLOCK {"", "echo -n '   '", 3600,  0}


//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", SCRIPT("drive.sh"),            3600,   0}, EMPTYBLOCK,
    {"", SCRIPT("mem.sh"),              60,     0}, EMPTYBLOCK,
    {"", SCRIPT("cpu.sh"),              10,     0}, EMPTYBLOCK,
    {"", SCRIPT("vol.sh"),              10,     1}, EMPTYBLOCK, // Should be 0 interval and update when used with script later
    {"", SCRIPT("network.sh"),          60,     0}, EMPTYBLOCK,
    {"", SCRIPT("battery.sh"),          180,    0}, EMPTYBLOCK,
    {"", SCRIPT("clock.sh"),            60,     0}, EMPTYBLOCK,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';