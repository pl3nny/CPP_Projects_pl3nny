#ifndef _VENDOR_H_
#define _VENDOR_H_

#include <string>
#include <vector>

#include "Client.h"

class Vendor
{
private:
    vector <Client> clients;    // TODO: some map or algo to search up clients base on id
    std::string vendor_name;
    int vendor_id;
    std::string datetime;
    bool vendor_availability = true;
public:
    Vendor();
    Vendor(int vendor_id, std::string datetime);
    Vendor(std::string vendor_name, int vendor_id, std::string datetime);

    //setters and getters
    void set_vendor_name(std::string vendor_name);
    std::string get_vendor_name() const;
    void set_vendor_id(int vendor_id);
    int get_vendor_id() const;

    void set_datetime(std::string datetime);
    std::string get_datetime() const;

    bool isAvailable() const;

    std::string get_details(std::string name, int id);

    ~Vendor();
};

#endif