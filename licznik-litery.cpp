#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	int ile=0;
	string zdanie;
	char znak;
	cout<<"podaj zdanie: ";
	getline(cin, zdanie);
	cout<<"podaj znak: ";
	znak=getchar();
	int dl=zdanie.size();
	for (int j=0; j<dl; j++)
		if (zdanie[j]==znak) ile++;
	cout<<"znaku jest: "<<ile;
	
	return 0;
}
