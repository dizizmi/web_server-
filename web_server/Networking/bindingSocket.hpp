//
//  bindingSocket.hpp
//  web_server
//
//  Created by Alysha Hizam on 21/11/25.
//

#ifndef bindingSocket_hpp
#define bindingSocket_hpp

#include <stdio.h>
#include "simpleSocket.hpp"

namespace HDE
{

class bindingSocket: public simpleSocket
{
public: //we want access to the same functions, instantiate an obj of //binding will call for simpleSocket and pass para to its parents
    bindingSocket(int domain, int service, int protocol, int port, u_long interface);
    
    //override virtual function, from parent
    int connect_to_network(int sock, struct sockaddr_in address) ;
};

}
#endif /* bindingSocket_hpp */
