#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int jumlah_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_produk[50];
	float tot;

	cout<<"masukan jumlah beli : "; 
	cin>>jumlah_beli;
	cout<<"=========================================  \n "; 
		
	for (int i=0; i<jumlah_beli;i++){
		cout<<endl;
		cout<<"masukan produk ke-"<<i+1<<endl;
		
		cout<<"nama produk : ";
		cin>>nama_produk[i];
		cout<<"jumlah      : ";
		cin>>jumlah[i];
		cout<<"harga       : ";
		cin>>harga[i];
		
		
		sub_tot[i]=jumlah[i]*harga[i]; 
		tot+=sub_tot[i];
	}
	
	cout<<endl;
	cout<<"stack produk yang dibeli"<<endl;
	cout<<"========================================================="<<endl;
	cout<<"    produk      jumlah     harga     sub_total"<<endl;
	for (int i=0;i<jumlah_beli;i++){
	cout<<i+1<<setw(8)<<nama_produk[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
	cout<<"========================================================="<<endl;

	if (tot>=100000){
		diskon=0.05*tot;
	} else if (tot>=50000){
		diskon=0.03;
	}else {
		diskon=0;
	}
	
	cout<<"jumlah bayar  : Rp."<<tot<<endl;
	cout<<"diskon        : Rp."<<diskon<<endl; 
	cout<<"total bayar   : Rp."<<tot-diskon<<endl;
	cout<<"bayar         : Rp."; cin>>bayar; 
	cout<<"kembalian     : Rp."<<(bayar-(tot-diskon))<<endl; 
}