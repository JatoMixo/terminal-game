#include "main.h"

int main(int argv, char **argc) {

    vector2_t a = getTerminalDimensions();
    printf("%d", a.x);

    return 0;
}
