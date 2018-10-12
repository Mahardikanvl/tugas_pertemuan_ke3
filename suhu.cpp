#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	int suhu;
	cout<<"suhu =" ;
	cin>>suhu;
	if (suhu > 33)
	{
		cout<< "HOT" <<endl;
	}
	else if (suhu <= 18)
	{
	cout<< "DINGIN" <<endl;
	} else {
		cout<< "Normal";
	}
	return 0;
}
