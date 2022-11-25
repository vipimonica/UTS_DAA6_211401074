#include <iostream>
using namespace std;

void input (int data[], int b) {
  int j;
  string nama;
  for (j = 0; j < b; j++)
    {
      cout<<"masukkan nama mahasiswa = \n "; cin>>nama;
      cout <<"masukan MIN ";
      cout << " : ";
      cin >> data[j];
    }
}

int main () {

  int x = 0;
  int i;
  int trb = 0;


  cout << "masukkan jumlah data mahasiswa :";
  cin >> x;
  int data[x];
  input (data, x);

  int *ptr;
  ptr = data;

    cout << "\n urutan NIM mahasiswa: ";
    trb = *ptr;
    for (i = 0; i < x; i++) {
        cout << *(ptr + i) << ','; //mengurutkan nim mahasiswa berdasarkan input//
        if (trb < *(ptr + i)) {
            trb = *(ptr + i);
        }
    }
    sort(data, data + x, greater<int>());
    cout << "\n Urutan descending: "; //mengurutkan nim mahasiswa dariyg tinggi ke yg rendah //
    for (i = 0; i < x; i++) {
    cout << *(ptr + i) << ',';

    }

  cout << "\n NIM tertinggi    :  " << trb;
  
  return 0;
}