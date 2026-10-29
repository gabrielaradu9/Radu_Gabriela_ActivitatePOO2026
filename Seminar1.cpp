#include <iostream>

using namespace std;

struct Cladire
{
	unsigned char numar;
	char* culoare;
	float inaltime;
	int nrEtaje;
	bool esteDeschisa;
};

int suma(int a, int b);

void afisareCladire(Cladire a)
{
	cout << a.inaltime << " " << a.esteDeschisa << " " << a.nrEtaje << " " << a.numar << " " << a.culoare << endl;
}

void main()
{
	std::cout << "Hello world!" << std::endl;
	Cladire c;
	cout << sizeof(c);
	c.inaltime = 30.4;
	c.esteDeschisa = true;
	c.numar = 10;
	c.numar = 'A';
	c.culoare = new char[strlen("Maro") + 1];
	strcpy_s(c.culoare, strlen("Maro") + 1, "Maro");
	afisareCladire(c);
	delete[] c.culoare;
}