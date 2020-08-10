#define EMPTYBLOCK {"", "echo -n '   '", 3600,  0}


//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    EMPTYBLOCK,
    {"", "charddrivestat.sh",               3600,   4}, EMPTYBLOCK,
    {"", "cmemstat.sh",                     60,     3}, EMPTYBLOCK,
    {"", "ccpustat.sh",                     10,     2}, EMPTYBLOCK,
    {"", "cvolget.sh",                      0,      1}, EMPTYBLOCK, 
    {"", "cweather.sh",                     600,    5}, EMPTYBLOCK,
    {"", "cclockget.sh",                    60,     6}, EMPTYBLOCK,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';