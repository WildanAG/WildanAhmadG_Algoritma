#include <iostream>
#define phi 3.14152965
using namespace std ;

int main ()
{
	float jari_jari, tinggi, volume, luas;
	
	cout << "Menghitung Luas Lingkaran " << endl;
	cout << "Masukan Jari Jari    = ";
	cin >> jari_jari;
	
	cout << "\nDiketahui luas lingkaran : ";
	cout << "\nJari Jari (r)      = " << jari_jari;
	cout << "\nPi                 = " << phi;
	cout << "\nLuas               = Pi x r x r ";
	cout << "\nLuas               = " << phi << " x " << jari_jari << " x " << jari_jari;
	
	luas = phi*jari_jari*jari_jari;
	cout << "\nLuas lingkaran     = " << luas;
	
	cout << "\n============================================== " << endl;
	
	cout << "Menghitung Volume Tabung " << endl;
	cout << "Masukan Jari Jari    = ";
	cin >> jari_jari;
	
	cout << "Masukan Tinggi       = ";
	cin >> tinggi;
	
	cout << "\nDiketahui Volume Tabung : ";
	cout << "\nJari Jari (r)      = " << jari_jari;
	cout << "\nTinggi (t)";
	cout << "\nPi                 = " << phi;
	cout << "\nLuas               = Pi x r x r x t";
	cout << "\nLuas               = " << phi << " x " << jari_jari << " x " << jari_jari << " x " << tinggi;
	
	luas = phi*jari_jari*jari_jari*tinggi;
	cout << "\nVolume             = " << luas;
	
	return 0;
}
