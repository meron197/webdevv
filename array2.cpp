<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    double ave = sum / 5.0;

    int larg = marks[0];   

    for (int u = 1; u < 5; u++) {
        if (marks[u] > larg) {
            larg = marks[u];
        }
    }

    cout << "Numbers except the largest are:" << endl;
    for (int l = 0; l < 5; l++) {
        if (marks[l] != larg) {
            cout << marks[l] << " ";
        }
    }

    cout << endl;
    cout << "The sum is " << sum << "The average is " << ave << "The largest number is " << larg << endl;

    
=======
#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    double ave = sum / 5.0;

    int larg = marks[0];   

    for (int u = 1; u < 5; u++) {
        if (marks[u] > larg) {
            larg = marks[u];
        }
    }

    cout << "Numbers except the largest are:" << endl;
    for (int l = 0; l < 5; l++) {
        if (marks[l] != larg) {
            cout << marks[l] << " ";
        }
    }

    cout << endl;
    cout << "The sum is " << sum << "The average is " << ave << "The largest number is " << larg << endl;

    
>>>>>>> 718c43bd6e93afb2b8b47015f1cdb88add659c6f
}