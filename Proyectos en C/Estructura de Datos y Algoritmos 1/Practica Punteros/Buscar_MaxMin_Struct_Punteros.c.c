/* Escribir un programa que tenga una funci�n que calcule el m�ximo y el m�nimo de los n�meros de un
vector. El tama�o del vector ser� como m�ximo 30. En el programa principal (main) le preguntar� al
usuario la cantidad de elementos que desea introducir (estos datos deben ser validados) y a continuaci�n
se leer� de teclado elemento por elemento. La funci�n recibir� la referencia y la cantidad de elementos
cargados. La funci�n calcular� el m�ximo y el m�nimo. El valor del m�ximo y el m�nimo se devolver� en
forma de una estructura que tambi�n es pasada como referencia a la funci�n, para luego ser mostrada
por la funci�n main().
El prototipo de la funci�n es: void Buscar(float *, int , struct MaxMin *); */

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
