#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    if (setuid(0) != 0) {
        fprintf(stderr, "Failed to setuid: %s\n", strerror(errno));
        return -1;
    }
    return system("sh -i");
}
