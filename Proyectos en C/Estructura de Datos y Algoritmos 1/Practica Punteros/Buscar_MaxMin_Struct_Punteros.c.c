/* Escribir un programa que tenga una función que calcule el máximo y el mínimo de los números de un
vector. El tamaño del vector será como máximo 30. En el programa principal (main) le preguntará al
usuario la cantidad de elementos que desea introducir (estos datos deben ser validados) y a continuación
se leerá de teclado elemento por elemento. La función recibirá la referencia y la cantidad de elementos
cargados. La función calculará el máximo y el mínimo. El valor del máximo y el mínimo se devolverá en
forma de una estructura que también es pasada como referencia a la función, para luego ser mostrada
por la función main().
El prototipo de la función es: void Buscar(float *, int , struct MaxMin *); */

#include <stdio.h>


struct MaxMin
{
    float max;
    float min;
};

void buscar(struct MaxMin * pnumeros, float *vec, int cantidad);

int main()
{
    struct MaxMin resultado;

    int cant=0;  //Determina la cantidad de elementos por teclado
    float num[30];  //almacena los elementos en un vector de numeros flotantes

    printf("Ingresar cantidad de elementos: \n");
    scanf("%d", &cant);


    for(int x = 0; x<cant; x++){
    printf("Elemento Nro [%d]: ", x+1);
    scanf("%f", &num[x]);
    }

    buscar(&resultado, num, cant);
}

void buscar(struct MaxMin * pnumeros, float *vec, int cantidad)
{
    pnumeros->max = *(vec);
    pnumeros->min = pnumeros->max;

    int i;
    for ( i=0; i<cantidad; i++ ){
        if ( *(vec+i) > pnumeros->max ){
            pnumeros->max= *(vec+i);
        }
        if ( *(vec+i) < pnumeros->min){
            pnumeros->min = *(vec+i);
        }
    }
    printf("\nEl numero %.2f es el mayor ", pnumeros->max);
    printf("\nEl numero %.2f es el es menor\n", pnumeros->min);
}
