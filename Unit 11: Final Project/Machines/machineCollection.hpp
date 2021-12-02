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
#include "machineOne.hpp"
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


class machineCollection:public Money, public machineOne{
public:
   // machineCollection();
    void setAll();
    void printer();
    bool machineAdd(char x);
    void updateMoney(int timeTest);
    double getMoney();
    void setMoney(double money2);
    double moneyPerSecond2;
    
    machineOne m1;
    machineOne m2;
    machineOne m3;
    machineOne m4;
    machineOne m5;
    machineOne m6;
    machineOne m7;
    machineOne m8;
    machineOne m9;

   
};


#endif /* machineCollection_hpp */
