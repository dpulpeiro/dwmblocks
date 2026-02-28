//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-shutdown",	0,	1}, 
	{"",    "cat /tmp/recordingicon 2>/dev/null",	0,	19},
	{"",	"sb-record",	0,	2}, 
	{"",	"sb-bluetooth",	30,	9}, 
	{"",	"sb-memory",	5,	14}, 
	{"",	"sb-cpu",		2,	18}, 
	{"",	"sb-volume",	0,	10},
	{"",	"sb-battery",	30,	3},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	10,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
