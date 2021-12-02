//
//  machineTwo.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#ifndef machineTwo_hpp
#define machineTwo_hpp


#include <iostream>
#include "cost.hpp"

using namespace std;

class machineTwo{
public:
    machineTwo();
    void setCost();
    void printMachine();
    void addMachine();
    double moneyPerSecond();
    double cost1;
    string name;
    int amount;
    
protected:
    cost c;
    double intialCost;
    double moneyAdder;
    
    
private:
    
    

    
};


#endif /* machineTwo_hpp */
