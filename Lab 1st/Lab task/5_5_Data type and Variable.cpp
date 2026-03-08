#include <iostream>   // Includes the input-output stream library

using namespace std;  // Allows using cout and cin without std::

int main()            // Main function - execution starts here
{
    char a = 'a';     // Declares a character variable 'a' and initializes it with 'a'

    cout << "Enter an alphabet for a:\n";   // Prompts the user to enter a character

    cin >> a;         // Takes input from the user and stores it in variable 'a'
                      // This will replace the initial value ('a')

    cout << "a = " << a;   // Displays the character entered by the user

    return 0;         // Indicates the program ended successfully
}

