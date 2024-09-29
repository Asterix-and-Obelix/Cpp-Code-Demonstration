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

	cout << "Single while loop. \n";

    int i = 0;
    while (i <= n) {
        cout << "Row " << i << " out of " << n << endl;
        i = i + 1;
    }

	cout << endl;

	cout << "Double for loop. \n";

	for (int i = 0; i <= n ; i++) {
		for (int j = 0; j <= n ; j++) {
			cout << "Row " << i << " column " << j << " out of " << n << endl;
		}
		cout << endl;
	}

	cout << "Double while loop. \n";

	i = 0;
	int j = 0;
	while (i <= n) {
		while (j <= n) {
			cout << "Row " << i << " column " << j << " out of " << n << endl;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
		j = 0;
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

	cout << "Triple while loop.\n";

	i = 0;
	j = 0;
	int k = 0;
	while (i <= n) {
		while (j <= n) {
			while (k <= n) {
				cout << "Row " << i << " column " << j << " slice " << k << " out of " << n << endl;
				k = k + 1;
			}
			cout << endl;
			j = j + 1;
			k = 0;
		}
		i = i + 1;
		j = 0;
	}
	
	return 0;
}