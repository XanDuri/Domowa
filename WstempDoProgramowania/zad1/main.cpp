#include <iostream>

using namespace std;

int main()
{
    char zdanie[100];
    cout<<"Podaj zdanie: ";
    cin.getline(zdanie,100);
    cout<<zdanie;
    for(int i=0;i<100;i++){
        if(zdanie[i]==' ')
            zdanie[i]='_';
    }
    cout<<zdanie;
    return 0;
}
