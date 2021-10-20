#include <stdio.h>
#include <conio.h>

struct fecha{
    int dia;
    int mes;
    int anio;
};

void validar(struct fecha *f)
{
    printf(" Ingrese el dia: ");
    scanf("%d", &f.dia);

    printf(" Ingrese numero del mes: ");
    scanf("%d", &f->mes);

    printf(" Ingrese el anio: ");
    scanf("%d", &f->anio);

    switch(f->mes){
        case 1:
        printf("\n %d ", f->dia);
        printf(" de Enero del %d \n", f->anio);
        break;

        case 2:
        printf("\n %d ", f->dia);
        printf(" de Febrero del %d \n", f->anio);
        break;

        case 3:
        printf("\n %d ", f->dia);
        printf(" de Marzo del %d \n", f->anio);
        break;

        case 4:
        printf("\n %d ", f->dia);
        printf(" de Abril del %d \n", f->anio);
        break;

        case 5:
        printf("\n %d ", f->dia);
        printf(" de Mayo del %d \n", f->anio);
        break;

        case 6:
        printf("\n %d ", f->dia);
        printf(" de Junio del %d \n", f->anio);
        break;

        case 7:
        printf("\n %d ", f->dia);
        printf(" de Julio del %d \n", f->anio);
        break;

        case 8:
        printf("\n %d ", f->dia);
        printf(" de Agosto del %d \n", f->anio);
        break;

        case 9:
        printf("\n %d ", f->dia);
        printf(" de Septiembre del %d \n", f->anio);
        break;

        case 10:
        printf("\n %d ", f->dia);
        printf(" de Octubre del %d \n", f->anio);
        break;

        case 11:
        printf("\n %d ", f->dia);
        printf(" de Noviembre del %d \n", f->anio);
        break;

        case 12:
        printf("\n %d ", f->dia);
        printf(" de Diciembre del %d \n", f->anio);
        break;

        default:
            printf(" Fecha invalida! \n");
    }
}

void main()
{
    struct fecha hoy;

    printf("\n ¡BIENVENIDO A MI PROGRAMA! \n\n");

    validar(&hoy);
}
