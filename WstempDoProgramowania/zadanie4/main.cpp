#include <iostream>

using namespace std;

int main()
{
    int liczba1,liczba2,suma,isuma;

    cout << "Podaj 2 liczby calkowite:";
    cin>>liczba1>>liczba2;

    suma=liczba1+liczba2;

    cout<<"Podaj wynik dzialania "<<liczba1<<"+"<<liczba2<<"=?"<<endl;
    cin>>isuma;

    if(suma==isuma)
        cout<<"OK"<<endl;
    else
        cout<<"Zla suma"<<endl;

    system ("PAUSE");
    return 0;
}
