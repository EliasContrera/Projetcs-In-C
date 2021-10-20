#include <stdio.h>
#include <string.h>
struct fecha{
    int dia;
    int mes;
    int anio;
};

struct fecha ingresar_fecha();
void ingresar_fecha_puntero(struct fecha *);

void fecha_texto(struct fecha *,char *);

int main(){
    struct fecha hoy,*p;
    char texto[60];
    p=&hoy;

    //hoy=ingresar_fecha();
    //NO ES NECESARIO EL PUNTERO
    //ingresar_fecha_puntero(p);
    ingresar_fecha_puntero(&hoy);
    fecha_texto(&hoy,texto);
    printf("%s",texto);
    return 0;
}

struct fecha ingresar_fecha(){
    struct fecha hoy;
    printf("Ingrese dia:");
    scanf("%d",&hoy.dia);
    printf("Ingrese mes:");
    scanf("%d",&hoy.mes);
    printf("Ingrese anio:");
    scanf("%d",&hoy.anio);

    return hoy;
}

void ingresar_fecha_puntero(struct fecha *p){
    printf("Ingrese dia:");
    scanf("%d",&p->dia);
    printf("Ingrese mes:");
    scanf("%d",&p->mes);
    printf("Ingrese anio:");
    scanf("%d",&p->anio);

}


void fecha_texto(struct fecha *p,char * texto){
    char meses[12][30]={"Enero","febrero","marzo","Abril"};

    //char texto [60]="15 de septiembre de 2020";
    strcat(texto,p->dia);

   // return texto;

}

