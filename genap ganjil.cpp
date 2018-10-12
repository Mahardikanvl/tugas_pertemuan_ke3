#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	int nomor;
	cout<<"Masukan angka :";
	cin>>nomor;
	cout<<endl;
	string message;
	message = nomor && nomor%2 == 0 ? "anda memasukan bilangan genap" : "anda memasukan bilangan ganjil" ;
	cout<<message;
	getch();
	
return 0;
}
