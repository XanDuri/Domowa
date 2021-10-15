#include <iostream>

using namespace std;

int main()
{
    int liczba1,liczba2,dzialanie;
    char znak;

    cout<<"Podaj dwie liczby calkowite: ";
    cin>>liczba1>>liczba2;

    system("cls");

    cout<<"Wybierz dzialanie: + - * /"<<endl;
    cin>>znak;

    system("cls");

    switch(znak)
    {
    case '+':
        dzialanie=liczba1+liczba2;
        cout<<"Działanie + wynik: "<<dzialanie<<endl;
        break;
    case '-':
        dzialanie=liczba1-liczba2;
        cout<<"Działanie - wynik: "<<dzialanie<<endl;
        break;
    case '*':
        dzialanie=liczba1*liczba2;
        cout<<"Działanie * wynik: "<<dzialanie<<endl;
        break;
    case '/':
        dzialanie=liczba1/liczba2;
        cout<<"Działanie / wynik: "<<dzialanie<<endl;
        break;
    default:
        cout<<"Podano zly znak."<<endl;
        break;
    }

    return 0;
    system("PAUSE");
}
