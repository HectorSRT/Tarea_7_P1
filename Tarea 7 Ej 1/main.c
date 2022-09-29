#include <stdio.h>
#include <stdlib.h>

void pide_cadena(char palabra[]);
void pide_caracter(char caracter[]);
int buscar(char palabra[], char caracter[]);

int main()
{
    char palabra[100];
    char caracter[1];
    pide_cadena(palabra);
    pide_caracter(caracter);
    int x=buscar(palabra,caracter);
    printf("cantidad de veces que el caracter aparece: %d", x);
    return 0;
}

void pide_cadena(char palabra[]){
    printf("cadena a analizar: ");
    scanf("%[^\n]", palabra);
}

void pide_caracter(char caracter[]){
    printf("caracter a buscar: ");
    scanf("%s", caracter);
}

int buscar(char palabra[], char caracter[]){
    int i=0, cont=0;
    while(palabra[i]!='\0'){
        if(caracter[0]==palabra[i]){
            cont++;
        }
        i++;
    }
    return cont;
}
