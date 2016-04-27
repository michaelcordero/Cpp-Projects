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
    string input1="";
    string input2="";
    
    cout << "Please enter two non-negative integers: \n";
    getline(cin, input1);
    int first = stoi(input1);
    getline(cin, input2);
    int second = stoi(input2);
    
    std::vector<int> v = Geometric_Vector::create_perfect_square_vector(first, second);
    
    cout << "The number of perfect squares between those two integers are: \n";
    
    cout << "" << v.size() << endl;
    
    cout << "The perfect squares are: " << endl;
    
    for(int i =0; i<v.size();i++){
        cout << " " << v[i] << endl;
    }
}