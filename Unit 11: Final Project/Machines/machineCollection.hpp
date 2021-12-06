//
//  machineCollection.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#ifndef machineCollection_hpp
#define machineCollection_hpp

#include <stdio.h>
#include "cost.hpp"
#include "machines.hpp"
/*
#include "machineTwo.hpp"
#include "machineThree.hpp"
#include "machineFour.hpp"
#include "machineFive.hpp"
#include "machineSix.hpp"
#include "machineSeven.hpp"
#include "machineEight.hpp"
#include "machineNine.hpp"*/
#include "Money.hpp"


class machineCollection:public Money, public machines{
public:
   // machineCollection();
    void setAll();
    void printer();
    bool machineAdd(char x);
    void updateMoney(int timeTest);
    double getMoney();
    void setMoney(double money2);
    double moneyPerSecond2;
    
    machines m1;
    machines m2;
    machines m3;
    machines m4;
    machines m5;
    machines m6;
    machines m7;
    machines m8;
    machines m9;

   
};


#endif /* machineCollection_hpp */
