#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int jam_prtma, menit_prtma, detik_prtma;
	int jam_kedua, menit_kedua, detik_kedua;
	int selisih_jam, selisih_menit, selisih_detik;
	
	cout<<"Waktu pertama : ";
	cout<<"jam = "; cin>>jam_prtma;
	cout<<"menit = "; cin>>menit_prtma;
	cout<<"detik = "; cin>>detik_prtma;
	
	cout<<"Waktu kedua : ";
	cout<<"jam = "; cin>>jam_kedua;
	cout<<"menit = "; cin>>menit_kedua;
	cout<<"detik = "; cin>>detik_kedua;
	
	if ((detik_kedua - detik_prtma)<0) 
		{selisih_detik = (60 + detik_kedua) - detik_prtma;
		menit_kedua--;}
	else (selisih_detik = detik_kedua - detik_prtma);
	
	if ((menit_kedua - menit_prtma)<0)
		{selisih_menit = (60 + menit_kedua) - menit_prtma;
		jam_kedua--; }
	else (selisih_menit = menit_kedua - menit_prtma);
	
	if ((jam_kedua - jam_prtma)<0)
		{selisih_jam = (24 + jam_kedua) - jam_prtma;
		menit_kedua--; }
	else (selisih_jam = jam_kedua - jam_prtma);
	
	cout<<"Selisih Waktu : ";
	cout<<"jam= "<<selisih_jam;
	cout<<" ,menit= "<<selisih_menit;
	cout<<" ,detik= "<<selisih_detik;
	
	getch();
}
