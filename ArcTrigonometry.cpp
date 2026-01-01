#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    const double pi_val = acos(-1.0);

    double numerator, denominator;

    // Keep asking until denominator is non-zero
    while (true) {
        cout << "Enter numerator of your number: ";
        cin >> numerator;

        cout << "Enter denominator of your number: ";
        cin >> denominator;

        if (denominator != 0)
            break;

        cout << "\nDenominator cannot be 0. Please try again.\n\n";
    }

    double input = numerator / denominator;

    cout << "\nComputed value: " << input << endl << endl;

    // Inverse sine and cosine (domain restricted)
    if (input >= -1.0 && input <= 1.0) {
        cout << "Sine: " << asin(input) * 180 / pi_val << " degrees" << endl;
        cout << "Cosine: " << acos(input) * 180 / pi_val << " degrees" << endl;
    } else {
        cout << "Sine: undefined" << endl;
        cout << "Cosine: undefined" << endl;
    }

    cout << "Tangent: " << atan(input) * 180 / pi_val << " degrees" << endl;
    cout << endl;

    // Keeping your original output format
    if (input != 0 && fabs(1.0 / input) <= 1.0)
        cout << "Cosecan: " << asin(1.0 / input) * 180 / pi_val << " degrees" << endl;
    else
        cout << "Cosecan: undefined" << endl;

    if (input != 0 && fabs(1.0 / input) <= 1.0)
        cout << "Secan: " << acos(1.0 / input) * 180 / pi_val << " degrees" << endl;
    else
        cout << "Secan: undefined" << endl;

    if (input != 0)
        cout << "Cotangent: " << atan(1.0 / input) * 180 / pi_val << " degrees" << endl;
    else
        cout << "Cotangent: undefined" << endl;

    cout << "\nPress ENTER to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
