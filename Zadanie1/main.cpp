#include <iostream>

using namespace std;

int main()
{
    int liczba,reszta;

    cout<<"Podaj liczbe calkowita: ";
    cin>>liczba;

    reszta=liczba%2;

    if(reszta==1)
        cout<<"Liczba "<<liczba<<" jest nie parzysta"<<endl;
    else
        cout<<"Liczba "<<liczba<<" jest parzysta"<<endl;

    return 0;
    system("PAUSE");
}
