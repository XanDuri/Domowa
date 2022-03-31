#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Zad1.a
/*
int main()
{
    const int N = 1000;
    short tab[N];
    int n;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &n);
    if(n<=0 || n>N)
    {
        printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
        return 1;
    }
    short lim = 999;
    srand(time(0));
    for (short *p = tab; p<tab +n;++p)
    {
        *p = rand()%lim+1;
    }
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d", *p);
    }
    printf("\n");

    for (short *p = tab; p<tab +n;++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        if (*p%2==1)
        {
            *p = 3 * *p + 1;
        }
        else
        {
            do
            {
                *p/=2;
            }while(*p%2==0);
        }
    }
    printf("\n");
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d",*p);
    }
    printf("\n");
    return 0;
}
*/
//Zad1.b
/*
int main()
{
    const int N = 1000;
    short tab[N];
    int n;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &n);
    if(n<=0 || n>N)
    {
        printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
        return 1;
    }
    short lim = 999;
    srand(time(0));
    for (short *p = tab; p<tab +n;++p)
    {
        *p = rand()%lim+1;
    }
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d", *p);
    }
    printf("\n");
    for (short *p = tab; p<tab +n;++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        if (*p%2==1)
        {
            *p = 2 * *p;
        }
        else
        {
            *p = *p * -1;
        }
    }
    printf("\n");
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d",*p);
    }
    printf("\n");
        for (short *p = tab; p<tab +n;++p)
    {
        if(*p>=0)
        {
            *p = 1;
        }
        else
        {
            *p = -1;
        }

    }
    printf("\n");
        for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d",*p);
    }
    printf("\n");
    return 0;
}
*/
//Zad1.d
/*
int main()
{
    const int N = 1000;
    short tab[N];
    int n;
    int niepar=0, par=0;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &n);
    if(n<=0 || n>N)
    {
        printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
        return 1;
    }
    short lim = 999;
    srand(time(0));
    for (short *p = tab; p<tab +n;++p)
    {
        *p = rand()%lim+1;
    }
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d", *p);
    }
    printf("\n");

    for (short *p = tab; p<tab +n;++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        if (*p%2==1)
        {
            *p = 3 * *p + 1;
            niepar++;
        }
        else
        {
            do
            {
                *p/=2;
            }while(*p%2==0);
            par++;
        }
    }
    printf("\n");
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d",*p);
    }
    printf("\n");
    printf("nieparzyste elementy: %d\n", niepar);
    printf("parzyste elementy: %d\n", par);
    return 0;
}
*/
//Zad1.e

int main()
{
    const int N = 1000;
    short tab[N];
    int n;
    int maks=0;
    int ile=0;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &n);
    if(n<=0 || n>N)
    {
        printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
        return 1;
    }
    short lim = 999;
    srand(time(0));
    for (short *p = tab; p<tab +n;++p)
    {
        *p = rand()%lim+1;
    }
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d", *p);
    }
    printf("\n");

    for (short *p = tab; p<tab +n;++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        if (*p%2==1)
        {
            *p = 3 * *p + 1;
        }
        else
        {
            do
            {
                *p/=2;
            }while(*p%2==0);
        }
    }
    printf("\n");
    for (short *p = tab; p<tab +n;++p)
    {
        printf("%5d",*p);
    }
    printf("\n");
    for (short *p = tab; p<tab +n;++p)
    {
        if(*p>maks)
        {
            maks=*p;
        }
    }
    printf("\n");
    printf("najwiekszy element = %d", maks);
    printf("\n");

    for (short *p = tab; p<tab +n;++p)
    {
        if(*p==maks)
        {
            ile++;
        }
    }
    printf("\n");
    printf("w tablicy wystapila: %d razy", ile);

    return 0;
}

