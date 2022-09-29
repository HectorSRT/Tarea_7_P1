#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void llena_arr(int n, int arreglo[]);
int suma_pos_par(int n, int arreglo[]);
int suma_pares(int n, int arreglo[]);
void suma_arreglo(int n, int arreglo[]);

int main()
{
    int arreglo[MAX], n;
    printf("Tam del arreglo: \n");
    scanf("%d", &n);
    llena_arr(n,arreglo);
    int x=suma_pos_par(n,arreglo);
    printf("Suma de las posiciones pares:  %d\n", x);
    int y=suma_pares(n,arreglo);
    printf("Suma de los numeros pares: %d\n", y);
    suma_arreglo(n,arreglo);
    return 0;
}

void llena_arr(int n, int arreglo[]){
    for(int i=0;i<n;i++){
        arreglo[i] =rand()%MAX;
        printf(" %d", arreglo[i]);
    }
    printf("\n");
}

int suma_pos_par(int n, int arreglo[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            suma+=arreglo[i];
        }
    }
    return suma;
}

int suma_pares(int n, int arreglo[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(arreglo[i]%2==0){
            suma+=arreglo[i];
        }
    }
    return suma;
}

void suma_arreglo(int n, int arreglo[]){
    int suma=0,i=0;
    while(suma<=100){
        suma+=arreglo[i];
        i++;
    }
    printf("Cant de numeros que sumo: %d\n", i);
    printf("Resultado de la suma: %d\n", suma);
}
