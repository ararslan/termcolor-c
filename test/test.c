#include <stdio.h>
#include "../include/termcolor-c.h"

int main(int argc, char** argv) {
    /* Foreground colors */
    fputs("default text\n", stdout);
    fputs("grey text\n", text_grey(stdout));
    fputs("red text\n", text_red(stdout));
    fputs("green text\n", text_green(stdout));
    fputs("yellow text\n", text_yellow(stdout));
    fputs("blue text\n", text_blue(stdout));
    fputs("magenta text\n", text_magenta(stdout));
    fputs("cyan text\n", text_cyan(stdout));
    fputs("white text\n", text_white(stdout));
    reset_colors(stdout);

    /* Background colors */
    fputs("text on grey\n", background_grey(stdout));
    fputs("text on red\n", background_red(stdout));
    fputs("text on green\n", background_green(stdout));
    fputs("text on yellow\n", background_yellow(stdout));
    fputs("text on blue\n", background_blue(stdout));
    fputs("text on magenta\n", background_magenta(stdout));
    fputs("text on cyan\n", background_cyan(stdout));
    fputs("text on white\n", background_white(stdout));
    reset_colors(stdout);
    fputs("default text\n", stdout);

    /* Foreground and background colors */
    fputs("red on white\n", background_white(text_red(stdout)));
    fputs("blue on yellow\n", background_yellow(text_blue(stdout)));
    reset_colors(stdout);

    /* Unusual attributes */
    fputs("bold red text\n", text_bold(text_red(stdout)));
    reset_colors(stdout);
    fputs("dark blue text\n", text_dark(text_blue(stdout)));
    reset_colors(stdout);
    fputs("underlined text\n", text_underline(stdout));
    reset_colors(stdout);
    fputs("blinking text\n", text_blink(stdout));
    reset_colors(stdout);
    fputs("reversed text\n", text_reverse(stdout));
    reset_colors(stdout);
    fputs("concealed text\n", text_concealed(stdout));
    reset_colors(stdout);

    return 0;
}
