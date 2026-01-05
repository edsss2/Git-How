#ifndef COMMANDS_H
#define COMMANDS_H

typedef int (*command_fn)(const char **argv);

typedef struct {
    const char *name;
    command_fn handler;
} Command;

int handle_two_args(const char **argv);
int handle_many_args(int argc, const char **argv);
int command_not_found(const char *cmd);
int dispatch_command(const char **argv);

#endif