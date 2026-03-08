#include <iostream>   // Includes the input-output stream library

using namespace std;  // Allows using cout and cin without std::

int main()            // Main function - execution starts here
{
    float a = 10.2, b, c;  // Declares three floating-point variables: 'a' initialized to 10.2, 'b' and 'c' uninitialized

    cout << "Enter value for a:\n";  // Prompts the user to enter a value for 'a'
    cin >> a;                        // Reads the user input and stores it in 'a'

    cout << "Enter value for b:\n";  // Prompts the user to enter a value for 'b'
    cin >> b;                        // Reads the user input and stores it in 'b'

    c = a + b;                       // Adds 'a' and 'b', stores the result in 'c'

    cout << "a + b = " << c;         // Displays the result of the addition

    return 0;                         // Indicates the program ended successfully
}


