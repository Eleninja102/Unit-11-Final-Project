//
//  options.cpp
//  Unit 11: Final Project
//
//  Created by Coleton Watt on 11/30/21.
//

#include "options.hpp"


int options::runOptions(machineCollection &mic){
    int choice;
    //mic.m1.name = "jaun";
    cout << "\n\nWelcome to Options\n 1. Change Name Of Machine\n 2. Export Save\n 3. Import Save\n 4. Quit\n";
    cin >> choice;
    if(choice == 4) quitSequence(mic);
    if(choice == 3) importSave(mic);
    if(choice == 2) choice = createSave(mic);
    if(choice == 1) changeName(mic);
    
    return choice;
}

void options::changeName(machineCollection &mic){
    int option;
    string bob;
    cout << "Name to change\n 1. " << mic.m1.name << "\n 2. " << mic.m2.name << "\n 3. " << mic.m3.name << "\n 4. " << mic.m4.name << "\n 5. " << mic.m5.name << "\n 6. " << mic.m6.name << "\n 7. " << mic.m7.name << "\n 8. " << mic.m8.name << "\n 9. " << mic.m9.name << endl;
    cin >> option;
    cin.ignore();
    switch (option) {
        case 1:
            cout << "New Name: ";
            getline(cin, mic.m1.name);
            
            //cin >> mic.m1.name;
            break;
        case 2:
            cout << "New Name: ";
            getline(cin, mic.m2.name);
            break;
        case 3:
            cout << "New Name: ";
            getline(cin, mic.m3.name);
            break;
        case 4:
            cout << "New Name: ";
            getline(cin, mic.m5.name);
            break;
        case 5:
            cout << "New Name: ";
            getline(cin, mic.m5.name);
            break;
        case 6:
            cout << "New Name: ";
            getline(cin, mic.m6.name);
            break;
        case 7:
            cout << "New Name: ";
            getline(cin, mic.m7.name);
            break;
        case 8:
            cout << "New Name: ";
            getline(cin, mic.m8.name);
            break;
        case 9:
            cout << "New Name: ";
            getline(cin, mic.m9.name);
            break;
            
        default:
            cout << "error: no entry or machine number";
            break;
            
    }
    
}

bool options::quitSequence(machineCollection &mic){
    char save;
    cout << "Save before exciting\n Y - yes\n N - no\n";
    cin >> save;
    switch (save) {
        case 'Y':
            createSave(mic, 0);
            break;
            
        default:
            break;
    }
    return true;
}


int options::createSave(machineCollection &mic, int quit){
    //cout << mic.getMoney();
    double x = mic.getMoney();
    string filePath;
    cout << "Input File Path: ";
    cin.ignore();
    getline(cin, filePath);
    string fileName;
    cout << "Input Save File Name (no spaces): ";
    cin >> fileName;
    fileName+=".txt";
    filePath += fileName;
    cout << filePath;
    ofstream MyFile;
    MyFile.open (filePath);
    MyFile << x << endl;
    
    MyFile << mic.m1.name << endl;
    MyFile << mic.m1.amount << endl;
    
    MyFile << mic.m2.name << endl;
    MyFile << mic.m2.amount << endl;
    
    MyFile << mic.m3.name << endl;
    MyFile << mic.m3.amount << endl;
    
    MyFile << mic.m4.name << endl;
    MyFile << mic.m4.amount << endl;
    
    MyFile << mic.m5.name << endl;
    MyFile << mic.m5.amount << endl;
    
    MyFile << mic.m6.name << endl;
    MyFile << mic.m6.amount << endl;
    
    MyFile << mic.m7.name << endl;
    MyFile << mic.m7.amount << endl;
    
    MyFile << mic.m8.name << endl;
    MyFile << mic.m8.amount << endl;
    
    MyFile << mic.m9.name << endl;
    MyFile << mic.m9.amount << endl;


    MyFile.close();
    if(quit == 0){return 4;}
    

    
    return 3;
}

bool options::importSave(machineCollection &mic){
    string filePath;
    cout << "Input Save File Path + Name (no spaces)\n";
    cin.ignore();
    getline(cin, filePath);
    string txt;
    
    int n = 0;


    ifstream MyFile;
    MyFile.open (filePath);
    while(getline(MyFile, txt)){
        //cout << txt;
        switch (n) {
            case 0:
                
                mic.setMoney(stoi(txt));
                break;
            
            case 1:

                mic.m1.name = txt;
                break;
            case 2:

                mic.m1.amount = stoi(txt);
                break;
            
            case 3:
                mic.m2.name = txt;
                break;
            case 4:
                mic.m2.amount = stoi(txt);
                break;
            
            case 5:
                mic.m3.name = txt;
                break;
            case 6:
                mic.m3.amount = stoi(txt);
                break;
           
            case 7:
                mic.m4.name = txt;
                break;
            case 8:
                mic.m4.amount = stoi(txt);
                break;
            
            case 9:
                mic.m5.name = txt;
                break;
            case 10:
                mic.m5.amount = stoi(txt);
                break;
            
            case 11:
                mic.m6.name = txt;
                break;
            case 12:
                mic.m6.amount = stoi(txt);
                break;
            
            case 13:
                mic.m7.name = txt;
                break;
            case 14:
                mic.m7.amount = stoi(txt);
                break;
            
            case 15:
                mic.m8.name = txt;
                break;
            case 16:
                mic.m8.amount = stoi(txt);
                break;
                
            case 17:
                mic.m9.name = txt;
                break;
            case 18:
                mic.m9.amount = stoi(txt);
                break;
                
            default:
                break;
        }
        n++;
    }/*
    MyFile << moneyAmount << endl;
    MyFile << mic.m1.name << endl;
    MyFile << mic.m1.amount << endl;
    MyFile << mic.m2.name << endl;
    MyFile << mic.m2.amount << endl;
*/

    MyFile.close();
    

    
    
    
    return true;
}
