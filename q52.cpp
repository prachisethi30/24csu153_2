//WAP int factorial (int n) that takes a number as input and returns the factorial of the number.
#include<iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }
    
    return 0;
}