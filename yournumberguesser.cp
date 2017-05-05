//
//  main.cpp
//  Your Number Guesser
//
//  Created by Jett Johanson on 5/4/17.
//  Copyright © 2017 Jett Johanson. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;


int main() {
    
    int mynumber;
    int x;
    bool istrue;
    srand( time(0));
    mynumber=rand()%15+1;
    
    cout << "Now, guess my number!" << endl;
    cin >> x;
    
    if (x != mynumber) {
        istrue = false;
    }
    if (x == mynumber) {
        istrue = true;
    }
    
    while (istrue == false) {
        if (x > mynumber){
            cout << "Guess lower!" << endl;
        }
        else if (x < mynumber){
            cout << "Guess higher!" << endl;
        }
        cin >> x;
        if (x == mynumber) {
            istrue = true; }
        else if (x != mynumber) {
            istrue = false; }
    }
    if (istrue == true) {
        cout << "You did it!" << endl;
    }
    
    
    return 0;
}
