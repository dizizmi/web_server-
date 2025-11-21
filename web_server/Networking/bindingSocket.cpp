//
//  bindingSocket.cpp
//  web_server
//
//  Created by Alysha Hizam on 21/11/25.
//

#include "bindingSocket.hpp"

//constructor
HDE::bindingSocket::bindingSocket(int domain, int service, int protocol, int port, u_long interface) : simpleSocket(domain, service, protocol, port, interface)

{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

//def of connect to network virtual func
int HDE::bindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}


