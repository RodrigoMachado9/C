//
// Created by rodrigo on 19/04/2020.
//


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

#include "../header/calculos.h"

/*
 * importar -> include for gets
 * ver como funciona o .h macro do C in .cpp
 * */

int application_menu(){
    printf("\nMenu Principal\n\n");
    char menu[] = "[02] Fatorial V\n"
                  "[03] Serie 1+ 1/2+1/2+..+1/n\n"
                  "[04] Tabuada de n V\n"
                  "[41] Tabuada de n ate m V\n"
                  "[05] Somatório dos impares entre n e m\n"
                  "[18] Idade do mais velho e do mais novo V\n"
                  "[16] Media de 30 números\n"
                  "[21] Salario do Clarisbela\n"
                  "[23] Estatística de candidatos\n"
                  "[28] Triângulo\n"
                  "[29] Primos\n"
                  "[99] Sair\n";

    while (true){
        char option;
        printf("%s", menu);
        puts("Escolha uma opção do menu: ");
//        system("clear");
//        fflush(stdin);
//        option = getchar();
        fatorial();
        scanf("%s", &option);

        return EXIT_SUCCESS;
    }


}

int main() {
    setlocale(LC_ALL, "portuguese");
    application_menu();
    return 0;
}
