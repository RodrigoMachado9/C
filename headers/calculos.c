//
// Created by rodrigo on 19/04/2020.
//
#include <stdio.h>
#include "calculos.h"
#include <string.h>


int fatorial(int number){
    int fatorial = number;
    int controle = 1;
    int matrix[number];
    int index = 0;

    for(  ; fatorial >= 1; -- fatorial){
        controle*=fatorial;
        matrix[index] = index;
        index+=1;
    }
    // fixme - include factorial notation~
    // fixme - 4! = 4.3.2.1 = 24~
    // fixme - conio.h not included ( investigation reason )
    printf("O fatorial de: %d é : %d.\n", number, controle);

    return 1;
}


double serie(int number){
    // todo  - soma do recíproco dos primos  || harmonic series
    int i;
    float sum = 0;
    for (i = 1; i <= number; i++){
        sum = sum + (float)1/i;
    }

    return sum;
}

int tabuada(int number){
    for(int x = 1; x <= 10; ++x){
        printf("%i x %i = %i\n", x, number, x  * number);
    }
    return 1;
}

int tabuada_nm(int inicio, int fim) {
    printf("\nTabuada do %i ao %i.\n\n", inicio, fim);
    if(inicio <= fim){
        int multiplicando, multiplicador, produto;
        // for que irá gerar os multiplicandos
        for (multiplicando=inicio; multiplicando <= fim; multiplicando ++){
            // for que irá gerar os multiplicadores
            for (multiplicador=1; multiplicador<=10; multiplicador ++){
                // calcula o produto => multiplicando x multiplicador = produto
                produto = multiplicando * multiplicador;
                printf("%d x %d = %d\n", multiplicando, multiplicador, produto);
            }
            // quebra de linha  para separar cada as tabuadas construidas;
            printf("\n");

        }

    } else{
        int multiplicando, multiplicador, produto;
        // for que irá gerar os multiplicandos
        for (multiplicando=inicio; multiplicando >= fim; multiplicando --){
            // for que irá gerar os multiplicadores
            for (multiplicador=1; multiplicador<=10; multiplicador ++){
                // calcula o produto => multiplicando x multiplicador = produto
                produto = multiplicando * multiplicador;
                printf("%d x %d = %d\n", multiplicando, multiplicador, produto);
            }
            // quebra de linha  para separar cada as tabuadas construidas;
            printf("\n");

        }
    }


    return 1;
}


int somatoria(int n,  int m){
    if(n <= m) {
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

        printf("\nSomatória dos numeros ímpares: %d\n\n", sum);


    }
    return 0;
}
void result_idade(int mulher_nova, int mulher_velha,
        int homem_novo, int homem_velho,
        int total_homem, int total_mulher){

    printf("\nIdade da mulher mais nova: %d", mulher_nova);
    printf("\nIdade da mulher mais velha: %d", mulher_velha);
    printf("\nIdade do homem mais novo: %d", homem_novo);
    printf("\nIdade do homem mais velho: %d", homem_velho);
    printf("\nTotal de homens: %d",  total_homem);
    printf("\nTotal de mulheres: %d", total_mulher);

}

int idade(){
    int idade_pessoa = 0;
    char sexo[10];
    int mulher_nova = 0, homem_novo = 0, mulher_velha = 0, homem_velho = 0;
    int total_homens = 0, total_mulheres = 0, aux_homem, aux_mulher;


    for (int i=1; i <=4; i++){
        printf("Digite a idade da %d ° pessoa: _", i);
        scanf("%d", &idade_pessoa);
        printf("Digite o sexo da %d  ° pessoa: _", i);
        scanf("%s", &sexo);

        if (!strcmp(sexo, "m") || !strcmp(sexo, "M")){
            if (idade_pessoa <= homem_novo && idade_pessoa < homem_velho){
                homem_novo += idade_pessoa;
                total_homens += 1;
            } else {
                homem_velho += idade_pessoa;
                total_homens += 1;


            }

        } else if (!strcmp(sexo, "f") || !strcmp(sexo, "F")){
            aux_mulher = idade_pessoa;
            if (aux_mulher > idade_pessoa){
                mulher_nova += idade_pessoa;
                total_mulheres += 1;

            }else{
                mulher_velha += idade_pessoa;
                total_mulheres += 1;

            }


        }

    }
    result_idade(mulher_nova, mulher_velha, homem_novo,
            homem_velho, total_homens,  total_mulheres);
return 1;
}


int media(){
    printf("media\n");
    return 0;
}

int salario(){
    printf("salario\n");
    return 0;
}

int estatistica(){
    printf("estatistica\n");
    return 0;
}

int triangulo(){
    printf("triangulo\n");
    return 0;
}

int primos(){
    printf("primos\n");
    return 0;
}