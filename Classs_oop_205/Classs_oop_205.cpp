#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    void tampil() {
        cout << "NIM= " << nim;
        cout << "\nNama= " << nama;
    }
};

class Matakuliah {
private:
    int sks;
    string kode;
    string namaMK;
public:
    void inputMK() {

        cout << "\nMasukkan jumlah SKS= ";
        cin >> sks;
        cout << "Masukkan Kode MK= ";
        cin >> kode;
        cout << "Masukkan Nama MK= ";
        cin >> namaMK;
    }