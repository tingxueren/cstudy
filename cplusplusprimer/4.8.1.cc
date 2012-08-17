#include <iostream>
using namespace std;

int main()
{
	const int arr_size = 6;
	int ia1[arr_size], ia2[arr_size], ix;
	cout << "Enter " << arr_size << "numbers for ia1" << endl;
	for (ix = 0; ix != arr_size; ++ix)
		cin >> ia1[ix];
	cout << "Enter " << arr_size << "numbers for ia2" << endl;
	for (ix = 0; ix != arr_size; ++ix)
		cin >> ia2[ix];
	for (ix = 0; ix != arr_size; ++ix)
		if (ia1[ix] != ia2[ix]) {
			cout << " there are not same." << endl;
			return 0;
		}
	cout << "there are same." << endl;
	return 0;
	
}	
