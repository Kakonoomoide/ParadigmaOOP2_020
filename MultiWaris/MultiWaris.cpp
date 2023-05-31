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



int main(){
	
}