#include <iostream>
#include <conio>
int main()
{
char tanyauser,tanyabeli;

int pilihan,jumlah1,jumlah2,jumlah3,belanja1,belanja2,belanja3,keranjang,keranjangdisk;
const int paku = 1000;
const int selai = 3000;
const int obeng = 7000;
keranjang = 0;
jumlah1 = 0;
jumlah2 = 0;
jumlah3 = 0;
int penampung1 = 0;
int penampung2 = 0;
int penampung3 = 0;
cout<<"Apakah Anda Adalah Member Dari Toko Kami ? [Y/n] : ";
cin>>tanyauser;
if(tanyauser=='y' || tanyauser=='Y')
{
	do
	{
	cout<<"Daftar Menu : (untuk member Diskon 10%)"<<endl;
	cout<<"1.Selai"<<endl;
	cout<<"2.Paku Payung"<<endl;
	cout<<"3.Obeng \n"<<endl;
	cout<<"Pilih mana ingin di beli [1-3] : ";
	cin>>pilihan;
	switch(pilihan)
	{
	case 1:
   cout<<endl;
   cout<<"Daftar Menu : 1 Selai Harga [Rp.3000] \n"<<endl;
   cout<<"Berapa Jumlah Ingin Di beli ? : ";
   cin>>jumlah1;
   belanja1 = jumlah1 * selai;
   keranjang += belanja1;
   penampung1 += jumlah1;
   break;
   case 2:
   cout<<endl;
   cout<<"Daftar Menu : 1 bungkus Paku Payung Harga [Rp.1000] \n"<<endl;
   cout<<"Berapa Jumlah Ingin Di beli ? : ";
   cin>>jumlah2;
   belanja2 = jumlah2 * paku;
   keranjang += belanja2;
   penampung2 += jumlah2;
   break;
   case 3:
   cout<<endl;
   cout<<"Daftar Menu : 1 obeng Harga [Rp.7000] \n"<<endl;
   cout<<"Berapa Jumlah Ingin Di beli ? : ";
   cin>>jumlah3;
   belanja3= jumlah3 * obeng;
   keranjang += belanja3;
   penampung3 += jumlah3;
   break;
   default:
   cout<<"Periksa Hasil Ketikmu ..."<<endl;
   break;

	}
	cout<<endl;
	cout<<"Apakah Mau Berbelanja Lagi ? [Y/n] : ";
	cin>>tanyabeli;
	}
	while(tanyabeli == 'Y' || tanyabeli == 'y');
	cout<<"Barang Yang Anda Beli Di Toko Kami : "<<endl;
	belanja1 = selai * penampung1;
	belanja2 = paku * penampung2;
	belanja3 = obeng * penampung3;
	cout<<"Selai : "<<penampung1<<" (3000) => "<<belanja1<<endl;
	cout<<"Paku : "<<penampung2<<" (1000) => "<<belanja2<<endl;
	cout<<"Obeng : "<<penampung3<<" (7000) => "<<belanja3<<endl;
   keranjangdisk = keranjang - (keranjang * 10/100);
	cout<<"Total Harga Belanjaan Anda Adalah (Diskon 10%) = Rp."<<keranjangdisk<<endl;
}
else
{
do
{
cout<<"Daftar Menu :"<<endl;
cout<<"1.Selai"<<endl;
cout<<"2.Paku Payung"<<endl;
cout<<"3.Obeng \n"<<endl;
cout<<"Pilih mana ingin di beli [1-3] : ";
cin>>pilihan;
switch(pilihan)
{
	case 1:
   cout<<endl;
   cout<<"Daftar Menu : 1 Selai Harga [Rp.3000] \n"<<endl;
   cout<<"Berapa Jumlah Ingin Di beli ? : ";
   cin>>jumlah1;
   belanja1 = selai * jumlah1;
   keranjang += belanja1;
   penampung1 += jumlah1;
   break;
   case 2:
   cout<<endl;
   cout<<"Daftar Menu : 1 bungkus Paku Payung Harga [Rp.1000] \n"<<endl;
   cout<<"Berapa Jumlah Ingin Di beli ? : ";
   cin>>jumlah2;
   belanja2 = paku * jumlah2;
   keranjang += belanja2;
   penampung2 += jumlah2;
   break;
   case 3:
   cout<<endl;
   cout<<"Daftar Menu : 1 obeng Harga [Rp.7000] \n"<<endl;
   cout<<"Berapa Jumlah Ingin Di beli ? : ";
   cin>>jumlah3;
   belanja3= obeng * jumlah3;
   keranjang += belanja3;
   penampung3 += jumlah3;
   break;
   default:
   cout<<"Periksa Hasil Ketikmu ..."<<endl;
   break;

}
cout<<endl;
cout<<"Apakah Mau Berbelanja Lagi ? [Y/n] : ";
cin>>tanyabeli;
}
while(tanyabeli == 'Y' || tanyabeli == 'y');
cout<<"Barang Yang Anda Beli Di Toko Kami : "<<endl;
belanja1 = selai * penampung1;
belanja2 = paku * penampung2;
belanja3 = obeng * penampung3;
cout<<"Selai : "<<penampung1<<" (3000) => "<<belanja1<<endl;
cout<<"Paku : "<<penampung2<<" (1000) => "<<belanja2<<endl;
cout<<"Obeng : "<<penampung3<<" (7000) => "<<belanja3<<endl;
cout<<"Total Harga Belanjaan Anda Adalah = Rp."<<keranjang<<endl;
}
getch();
}