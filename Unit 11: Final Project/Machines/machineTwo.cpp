//
//  machineTwo.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include "machineTwo.hpp"



void machineTwo::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}


void machineTwo::printMachine(){
    ostream &out = cout;
    setCost();
    out << "2. " << name;
    out <<  " M/S: +" << moneyAdder;
    out << " Cost: " << cost1;
    out << " Amount: " << amount;
    out << endl;

    
}

double machineTwo::moneyPerSecond(){
    return amount * moneyAdder;
}

void machineTwo::addMachine(){
    amount+=1;
}

