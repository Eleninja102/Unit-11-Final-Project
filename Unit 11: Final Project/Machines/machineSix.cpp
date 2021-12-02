//
//  machineSix.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineSix.hpp"


void machineSix::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineSix::printMachine(){
    ostream &out = cout;
    setCost();
    out << "6. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineSix::addMachine(){
    amount+=1;
    
}

double machineSix::moneyPerSecond(){
    return amount * moneyAdder;
}
