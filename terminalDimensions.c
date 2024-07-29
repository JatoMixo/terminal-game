#include <sys/ioctl.h>
#include <unistd.h>

vector2 getTerminalDimensions() {
    struct winsize terminalWindow;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminalWindow);

    vector2 size = {
        .x = terminalWindow.ws_col,
        .y = terminalWindow.ws_row,
    };

    return size;
}

