#include<stdio.h>
#define A 3
void Asigna(int[A][A],int*[A]);
void Cargar(int**);
void Determinante(int**,int*);
void Imprimir(int**,int);

int main()
{
    system("color F0");
    int a[A][A],*ap[A],**app=NULL;
    int deter=0;
    Asigna(a,ap);
    app=ap;
    Cargar(app);
    Determinante(app,&deter);
    Imprimir(app,deter);
    getchar();
    getchar();
}

void Asigna(int a[A][A], int *ap[A])
{
    int i;
    for(i=0;i<A;++i)
    {
        *(ap+i)=*(a+i);
    }
}

void Cargar(int **app)
{
    int i,j;
       printf("\n\t\tPuntero Direccionado a Una Matriz de Punteros.\n\n");
       printf("\n\nIngresa los Datos Numericos.\n\n");
       for(i=0;i<A;++i)
       {
           for(j=0;j<A;++j)
           {
               scanf("%d",*(app+i)+j);
           }
       }
}

void Determinante(int **app, int *deter)
{
    *deter=((*(*(app+0)+0)) * (*(*(app+1)+1)) * (*(*(app+2)+2)) + (*(*(app+1)+0)) * (*(*(app+2)+1)) * (*(*(app+0)+2)) + (*(*(app+0)+1)) * (*(*(app+1)+2)) * (*(*(app+2)+0))) - ( *(*(app+0)+2) * *(*(app+1)+1) * *(*(app+2)+0) + *(*(app+0)+1) * *(*(app+1)+0) * *(*(app+2)+2) + *(*(app+1)+2) * *(*(app+2)+1) * *(*(app+0)+0));
}

void Imprimir(int **app,int deter)
{
    int i,j;
    printf("\n\nImpreaion del Arreglo de Forma Matricial.\n\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;++j)
        {
            printf("\t%d",*(*(app+i)+j));
        }
        printf("\n");
    }
    printf("\n\nEl Determinante de la Matiz es igual a: %d\n\n",deter);
}
