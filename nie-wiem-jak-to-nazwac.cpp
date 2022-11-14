#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string slowo;
	int n,a;
	cout<<"podaj slowo "<<endl;
	cin>>slowo;
	cout<<"twoje slowo "<<slowo<<endl;
	cout<<"podaj n"<<endl;
	cin>>n;
	int dl=slowo.size();
	for (int i=0;i<=dl-n;i++)
		{
			a=i;
			for(int j=0;j<n;j++)
			{
				cout<<slowo[a];
				a++;
			}
		cout<<endl;
		}
}
