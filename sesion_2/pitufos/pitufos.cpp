#include <iostream>
#include <algorithm>
#define MAX 1000010
using namespace std;
int res=0;
int n,tot,vec[MAX];//el tiempo total en segundos
int convierte(char m1, char m2, char m3, char m4)
{
    int aux=0;
    switch (m1)
    {
        case '0':aux+=0;break;
        case '1':aux+=10;break;
        case '2':aux+=20;break;
        case '3':aux+=30;break;
        case '4':aux+=40;break;
        case '5':aux+=50;break;
        case '6':aux+=60;break;
        case '7':aux+=70;break;
        case '8':aux+=80;break;
        case '9':aux+=90;break;
    }
    switch (m2)
    {
        case '0':aux+=0;break;
        case '1':aux+=1;break;
        case '2':aux+=2;break;
        case '3':aux+=3;break;
        case '4':aux+=4;break;
        case '5':aux+=5;break;
        case '6':aux+=6;break;
        case '7':aux+=7;break;
        case '8':aux+=8;break;
        case '9':aux+=9;break;
    }
    aux*=60;
    switch (m3)
    {
        case '0':aux+=0;break;
        case '1':aux+=10;break;
        case '2':aux+=20;break;
        case '3':aux+=30;break;
        case '4':aux+=40;break;
        case '5':aux+=50;break;
        case '6':aux+=60;break;
        case '7':aux+=70;break;
        case '8':aux+=80;break;
        case '9':aux+=90;break;
    }
    switch (m4)
    {
        case '0':aux+=0;break;
        case '1':aux+=1;break;
        case '2':aux+=2;break;
        case '3':aux+=3;break;
        case '4':aux+=4;break;
        case '5':aux+=5;break;
        case '6':aux+=6;break;
        case '7':aux+=7;break;
        case '8':aux+=8;break;
        case '9':aux+=9;break;
    }
    return(aux);
}
void solucion()
{
    for (int i=0; i<n; i++)
    {
        if ((tot-vec[i])>=0)
        {
            tot-=vec[i];
            res++;
        }
 
    }
}
int main()
{
    char m1,m2,m3,m4,m5;
    scanf("%d\n",&n);
    scanf("%c%c%c%c%c\n",&m1,&m2,&m3,&m4,&m5);//leer la duracion del CD
    tot=convierte(m1,m2,m4,m5);
    for (int i=0; i<n; i++)
    {
        scanf("%c%c%c%c%c\n",&m1,&m2,&m3,&m4,&m5);
        vec[i]=convierte(m1,m2,m4,m5);
    }
    sort(vec,vec+n);
    solucion();
    printf("%d\n",res);
 	return 0;
}
