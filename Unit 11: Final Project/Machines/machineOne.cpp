//
//  machineOne.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include "machineOne.hpp"


machineOne::machineOne(){
    name = "BOB";
    intialCost = 0;
    amount = 0;
    moneyAdder = 0.5;
}

void machineOne::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

ostream &operator <<(ostream &out, const machineOne &s){
    out << "1. " << s.name;
    out <<  " M/S: +" << s.moneyAdder;
    out << " Cost: " << s.cost1;
    out << " Amount: " << s.amount;
    out << endl;
    
    return out;
    
}
