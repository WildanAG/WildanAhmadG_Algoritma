#include <iostream>
using namespace std;

int main ()
{
	int i,j,k=0;
	cout << "Masukan angka = ";
	cin >> j;
	
	for(i=2; i<=j; i+=2){
		cout << i << " ";
		k += i;
	}
	k -= 10;
	cout << "= " << k;
	return 0;
}
