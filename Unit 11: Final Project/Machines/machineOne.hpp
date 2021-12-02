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
    //machineOne();
    void setALLL(string name1, int amounnt1, double intialCost1, double moneyAdder1, int number1)
    {name = name1;
        amount = amounnt1;
        moneyAdder = moneyAdder1;
        number = number1;
        intialCost = intialCost1;
    }

    void setCost();
    void printMachine();
    void addMachine();
    double moneyPerSecond();
    double cost1;
    string name;
    int amount;
    int number;


    
    //machineOne(string name, int cost, int amount, int moneyAdder);
protected:
    cost c;
    double intialCost;
    double moneyAdder;
    
    
private:
    
    
    
    
};

#endif /* machineOne_hpp */
