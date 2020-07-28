#include "Vendor.h"

Vendor::Vendor(){}

Vendor::Vendor(int vendor_id, std::string datetime)
{
    this->vendor_id = vendor_id;
    this->datetime = datetime;
}

Vendor::Vendor(std::string vendor_name, int vendor_id, std::string datetime)
    : Vendor(vendor_id, datetime)
{
    this->vendor_name = vendor_name;
}

void Vendor::set_vendor_name(std::string vendor_name)
{
    this->vendor_name = vendor_name;
}

std::string Vendor::get_vendor_name() const {return vendor_name;}

void Vendor::set_vendor_id(int vendor_id)
{
    this->vendor_id = vendor_id;
}

int Vendor::get_vendor_id() const {return vendor_id;}


void Vendor::set_datetime(std::string datetime)
{
    this->datetime = datetime;
}

std::string Vendor::get_datetime() const {return datetime;}

bool Vendor::isAvailable() const {return vendor_availability;}

std::string Vendor::get_details(std::string name, int id)
{
    return name + " : " + std::to_string(id) + "\t" + datetime;
}

Vendor::~Vendor(){}