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

