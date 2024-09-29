# include <iostream>
using namespace std;

int main () {

	int n;
	cout << "Please input the number of iterations: ";
	cin >> n;
	cout << endl;

	cout << "Single for loop. \n";

	for (int i = 0; i <= n ; i++) {
		cout << "Row " << i << " out of " << n << endl;
	}

	cout << endl;
	
	cout << "Double for loop. \n";

	for (int i = 0; i <= n ; i++) {
		for (int j = 0; j <= n ; j++) {
			cout << "Row " << i << " column " << j << " out of " << n << endl;
		}
		cout << endl;
	}
	
	cout << "Triple for loop \n";

	for (int i = 0; i <= n ; i++) {
		for (int j = 0; j <= n ; j++) {
			for (int k = 0; k <= n ; k++){
				cout << "Row " << i << " column " << j << " slice " << k << " out of " << n << endl;
			}
			cout << endl;
		}
	}

	return 0;
}