#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int i=rand()%101;
    int liczba,ile=0;

    cout<<i<<endl;
    do{
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        if(i!=liczba){
            ile++;
            cout<<"Sprubuj ponownie"<<endl;
        }

    }while(i!=liczba);
    cout<<"Zgadles liczba "<<i<<" rowna sie "<<liczba<<" w "<<ile+1<<" prubach"<<endl;
    return 0;
}
