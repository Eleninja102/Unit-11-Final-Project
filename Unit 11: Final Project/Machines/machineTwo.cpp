//
//  machineTwo.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include "machineTwo.hpp"

machineTwo::machineTwo(){
    name = "Machine 2";
    intialCost = 2;
    amount = 8;
    moneyAdder = 12;
}

void machineTwo::setCost(){
    
    cost1 = c.costEnd(intialCost, amount);
    
    //cout << cost1;
}

ostream &operator <<(ostream &out, const machineTwo &s){
    out << "2. " << s.name;
    out <<  " M/S: +" << s.moneyAdder;
    out << " Cost: " << s.cost1;
    out << " Amount: " << s.amount;
    out << endl;

    return out;
    
}
