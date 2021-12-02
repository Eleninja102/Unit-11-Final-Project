//
//  options.hpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#ifndef options_hpp
#define options_hpp

#include <iostream>
#include <fstream>
#include "machineCollection.hpp"
#include "Money.hpp"


using namespace std;

class options: public machineCollection{
public:
    
    int runOptions(machineCollection &mic);
    void changeName(machineCollection &mic);
    bool quitSequence(machineCollection &mic);
    int createSave(machineCollection &mic, int quit = 1);
    bool importSave(machineCollection &mic);

    
   

};

#endif /* options_hpp */
