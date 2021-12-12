#include <iostream>
int czyPodzielna(int,int);
using namespace std;

int main()
{
    int liczba1,liczba2;
    cout << "Podaj liczbe a i b: ";
    cin>>liczba1>>liczba2;
    cout<<"Wynil: "<<czyPodzielna(liczba1,liczba2)<<endl;

    return 0;
}
int czyPodzielna(int a,int b){
    if(b%a>0)
        return 1;
    else
        return 0;
}
