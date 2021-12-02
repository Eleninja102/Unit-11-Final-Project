//
//  machineCollection.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "machineCollection.hpp"

machineOne::machineOne(){
    name = "Machine_1";
    intialCost = 0;
    amount = 0;
    moneyAdder = 0.5;
}
machineTwo::machineTwo(){
    name = "Machine_2";
    intialCost = 10;
    amount = 0;
    moneyAdder = 2;
}
machineThree::machineThree(){
    name = "Machine_3";
    intialCost = 25;
    amount = 0;
    moneyAdder = 5;
}
machineFour::machineFour(){
    name = "Machine_4";
    intialCost = 75;
    amount = 0;
    moneyAdder = 10;
}
machineFive::machineFive(){
    name = "Machine_5";
    intialCost = 102;
    amount = 0;
    moneyAdder = 20;
}
machineSix::machineSix(){
    name = "Machine_6";
    intialCost = 280;
    amount = 0;
    moneyAdder = 69;
}
machineSeven::machineSeven(){
    name = "Machine_7";
    intialCost = 670;
    amount = 0;
    moneyAdder = 108;
}
machineEight::machineEight(){
    name = "Machine_8";
    intialCost = 1420;
    amount = 0;
    moneyAdder = 220;
}
machineNine::machineNine(){
    name = "Machine_9";
    intialCost = 4269;
    amount = 0;
    moneyAdder = 420;
}


void machineCollection::printer(){
    moneyPerSecond = m1.moneyPerSecond() + m2.moneyPerSecond() + m3.moneyPerSecond() + m4.moneyPerSecond() + m5.moneyPerSecond() + m6.moneyPerSecond() + m7.moneyPerSecond() + m8.moneyPerSecond() + m9.moneyPerSecond();
    cout << "M/S: " << moneyPerSecond << endl;
    cout << "M: " << moneyAmount << endl;
    
    m1.printMachine();
    m2.printMachine();
    m3.printMachine();
    m4.printMachine();
    m5.printMachine();
    m6.printMachine();
    m7.printMachine();
    m8.printMachine();
    m9.printMachine();
    
}


bool machineCollection::machineAdd(char x){
    switch (x) {
        case '1':{
            if(m1.cost1 <= moneyAmount){
                m1.addMachine();
                moneyAmount -= m1.cost1;
                return true;
            }
            break;
        }
        case '2':{
            if(m2.cost1 <= moneyAmount){
                m2.addMachine();
                moneyAmount -= m2.cost1;
                return true;
            }
            break;
        }
        case '3':{
            if(m3.cost1 <= moneyAmount){
                m3.addMachine();
                moneyAmount -= m3.cost1;
                return true;
            }
            break;
        }
        case '4':{
            if(m4.cost1 <= moneyAmount){
                m4.addMachine();
                moneyAmount -= m4.cost1;
                return true;
            }
            break;
        }
        case '5':{
            if(m5.cost1 <= moneyAmount){
                m5.addMachine();
                moneyAmount -= m5.cost1;
                return true;
            }
            break;
        }
        case '6':{
            if(m6.cost1 <= moneyAmount){
                m6.addMachine();
                moneyAmount -= m6.cost1;
                return true;
            }
            break;
        }
        case '7':{
            if(m7.cost1 <= moneyAmount){
                m7.addMachine();
                moneyAmount -= m7.cost1;
                return true;
            }
            break;
        }
        case '8':{
            if(m8.cost1 <= moneyAmount){
                m8.addMachine();
                moneyAmount -= m8.cost1;
                return true;
            }
            break;
        }
        case '9':{
            if(m9.cost1 <= moneyAmount){
                m9.addMachine();
                moneyAmount -= m9.cost1;
                return true;
            }
            break;
        }
        default:
            return false;
            break;
    }
    
    return false;
}

void machineCollection::updateMoney(int timeTest){
    moneyAmount += (moneyPerSecond*timeTest);
}



double machineCollection::getMoney(){
    return moneyAmount;
}

void machineCollection::setMoney(double money2){
    moneyAmount = money2;
}
