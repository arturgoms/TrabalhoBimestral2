#include <locale.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void MenuPrincipal();
void Recursividade();
void Ponteiros();
void Alocação();
void Manipulação();
void redirecionamento();
void ExemplosRecursividade();
void ExercíciosRecursividade();
void HelpRecursividade();
void ExemplosPonteiros();
void ExercíciosPonteiros();
void HelpPonteiros();
void ExemplosDinâmica();
void ExercíciosDinâmica();
void HelpDinâmica();
void ExemplosManipulação();
void ExercíciosManipulação();
void HelpManipulação();

void MenuPricipal(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#                  Menu                    #\n");
    printf("#                                          #\n");
    printf("#             1 - Recursividade            #\n");
    printf("#             2 - Ponteiros                #\n");
    printf("#             3 - Alocação Dinâmica        #\n");
    printf("#             4 - Manipulação de Arquivos  #\n");
    printf("#             5 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            Recursividade();
            break;
        case 2:
            system("@cls||clear");
            Ponteiros();
            break;
        case 3:
            system("@cls||clear");
            Alocação();
            break;
        case 4:
            system("@cls||clear");
            Manipulação();
            break;
        case 5:
            exit(0);
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void Recursividade(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#             Recursividade                #\n");
    printf("#                                          #\n");
    printf("#             1 - Exemplos                 #\n");
    printf("#             2 - Exercícios               #\n");
    printf("#             3 - Help                     #\n");
    printf("#             4 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            ExemplosRecursividade();
            break;
        case 2:
            system("@cls||clear");
            ExercíciosRecursividade();
            break;
        case 3:
            system("@cls||clear");
            HelpRecursividade();
            break;
        case 4:
            MenuPricipal();
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void ExemplosRecursividade(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#         Exemplos Recursividade           #\n");
    printf("#                                          #\n");
    printf("#             1 - Básico                   #\n");
    printf("#             2 - Intermediário            #\n");
    printf("#             3 - Avançado                 #\n");
    printf("#             4 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            printf("######################################################################\n");
            printf("#                 Básico                                             #\n");
            printf("#                                                                    #\n");
            printf("#    //Cálculo de fatorial com função recursiva                      #\n");
            printf("#    #include <stdio.h>                                              #\n");
            printf("#    #include <conio.h>                                              #\n");
            printf("#                                                                    #\n");
            printf("#    //protótipo da função fatorial                                  #\n");
            printf("#    double fatorial(int n);                                         #\n");
            printf("#                                                                    #\n");
            printf("#    int main(void)                                                  #\n");
            printf("#    {                                                               #\n");
            printf("#      int numero;                                                   #\n");
            printf("#      double f;                                                     #\n");
            printf("#                                                                    #\n");
            printf("#      printf(\"Digite o numero que deseja calcular o fatorial: \"); #\n");
            printf("#      scanf(\"%d\",&numero);                                        #\n");
            printf("#                                                                    #\n");
            printf("#      //chamada da função fatorial                                  #\n");
            printf("#      f = fatorial(numero);                                         #\n");
            printf("#                                                                    #\n");
            printf("#      printf(\"Fatorial de %d = %.0lf\",numero,f);                  #\n");
            printf("#                                                                    #\n");
            printf("#      getch();                                                      #\n");
            printf("#      return 0;                                                     #\n");
            printf("#     }                                                              #\n");
            printf("#                                                                    #\n");
            printf("#     //Função recursiva que calcula o fatorial                      #\n");
            printf("#     //de um numero inteiro n                                       #\n");
            printf("#                                                                    #\n");
            printf("#     double fatorial(int n)                                         #\n");
            printf("#     {                                                              #\n");
            printf("#                                                                    #\n");
            printf("#       double vfat;                                                 #\n");
            printf("#                                                                    #\n");
            printf("#       if ( n <= 1 )                                                #\n");
            printf("#            //Caso base: fatorial de n <= 1 retorna 1               #\n");
            printf("#            return (1);                                             #\n");
            printf("#                                                                    #\n");
            printf("#       else                                                         #\n");
            printf("#       {                                                            #\n");
            printf("#            //Chamada recursiva                                     #\n");
            printf("#            vfat = n * fatorial(n - 1);                             #\n");
            printf("#            return (vfat);                                          #\n");
            printf("#       }                                                            #\n");
            printf("#     }                                                              #\n");
            printf("######################################################################\n");
            scanf("%d",&menu);
            MenuPricipal();
            break;
        case 2:
            system("@cls||clear");
            ExercíciosRecursividade();
            break;
        case 3:
            system("@cls||clear");
            HelpRecursividade();
            break;
        case 4:
            MenuPricipal();
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void ExercíciosRecursividade(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#     Exercicios - Recursividade           #\n");
    printf("#                                          #\n");
    printf("#             Exercicio 1                  #\n");
    printf("#             Exercicio 2                  #\n");
    printf("#             Exercicio 3                  #\n");
    printf("#             4 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            printf("####################################################################################\n");
            printf("#         Exemplo 1                                                                #\n");
            printf("#                                                                                  #\n");
            printf("#  Considere o seguinte processo para gerar uma sequência de números.              #\n");
            printf("#  Comece com um inteiro n. Se n é par, divida por 2. Se n é ímpar,                #\n");
            printf("#  multiplique por 3 e some 1. Repita esse processo com o novo valor               #\n");
            printf("#  de n, terminando quando n = 1. Por exemplo, a sequência de números              #\n");
            printf("#  a seguir é gerada para n = 22:                                                  #\n");
            printf("#  22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1                                      #\n");
            printf("#  É conjecturado que esse processo termina com n = 1 para todo inteiro n > 0.     #\n");
            printf("#  Para uma entrada n, o comprimento do ciclo de n é o número de                   #\n");
            printf("#  elementos gerados na sequência. No exemplo acima, o comprimento do              #\n");
            printf("#  ciclo de 22 é 16.                                                               #\n");
            printf("#                                                                                  #\n");
            printf("####################################################################################\n");
            scanf("%d",&menu);
            MenuPricipal();
            break;
        case 2:
            system("@cls||clear");
            break;
        case 3:
            system("@cls||clear");
            break;
        case 4:
            MenuPricipal();
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void HelpRecursividade(){

}

void Ponteiros(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#             Ponteiros                    #\n");
    printf("#                                          #\n");
    printf("#             1 - Exemplos                 #\n");
    printf("#             2 - Exercícios               #\n");
    printf("#             3 - Help                     #\n");
    printf("#             4 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            ExemplosPonteiros();
            break;
        case 2:
            system("@cls||clear");
            ExercíciosPonteiros();
            break;
        case 3:
            system("@cls||clear");
            HelpPonteiros();
            break;
        case 4:
            MenuPricipal();
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void ExemplosPonteiros(){

}

void ExercíciosPonteiros(){

}

void HelpPonteiros(){

}

void Alocação(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#             Alocação Dinâmica            #\n");
    printf("#                                          #\n");
    printf("#             1 - Exemplos                 #\n");
    printf("#             2 - Exercícios               #\n");
    printf("#             3 - Help                     #\n");
    printf("#             4 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            ExemplosDinâmica();
            break;
        case 2:
            system("@cls||clear");
            ExercíciosDinâmica();
            break;
        case 3:
            system("@cls||clear");
            HelpDinâmica();
            break;
        case 4:
            MenuPricipal();
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void ExemplosDinâmica(){

}

void ExercíciosDinâmica(){

}

void HelpDinâmica(){

}

void Manipulação(){
    int menu;
    system("@cls||clear");
    printf("############################################\n");
    printf("#         Manipulação de Arquivos          #\n");
    printf("#                                          #\n");
    printf("#             1 - Exemplos                 #\n");
    printf("#             2 - Exercícios               #\n");
    printf("#             3 - Help                     #\n");
    printf("#             4 - Sair                     #\n");
    printf("#                                          #\n");
    printf("############################################\n");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            system("@cls||clear");
            ExemplosManipulação();
            break;
        case 2:
            system("@cls||clear");
            ExercíciosManipulação();
            break;
        case 3:
            system("@cls||clear");
            HelpManipulação();
            break;
        case 4:
            MenuPricipal();
        default:
            printf("Menu não existe!!!!!\n");
            redirecionamento();
            MenuPricipal();
    }
    return;
}

void ExemplosManipulação(){

}

void ExercíciosManipulação(){

}

void HelpManipulação(){

}

void redirecionamento(){
    int i;
    printf("Você será redirecionado em ");
    for(i = 3; i > 0;i--){
        printf("%d", i);
        //printf("Você será redirecionado em %d",i);
        usleep(1000*1000);
        //Sleep(1000);
        printf("\n");
    }
    return;
}

int main(){
    setlocale(LC_ALL,"");

    MenuPricipal();
    return 0;
}
