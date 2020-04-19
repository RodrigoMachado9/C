//
// Created by rodrigo on 18/04/2020.
//

#include <iostream>
extern const int Pi;  // value for pi

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

    int pegames  = getchar();
    switch (pegames) {


        case '1':
            printf("*************\n");
            printf("Janeiro");
            printf("\n*************\n");
            break;

        case '2':
            printf("*************\n");
            printf("Fevereiro");
            printf("\n*************\n");
            break;
        case '3':
            printf("*************\n");
            printf("Março");
            printf("\n*************\n");
            break;
        case '4':
            printf("*************\n");
            printf("Abril");
            printf("\n*************\n");
            break;
        case '5':
            printf("*************\n");
            printf("Maio");
            printf("\n*************\n");
            break;
        case '6':
            printf("*************\n");
            printf("Junho");
            printf("\n*************\n");
            break;
        case '7':
            printf("*************\n");
            printf("Julho");
            printf("\n*************\n");
            break;
        case '8':
            printf("*************\n");
            printf("Agosto");
            printf("\n*************\n");
            break;
        case '9':
            printf("*************\n");
            printf("Setembro");
            printf("\n*************\n");
            break;
        default:
            printf("*************\n");
            printf("Escolha um mes valido");
            printf("\n*************\n");
            break;

    }



    return 0;

}


int hello_world(int v){
    printf(" hello world %d", Pi);
    return v;
}


bool keyword(char* string){
    if (!strcmp(string, "02")){
        return (true);

    } else{
        return (false);
    }

}