#include <iostream>
using namespace std;

int main()
{
	for (int i = 20; i <= 24; i++) {
		int modulus = i % 2;
		if (modulus == 0) {
			cout << i << " even" << endl;
		}
		else {
			cout << i << " odd" << endl;
		}
	}
	cout << endl;

	return 0;
}