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
        Geometric_Vector gv= Geometric_Vector(first, second, true);
        cout << "Out of " << gv.series << " integers." << endl;
        cout << gv.msg << endl;
        cout << "" << gv.v.size()<< endl;
        cout << gv.msg1 << endl;
        for(int i=0;i<gv.v.size();i++ ){
            cout << gv.v[i] << endl;
        }
    } catch (exception e) {
        cout << e.what() << endl;
        exit(0);
    }
}