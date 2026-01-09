#ifndef GIT_COMMAND_H
#define GIT_COMMAND_H

#include <stddef.h>
#include "Flag.h"


typedef struct {
    const char *name;
    const char *short_description;
    const char *usage;

    const Flag *flags;
    size_t flag_count;
}GitCommand;

#endif