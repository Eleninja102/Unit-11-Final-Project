//
//  machineFour.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineFour.hpp"

void machineFour::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineFour::printMachine(){
    ostream &out = cout;
    setCost();
    out << "4. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineFour::addMachine(){
    amount+=1;
    
}

double machineFour::moneyPerSecond(){
    return amount * moneyAdder;
}
