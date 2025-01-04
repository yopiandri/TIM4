w#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
<<<<<<< HEAD
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
  cout<<"------------------------------------------------------"<<endl;
    cout<<"####----      Struk Mini Market ILKOOM        ----####"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"NO   Barang  Jumlah  Harga Satuan    Sub Total"<<endl;
    for(int i = 0; i < jumlahTotalBarang; i++){
        cout<<setw(1)<<1+1<<" ";
        cout<<left<<setw(12)<<namaBarang[i];
        cout<<right<<setw(15)<<jumlahBArang[i];
        cout<<setw(18)<<hargaBarang[i];
        cout<<setw(15)<<jumlahBArang[i]*hargaBarang[i];
        cout<<endl;
        totalHarga=totalHarga+(jumlahBArang[i]*hargaBarang[i]);
    }
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Total Harga : Rp. "<<totalHarga<<endl<<endl;
    cout<<"Jumlah Bayar : Rp. "; cin>>jumlahBayar; cout<<endl;
    
    while(jumlahBayar-totalHarga<0){
        cout<<"Maaf, Uang anda kurang. Mohon lakukan ulang pembayaran"<<endl;
        cout<<"Jumlah Bayar : Rp. "; cin>>jumlahBayar; cout<<endl;
    }
    cout<<"Kembalian : Rp. "<<jumlahBayar-totalHarga<<endl<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"#### Terimakasih sudah berbelanja, datang kembali ####"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    
    return 0;
}
=======
>>>>>>> dbbf87dc9650293afbb1c74b400690b341c74069
