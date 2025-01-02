#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"##   Program Aplikasi Kasir  ##"<<endl;
cout<<"==============================="<<endl<<endl;

const int MAX_BARANG = 10;
string namaBarang [MAX_BARANG];
long hargaBarang [MAX_BARANG];
int jumlahBArang [MAX_BARANG];
long jumlahTotalBarang;
long totalHarga = 0;
long jumlahBayar = 0;

cout<<"##   Selamat Datang di Mini Market ILKOOM    ##"<<endl<<endl;

cout<<"Masukan jumlah barangan yangan ingin dibeli : "; cin>>jumlahTotalBarang; cout<<endl;
    
if (jumlahTotalBarang <= 0 || jumlahTotalBarang > MAX_BARANG){
    cout<<"Jumlah barang tidak valid"<<endl;
       return 0;
}
for (int i=0; i<jumlahTotalBarang; i++){
   cout<<"Barang ke : "<<i+1<<endl;
   cout<<"Nama Barang : ";
   getline(cin>>ws,namaBarang[i]);
   cout<<"Harga Satuan : "; cin>>hargaBarang[i];
   cout<<"Jumlah : "<<namaBarang[i]<<" yang dibeli : "; cin>>jumlahBArang[i]; 
   cout<<endl;
 }cout<<endl;
}