//
// Created by rodrigo on 19/04/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
//#include <conio.h>

#include "../headers/calculos.h"
#include "../utils/helper.c"      // example... without .h



/*
 * importar -> include for gets
 * ver como funciona o .h macro do C in .cpp
 * */

void banner(char *string) {
    if (!strcmp(string, "02")) {
        printf("\nFatorial\n");
        printf("Digite um numero inteiro: ");
    } else if (!strcmp(string, "02.1")) {
        printf("Deseja calcular o fatorial de outro número [S/N] ? _");
    } else if (!strcmp(string, "03")) {
        printf("\nSéries Matemáticas\n");
        printf("Digite um número inteiro: _");
    } else if (!strcmp(string, "03.1")) {
        printf("Deseja calcular a série de outro número? _");
    } else if (!strcmp(string, "04")) {
        printf("\nTabuada\n");
        printf("Digite um número inteiro:_");
    } else if (!strcmp(string, "04.1")) {
        printf("Deseja calcular a tabuada de outro\n"
               "número? _ ");
    } else if (!strcmp(string, "41")) {
        printf("\nTabuadas\n");
        printf("Digite dois numeros inteiros (n m): _");
    } else if (!strcmp(string, "41.1")) {
        printf("Deseja calcular a tabuada de outro\n"
               "intervalo de números? _");

    } else if (!strcmp(string, "05")) {
        printf("\nSomatório dos ímpares: _\n");
        printf("Digite dois numero inteiros (n m): _");
    } else if (!strcmp(string, "05.1")) {
        printf("Deseja calcular o somatório de ímpares para outro intervalo [S/N] ? _\n");

    } else if (!strcmp(string, "18")) {
        printf("\nIdade do mais velho e do mais novo!\n");
    } else if (!strcmp(string, "18.1")) {
        printf("\nDeseja informar a idade e o sexo de outro grupo de pessoas [S/N]?_\n");

    } else {
        printf("thanks for using application!");
    }


}


int application_menu() {
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

    while (true) {
        char option[10];
        printf("%s", menu);
        puts("Escolha uma opção do menu: _ ");
        scanf("%s", &option);


        if (!strcmp(option, "02")) {

            const bool n;
            const bool m;

            if (n <= m) {
                /*  Operação em ordem crescente.
                 *  n = 1 e m = 10, escreva 1 + 3 + 5 + 7 + 9 = 25.
                 *
                 * */
                printf("\nSomatória dos ímpares de: %d e %d\n", n, m);
                int sum = 0;
                int le[20];
                for (int i = 0; i <= m; i++) {
                    if ((i % 2) != 0) {
                        sum += i;
                        le[i] = i;

                    }

                }


                do {

                    int number;
                    char loop[10];
                    banner("02");
                    scanf("%i", &number);
                    fatorial(number);
                    while (true) {
                        banner("02.1");
                        scanf("%s", &loop);
                        if (!strcmp(loop, "S") || !strcmp(loop, "s")) {
                            banner("02");
                            scanf("%i", &number);
                            fatorial(number);
                        } else {
                            break;
                        }

                    }
                    break;
                } while (true);

            } else if (!strcmp(option, "03")) {
                do {

                    int number;
                    char loop[10];
                    banner("03");
                    scanf("%i", &number);
                    printf("Série: %.2f\n", serie(number));
                    while (true) {
                        banner("03.1");
                        scanf("%s", &loop);
                        if (!strcmp(loop, "S") || !strcmp(loop, "s")) {
                            banner("03");
                            scanf("%i", &number);
                            printf("Série: %.2f\n", serie(number));
                        } else {
                            break;
                        }

                    }
                    break;
                } while (true);


            } else if (!strcmp(option, "04")) {
                do {

                    int number;
                    char loop[10];
                    banner("04");
                    scanf("%i", &number);
                    tabuada(number);
                    while (true) {
                        banner("04.1");
                        scanf("%s", &loop);
                        if (!strcmp(loop, "S") || !strcmp(loop, "s")) {
                            banner("04");
                            scanf("%i", &number);
                            tabuada(number);
                        } else {
                            break;
                        }

                    }
                    break;
                } while (true);


            } else if (!strcmp(option, "41")) {
                do {

                    int n;
                    int m;
                    char loop[10];
                    banner("41");
                    scanf("%d %d", &n, &m);
                    tabuada_nm(n, m);
                    while (true) {
                        banner("41.1");
                        scanf("%s", &loop);
                        if (!strcmp(loop, "S") || !strcmp(loop, "s")) {
                            banner("41");
                            scanf("%d %d", &n, &m);
                            tabuada_nm(n, m);
                        } else {
                            break;
                        }

                    }
                    break;
                } while (true);

            } else if (!strcmp(option, "05")) {
                int number_one = 0, number_two = 0;
                do {

                    char loop[10];
                    banner("05");
                    scanf("%d %d", &number_one, &number_two);
                    somatoria(number_one, number_two);
                    while (true) {
                        banner("05.1");
                        scanf("%s", &loop);
                        if (!strcmp(loop, "S") || !strcmp(loop, "s")) {
                            banner("05");
                            scanf("%d %d", &number_one, &number_two);
                            somatoria(number_one, number_two);
                        } else {
                            break;
                        }

                    }
                    break;
                } while (true);

            } else if (!strcmp(option, "18")) {
                do {
                    char loop[10];
                    banner("18");
                    idade();
                    while (true) {
                        banner("18.1");
                        if (!strcmp(loop, "S") || !strcmp(loop, "s")) {
                            banner("18");
                            idade();
                        } else {
                            break;
                        }

                    }
                    break;
                } while (true);
            } else if (!strcmp(option, "16")) {
                media();
                break;
            } else if (!strcmp(option, "21")) {
                salario();
                break;
            } else if (!strcmp(option, "23")) {
                estatistica();
                break;
            } else if (!strcmp(option, "28")) {
                triangulo();
                break;
            } else if (!strcmp(option, "29")) {
                primos();
                break;
            } else if (!strcmp(option, "99")) {
                printf("choose to leave... ");
                banner("");
                break;
            } else {
                printf("Opcao invalida! Favor escolher uma das opções ou 99 para Sair.");

            }

        }
        return EXIT_SUCCESS;
    }
    return 1;
}

void sample_example(){
    printf("%s, %f", "hello world", hello_world_with_pi(true));

}



void uni9(){

}


int main(){
//    application_menu();
//    sample_example();
    uni9();

}