#include <iostream>

using namespace std;

int main()
{
   int liczba,dlugosc,liczbab;

    cout<<"Podaj liczbe calkowita: ";
    cin>>liczba;
    liczbab=liczba;

    do{
        liczba=liczba/10;
        dlugosc++;

    }while(liczba>0);

    cout<<liczbab<<" posiada "<<dlugosc<<" liczb."<<endl;

    system("PAUSE");
    return 0;
}
