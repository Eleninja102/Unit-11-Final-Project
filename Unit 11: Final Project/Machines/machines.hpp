//
//  machines.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#ifndef machines_hpp
#define machines_hpp

#include <iostream>
#include "cost.hpp"

using namespace std;

class machines{
public:
    //machines();
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


    
    //machines(string name, int cost, int amount, int moneyAdder);
protected:
    cost c;
    double intialCost;
    double moneyAdder;
    
    
private:
    
    
    
    
};

#endif /* machines_hpp */
