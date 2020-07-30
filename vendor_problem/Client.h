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
    std::string datetime;

public:
    Client();
    Client(int client_id, std::string datetime);
    Client(std::string client_name, int client_id, std::string datetime);

    void set_client_name(std::string client_name);
    std::string get_client_name() const;

    void set_client_id(int client_id);
    int get_client_id() const;

    void set_datetime(std::string datetime);
    std::string get_datetime() const;

    ~Client();
};

#endif