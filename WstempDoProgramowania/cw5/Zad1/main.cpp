#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int licznik=0;
    for (int l=2;l<=200;l++){
        for (int i=1;i<=l;i++){
            if (l%i==0)
                licznik = licznik + 1;
        }

        if (licznik <= 2)
            cout<<l<<endl;
        else
        licznik = 0;
    }
    return 0;
}
