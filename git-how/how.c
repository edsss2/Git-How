#include "how.h"
#include "commands.h"
#include "help.h"

void init_how(){
    return;
}

int how_main(int argc, const char **argv) {
    switch (argc) {
        case 1:
            show_help();
            break;
        case 2:
            return handle_two_args(argv);
        default:
            return handle_many_args(argc, argv);
    }
}