//
//  Money.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#ifndef Money_hpp
#define Money_hpp

#include <stdio.h>
#include <iostream>

using namespace std; 


class Money{
public:
    void printMoney();
    double getMoney();
    void printMoneySec();
    
    
protected:
    double moneyAmount;
    double moneyPerSecond;

    
private:
    
};

#endif /* Money_hpp */
