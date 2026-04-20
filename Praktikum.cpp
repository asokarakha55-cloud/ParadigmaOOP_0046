#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    float TanggalProduksi;

    void printdata()
    {
        cout << "Nama Barang :" << nama << endl;
        cout << "Jumlah :" << jumlah << endl;
        cout << "Kategori :" << kategori << endl;
        cout << "Tanggal Produksi :" << TanggalProduksi << endl;
    }
};
