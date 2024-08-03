#ifndef _TDIMENSIONS_
#define _TDIMENSIONS_

#include <sys/ioctl.h>
#include <unistd.h>

#include "vector2.h"

// Get the dimensions of the terminal in which the game is running
vector2_t getTerminalDimensions(void);

#endif
