#include <iostream>   // Includes the input/output stream library

using namespace std;  // Allows using cout without std::

int main()            // Main function - program execution starts here
{
    int a = 4;        // Declare integer variable 'a' and initialize it to 4
    int b = 4;        // Declare integer variable 'b' and initialize it to 4

    // Check if 'a' is less than or equal to 'b'
    if (a <= b)
        cout << "Run";   // If the condition is true, print "Run"

    return 0;          // Indicates the program ended successfully
}