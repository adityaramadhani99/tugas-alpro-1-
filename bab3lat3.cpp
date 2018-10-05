#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	
	int angka;
	
	cout<<"Masukkan angka : "; 
	cin>>angka;
	cout<<endl;
	//Seleksi pembanding AND, kedua kondisi harus bernilai benar 
	if ((angka > 0) && (angka < 10))
	{
		cout<<"Anda memasukkan angka dari 1 sampai 9"; 
	} else
	{
		cout<<"Yang anda masukkan bukan antara 1 sampai 9";
	}
}
