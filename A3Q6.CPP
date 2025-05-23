#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1) return n;  
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci Number: " << fibonacciRecursive(n) << endl;
    return 0;
}
