#include <string>
#include <iostream>
using namespace std;

class mahasiswa
{
private:
	static int nim;

public:
	int id;
	string name;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

};