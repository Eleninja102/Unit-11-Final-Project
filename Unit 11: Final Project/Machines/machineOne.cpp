//
//  machineOne.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include "machineOne.hpp"


void machineOne::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineOne::printMachine(){
    ostream &out = cout;
    setCost();
    out << number << ". " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineOne::addMachine(){
    amount+=1;
    
}

double machineOne::moneyPerSecond(){
    return amount * moneyAdder;
}
