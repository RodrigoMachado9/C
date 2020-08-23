//
// Created by rodrigo on 18/04/2020.
//
#include <stdio.h>
#include "../utils/variables.c"


int pique()
{
    char pique[] = "pique";
    int i;

    for(i=0;i<5;i++)
    {
        printf("%s", pique);
        printf("\n");
    }
    return 1;

}


int show_month(){

    int mes  = getchar();
    switch (mes) {


        case '1':
            printf("*************\n");
            printf("January");
            printf("\n*************\n");
            break;

        case '2':
            printf("*************\n");
            printf("February");
            printf("\n*************\n");
            break;
        case '3':
            printf("*************\n");
            printf("March");
            printf("\n*************\n");
            break;
        case '4':
            printf("*************\n");
            printf("April");
            printf("\n*************\n");
            break;
        case '5':
            printf("*************\n");
            printf("May");
            printf("\n*************\n");
            break;
        case '6':
            printf("*************\n");
            printf("June");
            printf("\n*************\n");
            break;
        case '7':
            printf("*************\n");
            printf("July");
            printf("\n*************\n");
            break;
        case '8':
            printf("*************\n");
            printf("August");
            printf("\n*************\n");
            break;
        case '9':
            printf("*************\n");
            printf("September");
            printf("\n*************\n");
            break;
        default:
            printf("*************\n");
            printf("Choose a valid month");
            printf("\n*************\n");
            break;

    }



    return 0;

}


float hello_world_with_pi(int value){
    if (value){
        return "%f", PI;
    }
    return 0.0;
}


bool keyword(char* string){
    if (!strcmp(string, "02")){
        return 1;

    } else{
        return 0;
    }

}