 
#include <iostream>   // Includes the input-output stream library

using namespace std;  // Allows using cout and cin without std::

int main()            // Main function - execution starts here
{
    int integer1;     // Declares an integer variable 'integer1'
    int integer2;     // Declares an integer variable 'integer2'
    int sum;          // Declares an integer variable 'sum' to store the result

    cout << "Enter first integer\n";  // Prompts the user to enter the first integer
    cin >> integer1;                  // Reads the user input and stores it in 'integer1'

    cout << "Enter second integer\n"; // Prompts the user to enter the second integer
    cin >> integer2;                  // Reads the user input and stores it in 'integer2'

    sum = integer1 + integer2;        // Adds the two integers and stores the result in 'sum'

    cout << "Sum is " << sum << endl; // Prints the sum to the screen

    return 0;                         // Indicates the program ended successfully
}
