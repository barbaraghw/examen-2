#include<stdio.h>
#include<stdlib.h>

struct datos{
	char producto[20];
	int cantidad;
	float precio;
}tipodeproducto [10];

//prototipos
void datos();
void muestradedatos();
void busquedadeproductos();
void salida();
void menu();

int main(){
    menu();
    system("PAUSE");
    return 0 ;
}

void datos(){
	 for(int i = 0; i< 10 ;i ++ ){
        printf("Ingrese el producto # %d:  ", i+1);
        scanf ("%s", &tipodeproducto[i].producto);
        printf("Ingrese la cantidad de producto disponible # %d:  ", i+1);
        scanf("%d", &tipodeproducto[i].cantidad);
        printf("Ingrese el precio del producto # %d:  ", i+1);
        scanf("%f", &tipodeproducto[i].precio);
    }
    }
void muestradedatos(){
    printf("Mostrando los datos de los productos\n");
    for( int i = 0 ; i < 10 ; i++){
        printf("Producto # %d\n ", i+1);
        printf("Nombre del producto: %s\n", tipodeproducto[i].producto);
        printf("Cantidad disponible: %d\n", tipodeproducto[i].cantidad);
        printf("Precio del producto: %.2f\n", tipodeproducto[i].precio);
    }
}
void buscarcantidad(){

    int cantidad, encontrado = 0;
    printf("Ingresa la cantidad a Buscar: ");
    scanf("%d", &cantidad);
    for(int i = 0 ; i< 10 ; i++){
        if(tipodeproducto[i].cantidad==cantidad){
            encontrado = 1;
             printf("Producto # %d\n ", i +1);
             printf("Nombre: %s\n", tipodeproducto[i].producto);
             printf("Cantidad disponible: %d\n", tipodeproducto[i].cantidad);
             printf("Precio: %.2f\n", tipodeproducto[i].precio);
        }
    }
      if(encontrado ==0 ){
        printf("No se ha encontrado ningun producto con la cantidad: %d\n", cantidad);
    }
}

void buscarprecio(){
    int  encontrado = 0;
    float precio;
    printf("Ingresa el precio a Buscar: ");
    scanf("%f", &precio);

      for(int i = 0 ; i< 10 ; i++)  {
        if(tipodeproducto[i].precio==precio){
            encontrado = 1;
             printf("Producto # %d\n ", i +1);
             printf("Nombre del producto: %s\n", tipodeproducto[i].producto);
             printf("Cantidad: %d\n", tipodeproducto[i].cantidad);
             printf("Precio: %.2f\n", tipodeproducto[i].precio);
        }
    }
   if(encontrado ==0 ){
        printf("No hay productos con el precio: %.2f\n", precio);
    }
}

void salida(){
    printf("Cerrando el programa...\n");
}
void menu(){
    int opcion;
    do{
        printf("Menu de Opciones\n");
        printf("1. Ingresar datos de los productos\n");
        printf("2. Mostrar datos ingresados\n");
        printf("3. Busqueda de productos por su cantidad\n");
        printf("4. Busqueda de productos por su precio\n");
        printf("5. Salida del programa \n");
        scanf("%d", &opcion);

        switch(opcion){

        case 1:
            datos();
        break;

        case 2:
            muestradedatos();
        break;

        case 3:
            buscarcantidad();
        break;

        case 4:
            buscarprecio();
        break;

        case 5:
            salida();
        break;

        default:
            printf("Usted ha ingresado una opcion invalida, por favor intente de nuevo\n ");
        }

    }while(opcion!=5);

}

