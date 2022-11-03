// Autor: Eduardo Alessandro Rivera Diaz.
// Se incluten las librerias necesarias.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("\n ************************************* Separador de positivos y negativos en archivos *************************************\n");

    FILE *positivos = fopen("Numeros positivos.txt","w");   // funcion para manejar archivos en formato txt.
    FILE *negativos= fopen("Numeros Negativos.txt","w");

    if (positivos == NULL)                // Si el archivo no existe se presenta el error o si no esta en la ubicacion del programa.
    {
        printf("Ha ocurrido un error con el archivo");
        return 1;
    }

    else if (negativos == NULL)  
    {
        printf("Ha ocurrido un error con el archivo");
        return 1; 
    }

    else                          // Si no hay problemas se ejecuta el programa.
    {
        float numero;            
    
    do               // Inicia el bucle do while para ingresar numeros hasta que se ingresa el numero 0.
    {
        printf("\n Ingrese un numero: ");
        scanf("%f",&numero);
        
        if(numero > 0)          // Condicion para que si el numero ingresado es mayor a cero se almacene en un archivo para numeros positivos.
        {
            fprintf(positivos,"%.2f",numero);
            fprintf(positivos,"\n");
        }

        else if (numero < 0)      // Condicion para que si el numero ingresado es menor a cero se almacene en un archivo para numeros negativos.
        {
            fprintf(negativos,"%.2f",numero);
            fprintf(negativos,"\n");
        }

    }while (numero != 0);

    if (numero == 0)        // Condicion por si el numero ingresado es cero se muestre el mensaje.
        {
            printf("\n No se puede ingresar un elemento neutro \n");
        }
    }

    printf("\n********************************************************* Fin del programa ********************************************\n");

    return 0;
}