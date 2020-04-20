//
// Created by rodrigo on 19/04/2020.
//


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

#include "../headers/calculos.h"

/*
 * importar -> include for gets
 * ver como funciona o .h macro do C in .cpp
 * */

void banner(char* string){
    if (!strcmp(string, "02")){
        printf("\nFatorial\n");
        printf("Digite um numero inteiro: ");
    } else if (!strcmp(string, "02.1")){
        printf("Deseja calcular o fatorial de outro número [S/N] ? _");
    }
    else{
        printf("thanks for using application!");
    }


}

int application_menu(){
    printf("\nMenu Principal\n\n");
    char menu[] = "[02] Fatorial V\n" // fixme/done
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
        char option[10];
        printf("%s", menu);
        puts("Escolha uma opção do menu: ");
        scanf("%s", &option);


        if(!strcmp(option, "02")){
            do{

                int number;
                char loop[10];
                banner("02");
                scanf("%i", &number);
                fatorial(number);
                while (true){
                    banner("02.1");
                    scanf("%s", &loop);
                    if (!strcmp(loop, "S") || !strcmp(loop, "s")){
                        banner("02");
                        scanf("%i", &number);
                        fatorial(number);
                    } else{
                        break;
                    }

                }
                break;
            }while (true);

        } else if (!strcmp(option, "03")){
            serie();
        } else if (!strcmp(option, "04") || !strcmp(option, "41")){
            tabuada();
            break;
        } else if (!strcmp(option, "05")){
            somatoria();
            break;
        } else if (!strcmp(option, "18")){
            idade();
            break;
        } else if (!strcmp(option, "16")){
            media();
            break;
        } else if (!strcmp(option, "21")){
            salario();
            break;
        } else if (!strcmp(option, "23")){
            estatistica();
            break;
        } else if (!strcmp(option, "28")){
            triangulo();
            break;
        } else if (!strcmp(option, "29")){
            primos();
            break;
        } else if (!strcmp(option, "99")){
            printf("choose to leave... ");
            banner("");
            break;
        }
        else{
            printf("Opcao invalida! Favor escolher uma das opções ou 99 para Sair.");

        }

    }
    return EXIT_SUCCESS;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    application_menu();
    return 0;
}
