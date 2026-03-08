#include <iostream>   // Includes the input-output stream library

using namespace std;  // Allows us to use standard names like cout and cin without std::

int main()            // Main function - execution starts here
{
    int a = 10;       // Declares an integer variable 'a' and initializes it with 10 (default value)

    cout << "Enter value for a:\n";   // Prompts the user to enter a value

    cin >> a;         // Takes input from the user and stores it in variable 'a'
                      // This will overwrite the initial value (10)

    cout << "a = " << a;   // Displays the value entered by the user

    return 0;         // Indicates the program ended successfully
}

