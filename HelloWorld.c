#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
    Programa realizado para o site: HackerRank.com
    Neste programa é escrito um "Hello, World!", utilizando string, logo em
    seguida é imprimido na tela "Welcome to C programming.";
    para ele funcionar tem que colocar um laço de repetição, atentando que o Array é
    inicializado, com a quantidade de vezes que o loop vai repetir vai ser determinado 
    com a quantidade de letras que será colocada na inicialização.

    

*/
int main() 
{
    
    char s[100] = {"Hello, World!"};
    int i, j;


    for( i = 0; i<13 ; i ++){
        printf("%c", s[i], i);

    }

    printf("\nWelcome to C programming.");
    scanf("%[^\n]%*c", &s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}