//
//  machineSeven.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#ifndef machineSeven_hpp
#define machineSeven_hpp


#include <iostream>
#include "cost.hpp"

using namespace std;

class machineSeven{
public:
    machineSeven();

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

#endif /* machineSeven_hpp */
