#include <iostream>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) : nama(pNama) {
		cout << "Orang dibuat\n" << endl;
	}

	~orang(){
		cout << "Orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jeniskelamin;

	manusia(string pJenisKelamin) : jeniskelamin(pJenisKelamin) {
		cout << "Orang dibuat\n" << endl;
	}

	~manusia() {
		cout << "Orang dihapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pJenisKelamin, string pSekolah) : 
		orang(pNama), manusia(pJenisKelamin), sekolah(pSekolah) {
		cout << "Pelajar dibuat\n" << endl;
	}
	~pelajar(){
		cout << "Pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return " Hallo, nama saya " + nama + " dengan jenis kelamin " + jeniskelamin + " dari sekolah" + sekolah + "\n\n";
	}
};

int main(){
	
}