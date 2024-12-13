#include <iostream>
using namespace std;

int main () 
{
	cout <<"Nomor 1 - Penjumlahan" << endl; //penjumlahan
	
	int A, B, Jumlah;
	
	cout << "Nilai A : ";
	cin >> A;
	cout << "Nilai B : ";
	cin >> B;
	Jumlah = A + B;
	cout << "Hasil penjumlahan adalah : " << Jumlah << endl;
	
	cout << "\nNomor 2 - Pengurangan" << endl; //pengurangan
	
	cout << "Nilai A : ";
	cin >> A;
	cout << "Nilai B : ";
	cin >> B;
	Jumlah = A - B;
	cout << "Hasil pengurangan adalah : " << Jumlah << endl;
	
	cout << "\nNomor 3 - perkalian" << endl; //perkalian
	
	cout << "Nilai A : ";
	cin >> A;
	cout << "Nilai B : ";
	cin >> B;
	Jumlah = A * B;
	cout << "Hasil perkalian adalah : " << Jumlah << endl;
	return 0;
}

