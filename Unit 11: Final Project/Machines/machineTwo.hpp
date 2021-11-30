//
//  machineTwo.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#ifndef machineTwo_hpp
#define machineTwo_hpp


#include <iostream>
#include "machineCollection.hpp"

#include "cost.hpp"

using namespace std;

class machineTwo: public machineCollection{
public:
    machineTwo();
    void fileNameSetter();
    void setCost();
    friend ostream &operator <<(ostream &out, const machineTwo &s);
    


    
    //machineOne(string name, int cost, int amount, int moneyAdder);
protected:
    
    
private:
    
    

    
};


#endif /* machineTwo_hpp */
