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
    map<string, int> friendList;
    
}

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

void Friends :: enterInformation(std::map<string, int> &list)
{
    bool answer = true;
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
        list[name] = daysSinceTalked;
    }
    while(answer)
    {
        //variable for user input.
        int num;
        cout << "Would you like to edit any friends? Enter 1 if yes. " << endl;
        cin >> num;
        //if user doues not enter the value 1, the loop will stop and the program will terminate.
        if(num != 1)
        {
            //set answer to false. The loop will stop.
            answer = false;
            cout << "Closing....";
        }
        else{
            //allow user to edit friends.
            changeLastTalked(list);
        }
        
    }
}