#include "Vendor.h"

Vendor::Vendor() {}

Vendor::Vendor(int vendor_id)
{
    this->vendor_id = vendor_id;
    
}

Vendor::Vendor(std::string vendor_name, int vendor_id)
    : Vendor(vendor_id)
{
    this->vendor_name = vendor_name;
}

Vendor::Vendor(std::string vendor_name, int vendor_id, int client_id, std::string datetime)
    : Vendor(vendor_name, vendor_id)
{
    Client temp(client_id, datetime);
    clients.push_back(temp);
}

void Vendor::set_vendor_name(std::string vendor_name)
{
    this->vendor_name = vendor_name;
}

std::string Vendor::get_vendor_name() const { return vendor_name; }

void Vendor::set_vendor_id(int vendor_id)
{
    this->vendor_id = vendor_id;
}

int Vendor::get_vendor_id() const { return vendor_id; }

void Vendor::set_num_of_drivers(int drivers)
{
    this->num_of_drivers = drivers;
}

void Vendor::store_client_info(int client_id, std::string datetime)
{
    Client temp(client_id, datetime);
    clients.push_back(temp);
    std::cout << "new client added\n" << std::endl;
}

int Vendor::get_num_of_drivers() const { return num_of_drivers; }

vector<Client> Vendor::get_clients()
{
    return clients;
}

bool Vendor::isAvailable() const { return vendor_availability; }

void Vendor::get_details()
{
    for (auto client : clients)
    {
        cout << "vendor_id: " << vendor_id << "\n"
             << "client_id: " << client.get_client_id() << "\n"
             << "datetime : " << client.get_datetime() << endl;

        cout << endl;
    }
}

Vendor::~Vendor() {}