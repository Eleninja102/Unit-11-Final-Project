//
//  machineSeven.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineSeven.hpp"


void machineSeven::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineSeven::printMachine(){
    ostream &out = cout;
    setCost();
    out << "7. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineSeven::addMachine(){
    amount+=1;
    
}

double machineSeven::moneyPerSecond(){
    return amount * moneyAdder;
}
