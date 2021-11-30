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
    Money(int moneyMinus, int moneyPerAdd);
    void printMoney();
    void printMoneySec();
    
    
protected:
    int moneyAmount;
    int moneyPerSecond;

    
private:
    
};

#endif /* Money_hpp */
