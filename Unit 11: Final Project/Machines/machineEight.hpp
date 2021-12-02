//
//  machineEight.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#ifndef machineEight_hpp
#define machineEight_hpp


#include <iostream>
#include "cost.hpp"

using namespace std;

class machineEight{
public:
    machineEight();

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
#endif /* machineEight_hpp */
