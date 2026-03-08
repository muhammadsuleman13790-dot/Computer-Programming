
#include <iostream>   // Includes input/output stream library

using namespace std;  // Allows using cout and cin without std::

int main()            // Main function - program execution starts here
{
    int num1;         // Declare integer variable 'num1'
    int num2;         // Declare integer variable 'num2'

    // Prompt user to enter two integers
    cout << "Enter two integers, and I will tell you\n"
            << "the relationships they satisfy: ";
    cin >> num1 >> num2;  // Read two integers from user

    // Compare the two integers and display all applicable relationships
    if (num1 == num2)
        cout << num1 << " is equal to " << num2 << endl;

    if (num1 != num2)
        cout << num1 << " is not equal to " << num2 << endl;

    if (num1 < num2)
        cout << num1 << " is less than " << num2 << endl;

    if (num1 > num2)
        cout << num1 << " is greater than " << num2 << endl;

    if (num1 <= num2)
        cout << num1 << " is less than or equal to " << num2 << endl;

    if (num1 >= num2)
        cout << num1 << " is greater than or equal to " << num2 << endl;

    return 0;  // Indicates successful program termination
}

