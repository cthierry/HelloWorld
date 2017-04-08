//
//  main.cpp
//  HelloWorld
//
//  Created by Christophe THIERRY on 4/04/17.
//  Copyright © 2017 Christophe THIERRY. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    auto userp = getenv("USER");
    std::string user;
    if (userp)
        user = userp;
    std::cout << "Hello, World!\nHello "<< userp<<std::endl;
    return 0;
}
