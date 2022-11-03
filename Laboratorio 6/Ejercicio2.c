// Autor: Eduardo Alessandro Rivera Diaz
// Se incluyen las librerias necesarias para usar cadenas y convertir mayusculas a minusculas
#include <stdio.h>
#include <string.h> 
#include <ctype.h> 

int main ()
{
    printf("\n****************************** Palabra Palindrome ******************************\n");

    char palabra[50];                       // Se definen las variables para la cadena de texto, tamanio y respuesta.
    int  tamanio, respuesta = 0;

    printf("Ingrese la palabra: ");        // Se solicita y guarda la palabra que el usuario desea.
    gets(palabra);

    for (int i = 0; palabra[i] != '\0'; i++)   // Se inicializa un bucle for para convertir las palabras mayusculas a minisculas.
    {
        palabra[i] = tolower(palabra[i]);
    }

    tamanio = strlen(palabra);      // Se guarda la cantidad de espacios que contiene el arreglo de caracteres.

    for(int i = 0; i < tamanio; i++ )       // Se inicializa el bucle for para que compare letra por letra si son iguales o no.
    {
        if (palabra[i] != palabra[tamanio-i-1])
        {
            respuesta = 1;
            break;
        }
    }

    if (respuesta)                                                // si en el ciclo for no coinciden las palabras de asigna 1.
    {
        printf("\n La palabra ingresada no es un palindrome \n");
    }
    else                                                         // si en el ciclo for  coinciden las palabras de asigna 0.
    {
        printf("\n La palabra ingresada si es un palindrome\n");               
    }
    printf("\n****************************** Fin del programa *****************************\n");
    return 0;
}