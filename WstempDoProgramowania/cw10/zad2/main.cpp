/*#include <iostream>

int ileCyfr(char);
using namespace std;

int main()
{
    char napis[100];
    cout << "Podaj napis: ";
    cin.getline(napis,100);
    cout<<napis[100]<<": posiada "<<ileCyfr(napis[100])<<" cyfr."<<endl;
    return 0;
}
int ileCyfr(char napis[100]){
    int ile=0;
    for(int i;i<100;i++)
        if(napis[i]>='0' && napis[i]<='9')
            ile+=1;
    return ile;
}
*/
#include <iostream>

using namespace std;

void ileCyfr(char napis[100]){
    int ile=0;
    for(int i=0;i<100;i++)
        if(napis[i]>='0' && napis[i]<='9')
            ile++;
    cout<< ile-1;
}
int main()
{
    char napis[100];
    cout << "Podaj napis: ";
    cin.getline(napis,100);
    cout<<napis<<": posiada ";
    ileCyfr(napis);
    cout<<" cyfr."<<endl;
    return 0;
}

