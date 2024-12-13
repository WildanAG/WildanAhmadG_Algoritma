#include <iostream>
using namespace std;

int main() {
//	inisialisasi variabel

	int x = 50; //membuat variabel bilangan bulat berupa, nilai x adalah 50
	
	int a, b, c, d, e; //membuat variabel yang akan digunakan di dalam bagian proses
	
//	proses

	a = x > 5 + 5; //membandingkan nilai variabel x dengan 10, jika lebih besar maka 1(true) jika lebih kecil 0(salah)
	b = x > 100; //membandingkan nilai variabel x dengan 100, jika lebih besar maka 1(true) jika lebih kecil 0(salah)
	c = a && b; //menggunakan and, yang dimana 1 dengan 1 = benar, 1 dan 0 = salah, 0 dan 0 = salah
	d = a || b; //menggunakan or, yang dimana 1 dengan 1 = benar, 1 dan 0 = benar, 0 dan 0 = salah
	e = !(c); //membalikan nilai karena terdapat !, karena c adalah false, maka dibalikan menjadi true
	
//	output berupa 1 (benar) dan 0 (salah)

	cout << "\nNilai a = x > 5 + 5 =" << a << endl; //membuat output untuk a
	cout << "\nNilai b = x > 100 =" << b << endl; //membuat output untuk b
	cout << "\nNilai c = a && b =" << c << endl; //membuat output untuk c
	cout << "\nNilai d = a || b =" << d << endl; //membuat output untuk d
	cout << "\nNilai e = !(c) =" << e << endl; //membuat output untuk e
	getchar();
}
