// Name: Muhammad Suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A

#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store the values of two resistors and the net resistance
    float r1, r2, netResistance;

    // Initialize the resistor values and net resistance to zero
    r1 = 0;
    r2 = 0;
    netResistance = 0;

    // Prompt the user to enter the value of the first resistor
    cout << "Enter value of first resistor: ";
    cin >> r1;  // Read and store the first resistor value

    // Prompt the user to enter the value of the second resistor
    cout << "Enter value of second resistor: ";
    cin >> r2;  // Read and store the second resistor value

    // Calculate the net resistance for resistors connected in parallel
    // Formula: R_net = (R1 * R2) / (R1 + R2)
    netResistance = (r1 * r2) / (r1 + r2);

    // Display the entered resistor values and the calculated net resistance
    cout << "First Resistor: " << r1 << " ohms" << endl;
    cout << "Second Resistor: " << r2 << " ohms" << endl;
    cout << "Net Parallel Resistance: " << netResistance << " ohms" << endl;

    return 0;  // End the program successfully
}
