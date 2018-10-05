#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	int TB,  BBI;
	cout<<"Masukkan Tinggi Badan Anda : ";
	cin>>TB;
	
	BBI = (TB - 100) - ((TB - 100) * 0.1);
	
	cout<<"Berat Badan Ideal Anda adalah : "<<BBI;
	
	getch();
}
