#include <stdio.h>

struct inventario
{
    int ident;
    char nombre[10];
    int costo;
    int cantidad;
};

int main()
{
    struct inventario pro[5];

    int cant, i;

    printf("\n Ingrese la cantidad de productos: ");
    scanf("%d", &cant);
    fflush(stdin);

    for ( i = 0; i < cant; i++){

        printf("\nIngrese ID: ");
        scanf("%d", &pro[i].ident);
        fflush(stdin);

        printf( "\nIngrese NOMBRE: " );
        fgets( pro[i].nombre,sizeof(pro[i].nombre),stdin );
        fflush( stdin );

        printf("\nIngrese COSTO: ");
        scanf("%d", &pro[i].costo);
        fflush(stdin);

        printf("\nIngrese CANTIDAD: ");
        scanf("%d", &pro[i].cantidad);
        fflush(stdin);
    }
}
