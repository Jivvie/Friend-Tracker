//
//  Friends.h
//  Friend Tracker
//
//  Created by Gjvon Graves on 5/29/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#include <map>
#include <iostream>
using namespace std;
#ifndef Friends_h
#define Friends_h

class Friends
{
private:
    
public:
    Friends(int);
    int numOfFriends;
    
    //methods
    void changeFriendDays(map<string, int>);
    void print(map<string, int>);
    void enterInformation(std::map<string, int> &list);
    void changeLastTalked(map<string, int> &list);
};

#endif /* Friends_h */
