// Name: Muhammad suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A

#include <iostream>   // For input and output operations
using namespace std;  // Allows use of standard names like cout and cin without std::

int main()
{
    int n, i = 1, sum = 0;
    // n = user input number
    // i = loop counter starting from 1
    // sum = variable to store the total sum, initialized to 0

    cout << "Enter a positive integer: ";
    cin >> n;  // Take input from user

    // Loop runs from 1 up to n
    while(i <= n)
    {
        sum = sum + i;  // Add current value of i to sum
        i++;            // Increment i by 1
    }

    cout << "Sum = " << sum << endl;  // Display the final sum

    return 0;  // Indicate successful program execution
}
