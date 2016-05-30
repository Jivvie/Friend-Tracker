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
    int numOfFriends;
    cout << "How many friends do you want to put into the system?" << endl;
    cout << "If time is of the essence, we suggest using small values" << endl;
    cout << "Zero is invalid" << endl;
    cin >> numOfFriends;
    //keep the user from entering zero
    while(numOfFriends == 0 || cin.fail())
    {
        cout << "Invalid input, try again" << endl;
        cin >> numOfFriends;
    }
    Friends f(numOfFriends);
    return 0;
}

/**
currently I am learning how to parse string values, so work with me here. I want to check if user entered a number...
 things get wonky if user enters text. For example......
 However, here is my program....
**/