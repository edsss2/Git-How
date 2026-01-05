#include <stdio.h>
#include "help.h"
#include <strings.h>
#include <stdlib.h>
#include "colors.h"

int show_how() {
    printf(
        COLOR_BOLD "Git How\n" COLOR_RESET
        "O git how tem o objetivo de te ajudar com o Git, \n"
        "mas acredito que já conhece a ideia do projeto neh?\n\n"
    );

    printf(COLOR_YELLOW "MODOS DE USO\n" COLOR_RESET);

    printf(
        "  Como utilizar um comando:\n"
        "    how git <comando>\n\n"

        "  Como entender um comando:\n"
        "    how <comando>\n\n"
    );

    printf(COLOR_YELLOW "EXEMPLOS\n" COLOR_RESET);

    printf(
        "  how git commit\n"
        "    Mostra como realizar um commit no Git.\n\n"

        "  how commit\n"
        "    Explica o que é um commit e para que ele serve.\n\n"
    );

    printf(COLOR_BOLD "Use 'how --help' para mais opções.\n" COLOR_RESET);
    return 0;
}

int show_help() {
    printf("usage: how git <command>    Mostra como usar um comando Git\n");
    printf("       how <command>        Explica oque um comando faz\n");
    printf("       how --version\n");
    printf("       how --help\n\n");

    printf("Outros comandos possíveis na aplicação:\n");
    printf("    how --version       Mostra a versão do seu Git-How\n");
    printf("    how --list          Lista os comandos Git\n");
    return 0;
}

int print_list() {
    printf(
        "Comandos principais do Git\n"
        "\n"
        "Os comandos abaixo podem ser utilizados com o 'how'\n"
        "para obter explicações e exemplos de uso.\n"
        "\n"
    );

    printf(

        COLOR_YELLOW "iniciar uma área de trabalho\n" COLOR_RESET
        "  clone     Clona um repositório para um novo diretório\n"
        "  init      Cria um repositório Git vazio ou reinicializa um existente\n\n"

        COLOR_YELLOW "trabalhar na alteração atual\n" COLOR_RESET
        "  add       Adiciona o conteúdo dos arquivos à área de preparação (index)\n"
        "  mv        Move ou renomeia um arquivo, diretório ou link simbólico\n"
        "  restore   Restaura arquivos da árvore de trabalho\n"
        "  rm        Remove arquivos da árvore de trabalho e do index\n\n"

        COLOR_YELLOW "examinar o histórico e o estado\n" COLOR_RESET
        "  bisect    Usa busca binária para encontrar o commit que introduziu um bug\n"
        "  diff      Mostra as alterações entre commits, commit e árvore de trabalho, etc\n"
        "  grep      Exibe linhas que correspondem a um padrão\n"
        "  log       Mostra o histórico de commits\n"
        "  show      Exibe diferentes tipos de objetos\n"
        "  status    Mostra o estado da árvore de trabalho\n\n"

        COLOR_YELLOW "evoluir, marcar e ajustar o histórico\n" COLOR_RESET
        "  branch    Lista, cria ou remove branches\n"
        "  commit    Registra alterações no repositório\n"
        "  merge     Junta dois ou mais históricos de desenvolvimento\n"
        "  rebase    Reaplica commits sobre outro commit base\n"
        "  reset     Redefine o HEAD atual para um estado específico\n"
        "  switch    Troca de branch\n"
        "  tag       Cria, lista, remove ou verifica uma tag assinada com GPG\n\n"

        COLOR_YELLOW "colaborar\n" COLOR_RESET
        "  fetch     Baixa objetos e referências de outro repositório\n"
        "  pull      Busca e integra alterações de outro repositório ou branch local\n"
        "  push      Atualiza referências remotas junto com os objetos associados\n"

    );

    printf(
        "\n"
        "--------------------------------------------------\n"
        "Nota: Esta lista de comandos foi baseada na saída\n"
        "do comando 'git --help' e traduzida para português.\n"
    ); 
}
