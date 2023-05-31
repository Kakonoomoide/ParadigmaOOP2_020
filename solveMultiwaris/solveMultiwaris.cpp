#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) :umur(pUmur) {
        cout << "orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : virtual public orang {
public:
    pekerja(int pUmur) :orang(pUmur) {
        cout << "pekerja dibuat \n" << endl;
    }
};

class pelajar : virtual public orang {
public:
    pelajar(int pUmur) :orang(pUmur) {
        cout << "pelajar dibuat \n" << endl;
    }
};

class Budi : public pekerja, public pelajar {
public:
    Budi(int pUmur) : pekerja(pUmur), pelajar(pUmur), orang(pUmur) /*orang(pUmur) ditambahkan bila menggunakan virtual*/ {
        cout << "budi dibuat \n" << endl;
    }
};

int main() {
    Budi a(12);

    return 0;
}