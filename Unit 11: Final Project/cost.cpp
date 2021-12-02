//
//  cost.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/29/21.
//

#include "cost.hpp"


double cost::costEnd(double intial, int amount){
    //cout << intial;
    //cout << amount;
    
    return (intial + (amount * (amount *21/10)));

}
