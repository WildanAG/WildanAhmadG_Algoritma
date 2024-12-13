#include <iostream>
using namespace std;
int main ()
{
	int nilai1, nilai2, nilai3, rata_rata;
	string nama;
	
	cout << "Menghitung Nilai Rata - Rata" << endl;
	
	cout << "Nama Siswa : ";
	cin >> nama;
	cout << "Nilai Perbandingan I :";
	cin >> nilai1;
	cout << "Nilai Perbandingan II :";
	cin >> nilai2;
	cout << "Nilai Perbandingan III :";
	cin >> nilai3;
	
	cout << "Siswa yang bernama :" << nama << endl;
	cout << "=================================================" << endl;
	
	rata_rata = (nilai1 + nilai2 + nilai3) / 3;
	cout << "Memperoleh nilai rata-rata (" << rata_rata << ") dari perlombaan yang diikuti" << endl;
	
	switch(rata_rata) {
		case 0 ... 69 :
		cout << "Mendapat hadiah hiburan";
		break;
		case 70 ... 84 :
		cout << "Mendapat uang tunai sebesar Rp 2.500.000";
		break;
		case 85 ... 100 :
		cout << "Mendapat hadiah Komputer Core i5";
		break;
		}	
	return 0;
}
