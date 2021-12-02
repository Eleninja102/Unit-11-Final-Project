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

    void setCost();
    void printMachine();
    void addMachine();
    double moneyPerSecond();
    double cost1;
    string name;
    int amount;


    
    //machineOne(string name, int cost, int amount, int moneyAdder);
protected:
    cost c;
    double intialCost;
    double moneyAdder;
    
    
private:
    
    
    
    
};

#endif /* machineOne_hpp */
