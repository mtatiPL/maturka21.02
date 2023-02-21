#include <iostream>
using namespace std;

void binarne(int liczba)
{
	int i=0,tab[31];
int maks=0;
    int jedynki=0;
	while(liczba)
	{
		tab[i++]=liczba%2;
		if(liczba%2==1){
            jedynki=jedynki+1;
		}
		  if(liczba%2==0){
            jedynki=0;
		            }
            if(jedynki>maks){
                maks=jedynki;
            }






		liczba/=2;


	}

	for(int j=i-1;j>=0;j--)
		cout<<tab[j];

		cout<<endl<<"najwiecej wystepuje "<<maks;
}

int main()
{

	int liczba;


	cout<<"Podaj liczbe: ";
	cin>>liczba;

	cout<<liczba<<" po zamianie na postac binarna: ";
	binarne(liczba);
	cout<<endl;


	return 0;
}
