# include <iostream>
# include <String>
using namespace std;

int main () {

    int n;

    bool truth_1 = false;
    bool truth_2 = false;
    bool truth_3 = false;

    cout << "Please input an interger: ";
    cin >> n;

    // Invalid inputs go here.

    if (!cin) {
        cout << "Invalid input.";
        return 0;
    }
    
    // Checks whether the integer is even.

    else if (n % 2 == 0) {

        truth_1 = true;
        truth_2 = false;

        if (n == 2) {
            truth_3 = true;
        }

        else {
            truth_3 = false;
        }

    }

    // Checks whether the integer is odd.

    else if (n % 2 != 0) {

        truth_1 = false;
        truth_2 = true;

        if (n == 1) {
            truth_3 = false;
        }

        else if (n == 3) {
            truth_3 = true;
        }


        else {

            // Checks for factors from 2 to the square root of the number n.

            int i = 2;

            while (i * i <= n) {

                // If the number n is divisible by i or (i + 2), then it ain't a prime number.

                if (n % i == 0 || n % (i + 2) == 0) {
                    truth_3 = false;
                }

                else {
                    truth_3 = true;
                }

                i = i + (2*3);

            }

        }

    }

    cout << "Is the integer even? " << truth_1 << endl;
    cout << "Is the integer odd? " << truth_2 << endl;
    cout << "Is the integer prime? " << truth_3 << endl;

    return 0;
}

