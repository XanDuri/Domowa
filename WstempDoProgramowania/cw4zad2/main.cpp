#include <iostream>

using namespace std;

int main()
{
   int liczba;


    do{

        cout<<"Podaj liczbe calkowita z przedialu <10,20>: ";
    cin>>liczba;

    }while(liczba<10 || liczba>20);
    cout<<liczba<<", jest w przedziale <10,20>"<<endl;

    system("PAUSE");
    return 0;
}
