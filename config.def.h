/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"DepartureMono Nerd Font:size=16"};
static const char *prompt = "> "; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*                  fg         bg       */
    [SchemeNorm] =   { "#74888C", "#D5D4C0" },
    [SchemeSel] =    { "#45575B", "#D5D4C0" },
    [SchemeOut] =    { "#74888C", "#D5D4C0" },
    [SchemeBorder] = { "#74888C", "#74888C" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 4;
