// Name: Muhammad Suleman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0759
// Section: A

#include <iostream>
using namespace std;

int main() {
    // Purpose: This program calculates the electrical resistance of a circuit
    // using Ohm's Law (Resistance = Voltage / Current).
    // The user inputs voltage and current, and the program outputs the resistance.

    double voltage, current, resistance;  // Variables to store voltage, current, and calculated resistance

    // Ask the user to enter the voltage in volts
    cout << "Enter voltage (V): ";
    cin >> voltage;  // Read voltage input from the user

    // Ask the user to enter the current in amperes
    cout << "Enter current (I): ";
    cin >> current;  // Read current input from the user

    // Calculate resistance using Ohm's Law
    resistance = voltage / current;

    // Display the entered voltage, current, and calculated resistance
    cout << "Voltage: " << voltage << " V" << endl;
    cout << "Current: " << current << " A" << endl;
    cout << "Resistance: " << resistance << " Ohms" << endl;

    return 0;  // End the program successfully
}







