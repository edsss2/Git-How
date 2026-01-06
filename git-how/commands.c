#include <string.h>
#include <stdio.h>

#include "commands.h"
#include "help.h"
#include "version.h"
#include "how.h"

static Command commands[] = {
    {"--help", show_help},
    {"--version", print_version},
    {"--list", print_list},
};

int dispatch_command(const char **argv) {
    int total = sizeof(commands) / sizeof(commands[0]);

    for (int i = 0; i < total; i++) {
        if (strcmp(argv[1], commands[i].name) == 0) {
            return commands[i].handler(argv);
        }

    }

    return command_not_found(argv[1]);
}

int handle_two_args(const char **argv) {
    return dispatch_command(argv);
}

int handle_many_args(int argc, const char **argv) {
    if(strcmp(argv[1], "git") == 0) {
        return how_do_git(argc, argv);
    } else {
        return how_explain_git(argc, argv);
    }

    return command_not_found(argv[1]);
}

int command_not_found(const char *cmd) {
    printf("Comando desconhecido: %s\n", cmd);
    printf("Use 'how --help'\n");
    return 1;
}