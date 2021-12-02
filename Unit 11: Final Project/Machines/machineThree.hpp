//
//  machineThree.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#ifndef machineThree_hpp
#define machineThree_hpp


#include <iostream>
#include "cost.hpp"

using namespace std;

class machineThree{
public:
    machineThree();

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

#endif /* machineThree_hpp */
