//
//  machineOne.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#ifndef machineOne_hpp
#define machineOne_hpp

#include <iostream>
#include "cost.hpp"

using namespace std;

class machineOne{
public:
    machineOne();
    void fileNameSetter();
    void setCost();
    friend ostream &operator <<(ostream &out, const machineOne &s);


    
    //machineOne(string name, int cost, int amount, int moneyAdder);
protected:
    cost c;
    string name;
    double intialCost;
    double cost1;
    int amount;
    double moneyAdder;
    
    
private:
    
    
    
    
};

#endif /* machineOne_hpp */
