#ifndef COMMON_H
#define COMMON_H

#include <unistd.h>

// Function to simulate a spin/wait for a specified number of seconds
void Spin(int seconds) {
    sleep(seconds);
}

#endif // COMMON_H