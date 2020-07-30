#include "Vendor.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Vendor Problem\n" << endl;

    Vendor vendor_1("vendor_1", 1, 10, "2017-01-01 13:30:00");
    Vendor vendor_2("vendor_2", 2, 20, "2017-01-01 13:30:00");

    vendor_1.get_details();
    vendor_2.get_details();
    vendor_1.store_client_info(40, "2017-01-01 14:30:00");
    vendor_1.get_details();
    vendor_2.get_details();

    return 0;
}