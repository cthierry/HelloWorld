//
//  main.cpp
//  HelloWorld
//
//  Test for GitHub udpdate
//  Created by Christophe THIERRY on 4/04/17.
//  Copyright © 2017 Christophe THIERRY. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, const char * argv[]) {
    auto userp = getenv("USER");
    std::string user(userp?userp:"");
    if (user.length())
        user[0]=toupper(user[0]);
    std::cout << "Hello, World and hello "<< user <<std::endl;
    return 0;
}
