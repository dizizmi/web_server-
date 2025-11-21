//
//  simpleSocket.cpp
//  
//
//  Created by Alysha Hizam on 20/11/25.
//

#include "simpleSocket.hpp"

HDE::simpleSocket::simpleSocket(int domain, int service, int protocol, int port, u_long interface) //passing the int
{
    //Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port); //set to port bytes for sys to network
    address.sin_addr.s_addr = htonl(interface);
    
    //establish socket
    sock = socket(domain, service, protocol);
    connection = connect_network(sock, address);
    //establish network connection
    test_connection(connection);
}

//test connection virtual function
void HDE::simpleSocket::test_connection(int item_to_test)
{
    //confirm the socket/ connection is properly establishd
    if (item_to_test < 0)
    {
        perror("Not connecting");
        exit(EXIT_FAILURE);
    }
}

//getter func

struct sockaddr_in HDE::simpleSocket::get_address()
{
    return address;
}
int HDE::simpleSocket::get_sock()
{
    return sock;
}
int HDE::simpleSocket::get_connection()
{
    return connection;
}
