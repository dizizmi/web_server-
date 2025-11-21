//
//  simpleSocket.hpp
//  
//
//  Created by Alysha Hizam on 20/11/25.
//

#ifndef simpleSocket_hpp
#define simpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>


namespace HDE
{
class simpleSocket
{
private:
    struct sockaddr_in address; //define address as microvar
    int sock; //ref to see connection
    int connection; //ref to see result
    
public:
    //constructor
    simpleSocket(int domain, int service, int protocol, int port, u_long interface); /* note: type of IP, service requried, protocol used to support socket operation, usign long of ip address (interf) */
    
    //virtual func to connect to a netw
    virtual int connect_network(int sock, struct sockaddr_in address) = 0;
    //func to test sockets and connections
    void test_connection(int);
    //getter func
    struct sockaddr_in get_address();
    int get_sock();
    int get_connection();
};
}

#endif /* simpleSocket_hpp */
