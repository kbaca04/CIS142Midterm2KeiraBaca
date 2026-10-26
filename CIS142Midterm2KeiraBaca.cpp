#include <iostream>
using namespace std;

int main()
{
	int r = 12;
	int c = 12;
	cout<< "Multiplication Table";
	cout << "\n==================\n";

	while (r >=1) {
		cout << "Table of #" << r << endl;
		cout << "===========" << endl;
		while (c >=1) {
			cout<< r<< " x " << c<< "==>" << (r*c) << endl;
			c--;
		}
		cout << endl;
		c = 12;
		r--;
	}
}

