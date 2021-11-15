#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int i = rand()%11;
    int n = rand()%11;
    int iloczyn=i*n;
    int liczba, ile=3;


    cout<<iloczyn<<endl;
    do{

        cout<<"Podaj libczbe("<<ile<<" szanse): ";
        cin>>liczba;
        if(liczba!=iloczyn){
            cout<<"zle!"<<endl;
            ile--;
        }
        if(ile==0)
            break;
        if(liczba==iloczyn)
            break;

    }while(liczba!=iloczyn || ile!=0);
    if(ile==0)
            cout<<"Przegrales"<<endl;
    else
            cout<<"Zgadles"<<endl;
    return 0;
}
