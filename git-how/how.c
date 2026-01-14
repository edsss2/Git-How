#include <stdio.h>

#include "how.h"
#include "commands.h"
#include "help.h"
#include "git_commands_data.h"

void init_how(){
    return;
}

int how_main(int argc, const char **argv) {
    switch (argc) {
        case 1:
            return show_how();
        case 2:
            return handle_two_args(argv);
        default:
            return handle_many_args(argc, argv);
    }
}

int how_do_git(int argc, const char **argv) {
    int start_index = 3;
    int args_count = argc - start_index;

    const char **args = extract_command_args(start_index, argv);

    int index_command = extract_command_index(argv[2], git_command_count);

    Flag *flags = git_commands[index_command].flags;





}

int extract_command_index(const char *command, int total) {
    for (int i = 0; i < total; i++) {
        if (strcmp(command, git_commands[i].name) == 0) {
            return i;
        }
    }
}

const char **extract_command_args(int start_index, const char **argv) {
    return &argv[start_index];
}



int how_explain_git(int argc, const char **argv) {
    return 0;
}