#include <iostream>

using namespace std;

int main()
{
    double kwota,podatek;

    cout<< "Wprowadz kwote: ";
    cin>>kwota;

    if(kwota<60001)
        podatek=0.17*kwota;
    else
        podatek=0.30*kwota;

    cout<<"Podatek od "<<kwota<<" wynosi "<<podatek<<" zl"<<endl;

    return 0;
    system("PAUSE");
}
