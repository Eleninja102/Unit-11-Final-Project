//
//  main.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include <iostream>
#include "machineCollection.hpp"
#include "options.hpp"
#include <time.h>
#include <chrono>
#include "achievements.hpp"
#include "pig.hpp"




struct timer
{
    typedef std::chrono::steady_clock clock ;
    typedef std::chrono::seconds seconds ;

    void reset() { start = clock::now() ; }

    unsigned long long seconds_elapsed() const
    { return std::chrono::duration_cast<seconds>( clock::now() - start ).count() ; }

    private: clock::time_point start = clock::now() ;
};
void Clear(){
    system("clear");
}

using namespace std;

int main() {
    // insert code here...
    cout << "WELCOME TO MONEY IDLE!!\n\nThe point of this game is to make the most money per second possible\nto do that buy the machine you want by pressing the number next to it.\n Refreshs every input\n To access options press O\n For achievements press A\n Tip: to refresh without buying press 0\n";
    timer t;
    machineCollection mc;
    mc.setAll();
    options op;
    achievements ach;
    pig pg;
    char xy;
    bool secret = false;
    int end = 1;
    while(end != 4){

        int timeTest = (int)t.seconds_elapsed();
        if(timeTest >= 2 ) { mc.updateMoney(timeTest); t.reset() ; }
    

        //cout << mc;
        mc.printer();
        cout << "Buy Something: ";
        cin >> xy;
        if(xy == 'O' || xy == 'o'){
            end = op.runOptions(mc);
            //cout << end;
        }else if( xy == 'A' || xy == 'a'){
            ach.showAchiements(mc, secret);
        }else if( xy == 'P' || xy == 'p'){
            secret = pg.pigPrint();
        }else if(xy != '0'){
            bool ifbought = mc.machineAdd(xy);
            string bought =  (ifbought) ? "SUCESS" : "Invalid Balance";
            cout << bought;
            cout << endl;
        }
        //printf; '\33c\e[3J';
        //Clear();
        cout << endl;
    }
  
    return 0;
}

