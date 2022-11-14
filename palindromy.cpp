#include<iostream>
using namespace std;
#include<string>

int main()
{
	int i,j;
	string wyraz;
	
	cout<<"podaj wyraz ktory chcesz sprawdzic";
	cin>>wyraz;
	
	for(i=0, j=wyraz.length()-1; i<j; i++,j--)
	{
		if(wyraz[i] != wyraz[j])
		break;
	}
	if(i<j)
	cout<<"nie palindrom"<<endl;
	else
	cout<<"palindrom"<<endl;
	
	return 0;
}
