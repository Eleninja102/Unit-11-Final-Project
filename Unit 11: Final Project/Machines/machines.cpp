//
//  machines.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include "machines.hpp"


void machines::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machines::printMachine(){
    ostream &out = cout;
    setCost();
    out << number << ". " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machines::addMachine(){
    amount+=1;
    
}

double machines::moneyPerSecond(){
    return amount * moneyAdder;
}
