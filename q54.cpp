//write a function int sum of digits(int n) that calculates and returns the sum of digits of a given number.
#include<iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    // Process each digit of the number
    while (n != 0) {
        int digit = n % 10;  // Extract the last digit
        sum += digit;        // Add the digit to the sum
        n /= 10;             // Remove the last digit from n
    }
    
    return sum;  // Return the sum of digits
}

int main() {
    int num;
    
    // Ask for input
    cout << "Enter a number: ";
    cin >> num;
    
    // Call the sumOfDigits function and display the result
    cout << "The sum of the digits is: " << sumOfDigits(num) << endl;
    
   return 0;
}