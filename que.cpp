#include <iostream>
#define n 15
using namespace std;

struct mahasiswa{
    string nama, kom;
    int nim;
}mahasiswa[n];

struct queue{
    int awal, akhir;
}Queue;

void deQueue();
void menu();
void inQueue();
void tampil();

void init()
{
    Queue.awal=-1;
    Queue.akhir=-1;
    cout<<"data berhasil direset" <<endl;
    menu();
}

bool isFull()
{
    if(Queue.akhir==n-1)
    {
        return true;
    } else 
    {
        return false;
    }
}

bool isEmpty()
{
    if(Queue.akhir==-1)
    {
        return true;
    }else 
    {
        return false;
    }
}

void inQueue()
{
    if(!isFull())
    {
        string nama, kom;
        int nim;
        cout<<"masukkan nama:";
        cin>>nama;
        cout<<"masukkan NIM:";
        cin>>nim;
        cout<<"masukkan kom:";
        cin>>kom;
        mahasiswa[Queue.akhir].nama=nama;
        mahasiswa[Queue.akhir].nim=nim;
        mahasiswa[Queue.akhir].kom=kom;
        ++Queue.akhir;
        cout<<endl;
        menu();
    }else 
    {
        cout<<"data penuh";
        menu();
    }
}

void menu()
{
    int pilih;
    cout<<"1.masukkan data\n";
    cout<<"2.hapus satu data\n";
    cout<<"3.ulang data\n";
    cout<<"4.tampil data\n";
    cout<<"masukkan pilihan anda:";
    cin>>pilih;
    cout << endl;
    if(pilih == 1){
        inQueue();
    }else if(pilih == 2){
        deQueue();
    } else if(pilih == 3){
        init();
    }else if(pilih == 4){
        tampil();
    }else {
        menu();
    }
}

void deQueue()
{
    if(!isEmpty())
    {
        for(int i = Queue.awal; i < Queue.akhir; i++){
            mahasiswa[i].nama=mahasiswa[i+1].nama;
            mahasiswa[i].nim=mahasiswa[i+1].nim;
            mahasiswa[i].kom=mahasiswa[i+1].kom;
        }Queue.akhir--;
        cout<<"data berhasil dihapus"<<endl;
        menu();
    }else{
        cout<<"antrian kosong"<<endl;
    }
}

void tampil()
{
    if(!isEmpty())
    {
        for(int i = 0; i < Queue.akhir; i++){
        cout<<"nama Mahasiswa: " << mahasiswa[i].nama << endl;
        cout<<"NIM : " << mahasiswa[i].nim<<endl; 
        cout<<"kom : " << mahasiswa[i].kom<<endl; 
        cout<< endl;
        }
    }else 
    {
        cout<<"data kosong";
        cout<<endl;
    }
    menu();
}

int main(){
    menu();

    return 0;
}