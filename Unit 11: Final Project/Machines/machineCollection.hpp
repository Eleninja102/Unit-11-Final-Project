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
#include "machineTwo.hpp"
#include "machineThree.hpp"
#include "machineFour.hpp"
#include "machineFive.hpp"
#include "machineSix.hpp"
#include "machineSeven.hpp"
#include "machineEight.hpp"
#include "machineNine.hpp"
#include "Money.hpp"


class machineCollection:public Money{
public:
    void printer();
    bool machineAdd(char x);
    void updateMoney(int timeTest);
    double getMoney();
    void setMoney(double money2);
    
    
    machineOne m1;
    machineTwo m2;
    machineThree m3;
    machineFour m4;
    machineFive m5;
    machineSix m6;
    machineSeven m7;
    machineEight m8;
    machineNine m9;

   
};


#endif /* machineCollection_hpp */
