#include<iostream>
#include<string.h>
using namespace std;
struct Destination
{
	char city[32];
	int kilometers;
	int getCity()
	{
		return city[32];
	}
	int getKilometers()
	{
		return kilometers;
	}
	void setCity(char newCity[32])
	{
		strcpy_s(city,32,newCity);
	}
	void setKilometers(int newKilometers)
	{
		kilometers = newKilometers;
	}
};
int main()
{
	
	int n = 2;
	Destination p[2];
	char a[32] = "Plovdiv";
	char b[32] = "Varna";
	p[0].setCity(a);
	p[0].setKilometers(165);
	p[1].setCity(b);
	p[1].setKilometers(469);
	for (int i = 0; i < n;i++)
	{
		cout << "City: "<<p[i].city << endl;
	    cout << "Kilometers: " << p[i].kilometers << endl;
		cout << "\n";
	}
	Destination k[30];
	char c[1] = { '\0' };
	for (int i = 0; i < 30; i++)
	{
		k[i].setCity(c);
		k[i].setKilometers(0);
	}
	cout << "----------------------------------------------------";
	cout << "\n";
	Destination r[5];
	char d[32] = "Burgas";
	char e[32] = "Vidin";
	char f[32] = "Dobrich";
	r[0].setCity(a);
	r[0].setKilometers(165);
	r[1].setCity(b);
	r[1].setKilometers(469);
	r[2].setCity(d);
	r[2].setKilometers(393);
	r[3].setCity(e);
	r[3].setKilometers(199);
	r[4].setCity(f);
	r[4].setKilometers(512);
	for (int i = 0; i < 5; i++)
	{
		cout << "City: " << r[i].city << endl;
		cout << "Kilometers: " <<r[i].kilometers << endl;
		cout << "\n";
	}
	system("pause");
	return 0;
}
