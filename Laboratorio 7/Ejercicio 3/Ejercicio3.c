// Autor: Eduardo Alessandro Rivera Diaz.
#include <stdio.h>          // Incluyendo las librerias necesarias.
#include <stdlib.h>

int main ()
{
    printf("\n ************************************************** Contador de cada vocal *******************************************\n");
    FILE *cant_vocales = fopen("vocales.txt","w");  // funcion para manejar archivos en formato txt.
        
    if (cant_vocales == NULL)         // Si el archivo no existe se presenta el error o si no esta en la ubicacion del programa.
        {
            printf("Ha ocurrido un error con el archivo");
            return 1;
        }

    else      // Si no hay problemas se ejecuta el programa.

    {
        char palabra[50];
        int num_a = 0,num_e = 0, num_i = 0 ,num_o = 0 , num_u = 0,i = 0;  // se asiganan contadores para cada vocal.

        printf("\n Ingrese una palabra: ");     // El programa solamente acepta una palabra sin espacios.
        scanf("%s",&palabra);

        fprintf(cant_vocales,"La cantidad de vocales que contiene la palabra %s es: ",palabra);  // Se imprime de titulo en el archivo.
        fprintf(cant_vocales,"\n");   

        for (i = 0; palabra[i] != '\0'; i++)     // Se inica un bucle for para recorrer el arreglo y saber si la palabra tiene vocales.
        {
            if (palabra[i] == 'a' || palabra[i] == 'A')
            {
                num_a++;
                fprintf(cant_vocales,"\n La cantidad de vocales 'a' es: %i",num_a);
                fprintf(cant_vocales,"\n");
            }

            else if (palabra[i] == 'e' || palabra[i] == 'E')
            {
                num_e++;
                fprintf(cant_vocales,"\n La cantidad de vocales 'e' es: %i",num_e);
                fprintf(cant_vocales,"\n");
            }

            else if (palabra[i] == 'i' || palabra[i] == 'I')
            {
                num_i++;
                fprintf(cant_vocales,"\n La cantidad de vocales 'i' es: %i",num_i);
                fprintf(cant_vocales,"\n");
            }

            else if (palabra[i] == 'o' || palabra[i] == 'O')
            {
                num_o++;
                fprintf(cant_vocales,"\n La cantidad de vocales 'o' es: %i",num_o);
                fprintf(cant_vocales,"\n");
            }

            else if (palabra[i] == 'u' || palabra[i] == 'U')
            {
                num_u++;
                fprintf(cant_vocales,"\n La cantidad de vocales 'u' es: %i",num_u);
                fprintf(cant_vocales,"\n");
            }

        }

        if (palabra[i] != 'a' || palabra[i] != 'A'    // Condicion por si la palabra no contiene vocales, se muestra el mensaje.
        || palabra[i] != 'e' || palabra[i] != 'E'
        ||palabra[i] != 'i' || palabra[i] != 'I'
        ||palabra[i] != 'o' || palabra[i] != 'O'
        ||palabra[i] != 'u' || palabra[i] != 'U') 
        {
            fprintf(cant_vocales,"\n La palabra ingresada no contiene vocales");
            fprintf(cant_vocales,"\n"); 
        }
    }

    printf("\n***************************************************** Fin del programa ***********************************************\n");

    return 0;
}