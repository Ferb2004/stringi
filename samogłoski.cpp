#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
main()
{
    char samog[12]={'A','a','E','e','I','i','O','o','U','u','Y','y'};
    string slowo;
    int ile=0;
    cout<<"podaj slowo"<<endl;
    cin>>slowo;
    int dl=slowo.size();
    for (int i=0;i<dl;i++)
    for (int j=0;j<12;j++)
    if(slowo[i]==samog[j])ile++;
    cout<<"samoglosek jest"<<ile<<endl;
}
