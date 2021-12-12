#include <iostream>

using namespace std;

int main()
{
    char haslo[10];
    int ile=0;
    int duz=0 ,mal=0 ,cyf=0;
    cout << "Podaj haslo: ";
    cin.getline(haslo,10);
    for(int i=0;i<10;i++)
        if(haslo[i]!=NULL)
            ile+=1;
    if(ile<6 || ile>8){
        cout<<"Haslo w musi byc w przedziale (6;8)"<<endl;
        return 0;
    }
    else{
    for(int i=0;i<10;i++){
        if (haslo[i]>='a' && haslo[i]<='z')mal++;
        if (haslo[i]>='A' && haslo[i]<='Z')duz++;
        if (haslo[i]>='0' && haslo[i]<='9')cyf++;
    }
    if(duz==0 || mal==0 || cyf==0)
        cout<<"Haslo musi zawierac min: 1 duza litere, 1 mala litere oraz 1 cyfre."<<endl;
    else
        cout<<haslo<< ": Nadaje sie."<<endl;
    }
    return 0;
}
