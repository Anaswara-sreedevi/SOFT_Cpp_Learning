#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0;
    int second = 1;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";

    for (int i = 1; i <= n; i++) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}