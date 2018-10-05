#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int nilai;
	cout<<"masukkan nilai : "; cin>>nilai;
	cout<<endl;
	if (nilai>50)
	{
		cout<<"Selamat, anda lulus...";
	} else
	{
		cout<<"Maaf, Anda gagal...";
	}
}
