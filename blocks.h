#define EMPTYBLOCK {"", "echo -n '   '", 3600,  0}
#define SYSTRAYPAD {"", "echo -n '                '", 3600, 0}


//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "charddrivestat.sh",               3600,   0}, EMPTYBLOCK,
    {"", "cmemstat.sh",                     60,     0}, EMPTYBLOCK,
    {"", "ccpustat.sh",                     10,     0}, EMPTYBLOCK,
    {"", "cvolget.sh",                      0,      1}, EMPTYBLOCK, // Should be 0 interval and update when used with script later
    {"", "cweather",                        600,    0}, EMPTYBLOCK,
    //{"", "cnetstat.sh",                     60,     0}, EMPTYBLOCK,
    //{"", "cbatstat.sh",                     180,    0}, EMPTYBLOCK,
    {"", "cclockget.sh",                    60,     0}, EMPTYBLOCK,
    SYSTRAYPAD,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';