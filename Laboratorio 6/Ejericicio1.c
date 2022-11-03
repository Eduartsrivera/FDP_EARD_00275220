// Autor: Eduardo Alessandro Rivera Diaz
// Se incluye la libreria <string.h> para manipular caracteres.
#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n*************************** Buscador de frase ***************************\n");
    int opcion;
    char texto[50];                                   // Se definen las variables necesarias y un espacio de 50 para el arreglo.
    char busqueda[20];                                 // Se definen 20 espacios para ingresar la palabra o texto a buscar.
    printf("\nIngresa el texto: ");
    gets(texto);
    printf("\nIngrese la palabra que desea buscar: ");         // Se solicita la frase o texto al usuario para almacenarla.
    gets(busqueda);
    if (strstr(texto,busqueda))                               // Se establece la condicion de busqueda dentro del arreglo de caracteres y se imprimen los resultados.
    {
        printf("\n La palabra buscada si se encuentra en el texto ingresado\n");
    }
    else 
    {
        printf("\nNo se a encontrado la palabra buscada\n");
    }
    printf("\n\n*************************** Fin del programa ***************************\n\n");
    printf("\n");
    return 0;
}