#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) { //member
		//Definisi
	}

	~mahasiswa() {
		cout << "Id = " << id << endl;
		cout << "Nama= " << id << endl;
		cout << "Nilai = " << id << endl;
	}
};

int main() {
	mahasiswa mhs(12, "Lia", 90.5);

	return 0;
}