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
    int num_of_drivers;

    bool vendor_availability = true;
public:
    Vendor();
    Vendor(int vendor_id);
    Vendor(std::string vendor_name, int vendor_id);
    Vendor(std::string vendor_name, int vendor_id, int client_id, std::string datetime);

    //setters and getters
    void set_vendor_name(std::string vendor_name);
    std::string get_vendor_name() const;

    void set_vendor_id(int vendor_id);
    int get_vendor_id() const;

    void set_num_of_drivers(int drivers);
    int get_num_of_drivers() const;

    void store_client_info(int client_id, std::string date);
    void search_for_client(int client_id);

    vector <Client> get_clients();

    bool isAvailable() const;

    void get_details();

    ~Vendor();
};

#endif