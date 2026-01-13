#include "git_command.h"

static const char *init_quiet_names[] = {
    "-q",
    "--quiet",
};

static const char *init_branch_names[] = {
    "-q",
    "--initial-branch",
};

static const Flag init_flags[] = {
    {init_quiet_names, "Exiba apenas mensagens de erro.", "git init [-q | --quiet]"},
    {
        "--bare", 
        "Cria um repositório bare geralmente utilizado como repositório central.\n"
        "Não possui área de trabalho oque impede a edição direta dos arquivos.",
        "git init [--bare]"
    },
    {init_branch_names, "Especifica o nome do branch inicial.", "git init [-b <branch_name> | --initial-branch=<branch_name>]"},
};

static const GitCommand init_command = {
    "init",
    "Cria um novo repositório Git ou reinicializa um repositório existente.",
    "Para utilizar esse comando, navegue até o diretório onde deseja criar o repositório e execute-o,\n"
    "ou passe o caminho do diretório como argumento: git init [diretório]\n\n"
    "Como usar:\n"
    "git init [opções] [diretório]\n\n",
    init_flags,
    sizeof(init_flags) / sizeof(init_flags[0])
};

const GitCommand git_commands[] = {
    init_command,
    // Outros comandos podem ser adicionados aqui
};

const size_t git_command_count = sizeof(git_commands) / sizeof(git_commands[0]);