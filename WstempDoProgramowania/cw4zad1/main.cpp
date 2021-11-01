#include <iostream>

using namespace std;

int main()
{
   int liczba;


    do{

        cout<<"Podaj liczbe calkowita >0: ";
    cin>>liczba;

    }while(liczba<=0);
    cout<<liczba<<">0"<<endl;

    system("PAUSE");
    return 0;
}
