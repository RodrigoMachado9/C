//
// Created by rodrigo on 19/04/2020.
//
#include <stdio.h>
#include "calculos.h"

// #include <conio.h>

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

int tabuada(){
    printf("tabuada\n");
    return 0;
}

int somatoria(){
    printf("somatoria\n");
    return 0;
}

int idade(){
    printf("idade\n");
    return 0;
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