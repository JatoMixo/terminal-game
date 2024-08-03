#include "terminalDimensions.h"

vector2_t getTerminalDimensions(void) {
    struct winsize terminalWindow;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminalWindow);

    vector2_t size = {
        .x = terminalWindow.ws_col,
        .y = terminalWindow.ws_row,
    };

    return size;
}

