#include <iostream>
#include "Paycheck.h"

using namespace std;

int main()
{
    cout << "\n\tCalifornia Paycheck Estimation\n"
         << endl;

    double your_rate;
    cout << "Enter hourly rate -> ";
    cin >> your_rate;
    cout << endl;

    Paycheck mycheck(your_rate);
    mycheck.paycheck_statement();
    return 0;
}