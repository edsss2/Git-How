#include <stdio.h>
#include "help.h"
#include "commands.h"

int main(int argc, const char **argv) {
    init_how();
    return how_main(argc, argv);
}
