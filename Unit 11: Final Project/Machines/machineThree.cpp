//
//  machineThree.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineThree.hpp"
void machineThree::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineThree::printMachine(){
    ostream &out = cout;
    setCost();
    out << "3. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineThree::addMachine(){
    amount+=1;
    
}

double machineThree::moneyPerSecond(){
    return amount * moneyAdder;
}
