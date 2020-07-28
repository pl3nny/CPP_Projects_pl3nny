#include "Client.h"

Client::Client() {}

Client::Client(int client_id)
{
    this->client_id = client_id;
}

Client::Client(std::string client_name, int client_id)
    : Client(client_id)
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

Client::~Client() {}