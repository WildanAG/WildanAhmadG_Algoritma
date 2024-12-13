#include <iostream>
using namespace std;

int main ()
{
	int i,j,k=10;
	cout << "Masukan angka = ";
	cin >> j;
	
	for(i=1; i<=j; i+=2){
		cout << i << " ";
		k += i;
	}
	cout << "= " << k;
	return 0;
}
