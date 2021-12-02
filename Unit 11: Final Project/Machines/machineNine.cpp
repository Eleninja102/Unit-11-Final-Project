//
//  machineNine.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineNine.hpp"



void machineNine::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

void machineNine::printMachine(){
    ostream &out = cout;
    setCost();
    out << "9. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;
    
}

void machineNine::addMachine(){
    amount+=1;
    
}

double machineNine::moneyPerSecond(){
    return amount * moneyAdder;
}
