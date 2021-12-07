//
//  achievements.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 12/6/21.
//

#include "achievements.hpp"

void achievements::showAchiements(machineCollection &mic, bool secret){
    int moneyTotal = mic.getMoney();
    cout << "Welcomn to Achievements\n Achievemnts:\n";
    cout << "  10000000 M/S" << ((mic.moneyPerSecond2 >= 10000000) ? " Unlocked." : " Locked.") << " M/S: "<< mic.moneyPerSecond2 << endl;
    cout << "  10000000 M" << ((moneyTotal >= 10000000) ? " Unlocked." : " Locked.") << " Money: "<< moneyTotal << endl;
    cout <<"  Have 1000 " << mic.m1.name << ((mic.m1.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m1.amount << endl;
    cout <<"  Have 1000 " << mic.m2.name << ((mic.m2.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m2.amount << endl;
    cout <<"  Have 1000 " << mic.m3.name << ((mic.m3.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m3.amount << endl;
    cout <<"  Have 1000 " << mic.m4.name << ((mic.m4.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m4.amount << endl;
    cout <<"  Have 1000 " << mic.m5.name << ((mic.m5.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m5.amount << endl;
    cout <<"  Have 1000 " << mic.m6.name << ((mic.m6.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m6.amount << endl;
    cout <<"  Have 1000 " << mic.m7.name << ((mic.m7.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m7.amount << endl;
    cout <<"  Have 1000 " << mic.m8.name << ((mic.m8.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m8.amount << endl;
    cout <<"  Have 1000 " << mic.m9.name << ((mic.m9.amount >= 1000) ? " Unlocked." : " Locked.") << " Amount: "<< mic.m9.amount << endl;
    cout << ((secret == true) ? "  GET PIGGED Unlocked." : "  Secret Locked")<<endl;
    cout << endl;

}
