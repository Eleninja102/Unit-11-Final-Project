//
//  machineNine.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#ifndef machineNine_hpp
#define machineNine_hpp


#include <iostream>
#include "cost.hpp"

using namespace std;

class machineNine{
public:
    machineNine();

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

#endif /* machineNine_hpp */
