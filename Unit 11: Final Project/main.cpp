//
//  main.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include <iostream>
#include "machineOne.hpp"
#include "machineTwo.hpp"


using namespace std;

int main() {
    // insert code here...
    cout << "WELCOME TO MONEY IDLE!!";
    machineOne m1;
    m1.setCost();
    cout << m1;
    machineTwo m2;
    m2.setCost();
    cout << m2;
    return 0;
}
