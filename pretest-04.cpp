/*
Nama Program : Pretest 04
Nama         : Aprischa Nauva
NPM          : 140810180063
Tanggal Buat : 26 Maret 2019
Deskripsi    : Program ini untuk memenuhi pretest 04
*/

#include<iostream>

using namespace std;

struct ElemtList{
    char nama[40];
    char npm[14];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElemt(pointer& pBaru);
void insertLast (List& First, pointer pBaru);
void traversal (List First);

int main()
{
    pointer p;
    List mhs;
    int pilih;

    createList(mhs);
    while(1){
        cout << "[1] Tambah Data " << endl;
        cout << "[2] Tampilkan" << endl;
        cout << "[3] Keluar" << endl;
        cout << " -> Masukan Pilihan : ";
        cin >> pilih;
        switch(pilih){
        case 1:
            createElemt(p);
            insertLast(mhs, p);
        break;

        case 2:
            traversal(mhs);
        break;

        case 3:
            return 0;
            break;
        }
    }
}
void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout << "Nama : ";
    cin.ignore();
    cin.getline(pBaru->nama,40);
    cout << "NPM : ";
    cin >> pBaru->npm;
    cout << "IPK : ";
    cin >> pBaru->ipk;
    pBaru->next=NULL;
    cout << " " << endl;
}
void traversal(List First){
    cout << "                        DATA MAHASISWA                       " << endl;
    cout << "=============================================================" << endl;
    cout << "No\t" << "\tNama\t\t" << "NPM\t\t" << "IPK\t" << endl;
    cout << "-------------------------------------------------------------" << endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout << i << "\t\t" << pBantu->nama << "\t\t" << pBantu->npm << "\t\t" << pBantu->ipk << endl;
        pBantu=pBantu->next;
        i++;
    }
    cout << "-------------------------------------------------------------" << endl;
    cout << " " << endl;
}

void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}
