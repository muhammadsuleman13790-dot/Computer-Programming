// Name: Muhammad suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A
#include <iostream>   // For input and output (cout)
using namespace std;  // Allows use of standard names without std::

int main()
{
    int i = 1;  // Initialize counter variable to 1

    do
    {
        cout << i << endl;  // Print the current value of i
        i++;                // Increment i by 1
    }
    while(i <= 10);  // Continue loop as long as i is less than or equal to 10

    // Note: do-while loop executes at least once, even if condition is false

    return 0;  // Indicate successful execution
}
