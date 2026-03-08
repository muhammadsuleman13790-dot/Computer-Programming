#include <iostream>   // Includes the input-output stream library

using namespace std;  // Allows us to use standard names like cout without std::

int main()            // Main function - execution starts here
{
    int a;            // Declares an integer variable 'a' (currently uninitialized)

    cout << "a = " << a;   // Prints the value of 'a' to the screen
                           // WARNING: 'a' is not initialized, so it contains a garbage value

    return 0;         // Indicates the program ended successfully
}

