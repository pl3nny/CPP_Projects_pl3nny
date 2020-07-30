#include "Client.h"

Client::Client() {}

Client::Client(int client_id, std::string datetime)
{
    this->client_id = client_id;
    this->datetime = datetime;
}

Client::Client(std::string client_name, int client_id, std::string datetime)
    : Client(client_id, datetime)
{
    this->client_name = client_name;
}

void Client::set_client_name(std::string client_name)
{
    this->client_name = client_name;
}

std::string Client::get_client_name() const { return client_name; }

void Client::set_client_id(int client_id)
{
    this->client_id = client_id;
}

int Client::get_client_id() const { return client_id; }

void Client::set_datetime(std::string datetime)
{
    this->datetime = datetime;
}

std::string Client::get_datetime() const {return datetime;}

Client::~Client() {}