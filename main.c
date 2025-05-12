#include <stdio.h>


void menu1();
void menu2();

int main(){

    //MENU
    int x;
    do{
    printf("Seja bem vindo ao Form-bomber, O que deseja fazer?\n");

    printf("digite 0 para encerrar o programa\n");
    printf("digite 1 para verificar dados\n");
    printf("Digite 2 para gerar dados fictícios\n");

    scanf("%d",&x);
    switch(x){

        case 1:
            menu1();
        break;


        case 2:
            menu2();
        break;


    }

    }while(x != 0);
return 0;
}

void menu1(){

    int y;

    printf("Que tipo de dado quer verificar?\n");
    printf("0 - voltar\n");
    printf("1 - CPF\n");
    printf("2 - Telefone\n");

    scanf("%d",&y);
    switch(y){

        case 1:
        printf("teste CPF\n");
        break;
        
        case 2:
        printf("teste telefone\n");
        break;

        default:
        return;
        break;
    }




}

void menu2(){

    int z;
    
    printf("Que tipo de dado fícticio que gerar?\n");
    printf("0 - Voltar\n");
    printf("1- CPF\n");
    printf("2 - Telefone\n");

    scanf("%d",&z);
    switch(z){

        case 1:
        printf("Teste cpf\n");
        break;

        case 2:
        printf("Teste Telefone\n");
        break;

        default:
        return;
        break;


    }

}