//
//  machineFive.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineFive.hpp"

void machineFive::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineFive::printMachine(){
    ostream &out = cout;
    setCost();
    out << "5. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineFive::addMachine(){
    amount+=1;
    
}

double machineFive::moneyPerSecond(){
    return amount * moneyAdder;
}
