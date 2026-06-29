// Name: Muhammad Suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int a, b;  // Declare two integer variables to store user input

    cout << "Enter the first number: ";
    cin >> a;  // Read the first number from the user

    cout << "Enter the second number: ";
    cin >> b;  // Read the second number from the user

    if (a == b)  // Check if the two numbers are equal
        cout << "Both numbers are equal" << endl;
    if (a > b)   // Check if the first number is greater than the second
        cout << "First number is greater than second" << endl;
    if (a < b)   // Check if the first number is smaller than the second
        cout << "First number is less than second" << endl;

    return 0;  // End the program successfully
}