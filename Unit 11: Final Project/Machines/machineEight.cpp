//
//  machineEight.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineEight.hpp"


void machineEight::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineEight::printMachine(){
    ostream &out = cout;
    setCost();
    out << "8. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineEight::addMachine(){
    amount+=1;
    
}

double machineEight::moneyPerSecond(){
    return amount * moneyAdder;
}
