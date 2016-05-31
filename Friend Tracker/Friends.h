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
    map<string, int> friendList;
    
public:
    Friends(int);
    int numOfFriends;
    
    //methods
    void enterInformation(std::map<string, int> &);
    void changeLastTalked(map<string, int> &);
    void addFriendsToList(map<string, int> &);
    void printFriendList(map<string, int> &);
};

#endif /* Friends_h */
