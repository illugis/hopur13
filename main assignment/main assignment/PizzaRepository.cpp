//
//  PizzaRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaRepository.h"

void PizzaRepository::add_pizza(const Pizza& pizza) {
    
    ofstream fout;
    fout.open("pizzas.txt");
    if (fout.is_open()) {
        fout << pizza << endl;
        fout.close();
    }
    else {
        cout << "File could not be open!" << endl;
    }
}

string PizzaRepository::read_pizza() {
    
    string str;
    ifstream fin;
    
    fin.open("pizzas.txt");
    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Unable to read from file!" << endl;
    }
    
    return str;
    
    /*
    vector<Pizza> pizzaList;
    Pizza temp;
    ifstream fin;
    fin.open("pizzas.txt");
    if (fin.is_open()) {
        fin.seekg(0, fin.end);
        int recordCount = fin.tellg() / sizeof(Pizza);
        fin.seekg(0, fin.beg);
        
        for (unsigned int i = 0; i < recordCount; i++) {
            fin.read((char*)(&temp), sizeof(Pizza));
            pizzaList.push_back(temp);
            cout << pizzaList[i] << endl;
        }
        fin.close();
    }
    else {
        cout << "Could not open fiel!" << endl;
    }
    
    return pizzaList;
    */
}