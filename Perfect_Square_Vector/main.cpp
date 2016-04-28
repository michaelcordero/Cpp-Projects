//
//  main.cpp
//  Perfect_Square_Vector
//
//  Created by Michael Cordero on 4/27/16.
//  Copyright © 2016 com.cordero.michael. All rights reserved.
//
#include <iostream>
#include "Geometric_Vector.h"

using namespace std;


int main(int argc, const char * argv[]) {
    try {
        string input1="";
        string input2="";
        cout << "Please enter two integers: \n";
        getline(cin, input1);
        int first = stoi(input1);
        getline(cin, input2);
        int second = stoi(input2);
        Geometric_Vector gv = Geometric_Vector(first, second);
        cout << "Out of " << gv.getSeries() << " integers." << endl;
        cout << "The number of perfect squares in between those two integers and inclusively are: \n";
        cout << "" << gv.getSize()<< endl;
        cout << "The perfect squares are: " << endl;
        for(int i =0; i<gv.getSize();i++){
            cout << gv.getVector()[i] << endl;
        }
    } catch (exception e) {
        cout << e.what() << endl;
        exit(0);
    }
}