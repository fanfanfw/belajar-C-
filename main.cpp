#include <iostream>

using namespace std;

int main()
{
    cout<<"*********PROGRAM C++ MENCARI BILANGAN TERBESAR*********"<<endl;
	int terbesar, bil1, bil2, bil3;
	cout<<"\nMasukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	cout<<"Masukan Bilangan ke-3 : ";
	cin>>bil3;

	//Menentukan nilai terbesar
	terbesar=bil1;

	if (bil2 > terbesar){
		terbesar=bil2;
	}
	if (bil3 > terbesar){
		terbesar=bil3;
	}
	cout<<"Nilai Terbesar adalah "<<terbesar<<endl;

	return 0;
}
