/*
1. Es un grupo de elementos que no se repite
2. Operaciones:
   2.1 Agregar al conjunto
   2.2 Eliminar del conjunto
   2.3 Pertenencia (elemento x pertenece al conjunto)

3. Operaciones entre conjuntos:
   3.1 Calcular su interseccion (valores comunes)
   3.2 Union (todos los elementos de A y B sin repetidos)
   3.3 Complemento (complemento de A, todos los elementos qu eno aparezcan en A)
   3.4 Diferencia (A-B todo lo que esta en A que no esta en B)

 */

#include <stdio.h>
#define SET 10

typedef struct
{
    int data[SET];
    int size; //cuantos elementos se han insertado en el conjunto
}Set;

void init_set(Set *s);
int add(Set *s, int valor);

int main()
{
    Set set;

    init_set(&set); //inicia el conjunto
    add(&set, 10);


    return 0;
}

void init_set(Set *s)
{
    s->size = 0;

    printf("Conjuntos!");
}

int add(Set *s, int valor)
{
    int exists = 0;

    //Si hay espacio y el valor noo existe en el conjunto se agrega
    if(s->size < SET)//Hay espacio
    {
        //'find' es uan funcion que busca el valor dentro del conjunto
        //y regresa un 1 si lo encontro y 0 si no
        exists = find(s, valor);
    }
}
