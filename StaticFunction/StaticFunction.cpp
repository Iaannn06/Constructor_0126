#include <string>
#include <iostream>
using namespace std;

class mahasiswa
{
private:
	static long int nim;

public:
	long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

int long mahasiswa::nim = 20230140126;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Alfian Azad");
	mahasiswa mhs2("Meuthia");
	mahasiswa::setNim(9);
	mahasiswa mhs3("Michael Phillips");
	mahasiswa mhs4("Carl Johnson");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

	return 0;
}