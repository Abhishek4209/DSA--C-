#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    // program to finding largest number among 3 given number...
    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter 3rd number: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "a is the largest number";
    } else if (b > a && b > c) {
        cout << "b is the largest number";
    } else if (c > a && c > b) {
        cout << "c is the largest number";
    } else {
        cout << "There is a tie among the numbers.";
    }
    return 0;
}
