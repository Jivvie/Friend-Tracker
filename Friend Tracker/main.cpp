//
//  main.cpp
//  Friend Tracker
//
//  Created by Gjvon Graves on 5/29/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//
#include <map>
#include <iostream>
#include "Friends.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::map<string, int> list;
    Friends f(1);
    f.enterInformation(list);
    return 0;
}
