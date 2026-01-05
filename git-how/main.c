#include <stdio.h>
#include "commands.h"
#include "how.h"

int main(int argc, const char **argv) {
    init_how();
    return how_main(argc, argv);
}
