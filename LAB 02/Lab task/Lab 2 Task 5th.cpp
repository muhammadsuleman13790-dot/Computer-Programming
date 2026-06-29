// Name: Muhammad Suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A

#include <iostream>   // Include library for input and output operations
using namespace std;  // Allows using cout and cin without std::

int main()  // Main function where program execution starts
{
    int number;  // Variable to store the integer entered by the user

    cout << "Enter an integer: ";  // Ask the user to input an integer
    cin >> number;  // Read the input from the user and store it in 'number'

    // Check if the entered number is positive or negative
    if (number >= 0)  
        cout << "You entered a positive integer: " << number << endl;  // Number is positive or zero
    else              
        cout << "You entered a negative integer: " << number << endl;  // Number is negative

    return 0;  // End of program
}
