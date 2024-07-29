#include <stdio.h>
#include <stdlib.h>
#include "vector2.c"
#include "terminalDimensions.c"

int main(int argv, char **argc) {

    vector2 a = getTerminalDimensions();
    printf("%d", a.x);

    return 0;
}
