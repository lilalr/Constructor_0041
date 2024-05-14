#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setId();
    void printAll();

    static void setNim(int pnim) { nim = pnim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama = pnama;
        setId();
    }
};

int mahasiswa::nim = 0;

void mahasiswa::setId()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID     = " << id << endl;
    cout << "Nama   = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Sri Sultan");
    mahasiswa mhs2("Budi Santoso");

    mahasiswa::setNim(236); // Mengakses nim melalui static member function "setNim"
    mahasiswa mhs3("Andi Jarwo");
    mahasiswa mhs4("Joko Tingkir");

    