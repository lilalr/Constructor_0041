#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
    int nim;
    string nama;

public:
    mahasiswa()
    {
        nim = 0;
         nama = "";
    };

    mahasiswa(int iNim)
    {
        nim = iNim;
    }

    mahasiswa(string iNama)
    {
        nama = iNama;
    };

    mahasiswa(int iNim, string iNama)
    {
        nim = iNim;
        nama = iNama;
    };

    void cetak()
    {
        cout << "NIM    = " << nim << endl;
        cout << "Nama   = " << nama << endl;
        cout << endl;
    }
};

int main()
{
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Indra");
    mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}