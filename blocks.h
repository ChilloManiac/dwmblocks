#define EMPTYBLOCK {"", "echo -n '   '", 3600,  0}


//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "cdmblockstest.sh 1",              120,    1}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 2",              120,    2}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 3",              120,    3}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 4",              120,    4}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 5",              120,    5}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 6",              120,    6}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 7",              120,    7}, EMPTYBLOCK,
    {"", "cdmblockstest.sh 8",              120,    8}, EMPTYBLOCK,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';