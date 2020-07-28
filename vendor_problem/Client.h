#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <iostream>
#include <string>

using namespace std;

class Client
{
private:
    std::string client_name;
    int client_id;

public:
    Client() {}
    Client(int client_id);
    Client(std::string client_name, int client_id);
    void set_client_name(std::string client_name);
    std::string get_client_name() const;
    void set_client_id(int client_id);
    int get_client_id() const;

    ~Client() {}
};

#endif