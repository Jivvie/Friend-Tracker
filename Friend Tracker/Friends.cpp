//
//  Friends.cpp
//  Friend Tracker
//
//  Created by Gjvon Graves on 5/29/16.
//  Copyright © 2016 Mitnov. All rights reserved.
//

#include <stdio.h>
#include "Friends.h"
#include <map>
#include <iostream>

using namespace std;

Friends :: Friends(int u_numOfFriends)
{
    numOfFriends = u_numOfFriends - 1;
    enterInformation(friendList);
}

/**
 Allows user to add new friends to the map
 **/
void Friends::addFriendsToList(map<string, int> &friendList)
{
    
    string name;
    int last_time_talked;
    cout << "Enter friend's name to add" << endl;
    cin >> name;
    cout << "Enter the number of days since you spoke to your friend" << endl;
    cin >> last_time_talked;
    friendList[name] = last_time_talked;
}

/**
 Allows user to change the Friends data for the number of days last spoken.
 **/
void Friends:: changeLastTalked(map<string, int> &list)
{
    string name;
    int days;
    cout << "Name of the person you want to edit?" << endl;
    cin >> name;
    cout << "This is the value you want to change: " << list[name] << endl;
    cout<< "What are the REAL number of days since you last talked to him/her? " << endl;
    cin >> days;
    list[name] = days;
    cout << "New value: " << list[name] << endl;
}

/**
 Function that is called via the default constructor.
 Function allows user to enter the names of their friends as well as
 the values for the number of days that has passed sinced they have talked.
 **/
void Friends :: enterInformation(std::map<string, int> &fList)
{
    // This parameter is defaulted to true
    bool wantsToEdit = true;
    //name of friend
    string name;
    //number of days since the user talked to this friend
    int daysSinceTalked;
    /**
     This for loop will continuously ask the user to input values for each friend.
     The number of days since the user has talked to each friend will be linked to the friend's name;
     **/
    for (int i = 0; i <= numOfFriends; i++)
    {
        cout << "Enter your Friend's name" << endl;
        cin >> name;
        cout << "Enter the number of days since you guys last spoke" << endl;
        cin >> daysSinceTalked;
        //check for negative value. Since the user has taken the time to input a negative value,
        // it is assumed that they have not spoken to this friend at all, before today.
        if(daysSinceTalked < 0)
        {
            cout << "You entered a negative value. The number of days since you talked to this friend has been " << "initialized to zero." << endl;
            daysSinceTalked = 0;
        }
        // add friend to list
        fList[name] = daysSinceTalked;
    }
    //while true, user must want to edit friends or would like to add friends.
    while(wantsToEdit)
    {
        //variable for user input.
        int num;
        cout << "Would you like to edit any friends? Enter 1 if yes. Enter 2 if you would like to add friends. " << endl;
        cin >> num;
        //if user doues not enter the value 1, the loop will stop
        if (num == 0) {
            wantsToEdit = false;
        }
        else if(num > 2)
        {
            //set answer to false. The loop will stop.
            wantsToEdit = false;
        }
        else if (num == 2)
        {
            addFriendsToList(fList);
        }
        else{
            //allow user to edit friends.
            changeLastTalked(fList);
        }
        
    }
    printFriendList(fList);
}

/**
 Function that uses an interator to iterate through the map, printing out keys and their values.
 User will see their friends as well as the number of days last spoken to that friend.
 **/
void Friends::printFriendList(map<string, int> &fList)
{
    for( map<string, int>::iterator itr = fList.begin(), end =fList.end(); itr != end; ++itr)
    {
        cout << endl;
        cout << "Name: " << itr -> first << endl << "Days last talked to him/her: " << itr -> second << endl;
    }
}