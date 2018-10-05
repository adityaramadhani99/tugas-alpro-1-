#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int tot_beli, potongan, jum_bayar;
	
	jum_bayar=0; cout<<"total pembayaran Rp. "; cin>>tot_beli;
	if (tot_beli >=50000)
		potongan = 0.2 * tot_beli;
		else
		potongan = 0.05 * tot_beli;
		cout<<"Besarnya Potongan Rp. "<<potongan<<endl;
		jum_bayar = tot_beli - potongan;
		cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar<<endl;
		getch();
		return 0;
}
