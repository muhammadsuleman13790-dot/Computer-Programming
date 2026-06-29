// Name: Muhammad Suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A

#include <iostream>
using namespace std;

int main()
{
    float radius = 0, circumference = 1;  // Variables to store radius and circumference

    cout << "Enter radius of the circle: ";
    cin >> radius;  // Read the radius input from the user

    circumference = 2 * 3.14159 * radius;  // Calculate the circumference using formula: 2 * pi * radius

    // Display the radius and the calculated circumference
    cout << "Radius = " << radius << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;  // End of program
}
