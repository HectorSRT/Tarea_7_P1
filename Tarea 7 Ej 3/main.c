#include <stdio.h>
#include <stdlib.h>

void captura_datos(int n, int clave[], int stock[], float precio[]);
void calcula(int n, int clave[], int stock[], float precio[]);

int main()
{
    int n;
    int clave[100],stock[100];
    float precio[100];
    printf("Cant de productos: \n");
    scanf("%d", &n);
    captura_datos(n,clave,stock,precio);
    calcula(n,clave,stock,precio);
    return 0;
}

void captura_datos(int n, int clave[], int stock[], float precio[]){
    printf("Clave, precio y stock: \n");
    for(int i=0;i<n;i++){
        scanf("%d%f%d", &clave[i], &precio[i], &stock[i]);
    }
}

void calcula(int n, int clave[], int stock[], float precio[]){
    int menor_stock=999,j=0,i;
    float ventas, mayor_precio=-999;
    for(i=0;i<n;i++){
        if(precio[i]>mayor_precio){
            mayor_precio=precio[i];
        }
        if(stock[j]<menor_stock){
            menor_stock=stock[j];
        }
        j++;
    }
    for(int k=0;k<n;k++){
        if(mayor_precio==precio[k]){
            int x=clave[k];
            printf("Producto con mayor precio: %d\n", x);
        }
        if(menor_stock==stock[k]){
            int y=clave[k];
            printf("Producto con menos stock: %d\n", y);
        }
        ventas=ventas+(stock[k]*precio[k]);
    }
    printf("Total de venta esperada: %.2f\n", ventas);

}
