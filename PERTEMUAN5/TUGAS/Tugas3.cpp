#include <iostream>
using namespace std;

void Diamondhollow(int n)
{
	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<(2*n); j++)
		{
			if(i+j <= n-1)
				cout << "*";
			else
				cout << " ";
				
			if((i+n) <= j)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<(2*n); j++)
		{
			if(i>=j)
				cout << "*";
			else
				cout << " ";	
			if(i >= ((2*n)-1)-j)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}

int main ()
{
	int num;
	cout << "Enter number of levels of the pattern : " << endl;
	cin >> num;
	Diamondhollow(num);
	
	return 0;
}
