//
//  PizzaRepository.cpp
//  main assignment
//
//  Created by Gunnlaugur Birgisson on 07/12/2017.
//  Copyright (c) 2017 Bloc. All rights reserved.
//

#include "PizzaRepository.h"

void PizzaRepository::add_pizza(const Pizza& pizza) {
    
    //Pizza verbosePizza;
    //verbosePizza.checkVerbose(true);
    ofstream fout;
    fout.open("pizzas.txt", ios::app);
    if (fout.is_open()) {
        fout << pizza << endl;
        fout.close();
    }
    else {
        cout << "File could not be open!" << endl;
    }
}

void PizzaRepository::add_pizza_menu(const Pizza& pizza) {
    
    ofstream fout;

   /*
    fout.open("pizzas.dat", ios::binary|ios::app);
    fout.write((char*)(&pizza), sizeof(Pizza));
    cout << endl;
    fout.close();
    */


    fout.open("pizzas.txt", ios::app);
    if (fout.is_open()) {
        //verbosePizza.checkVerbose(false);
        fout << pizza << endl;
        fout.close();
    }
    else {
        cout << "File could not be open!" << endl;
    }
}

string PizzaRepository::read_pizza() {
    
    //Pizza verbosePizza2;
    string str;
    ifstream fin;
    
    fin.open("pizzas.txt");
    if (fin.is_open()) {
        while (!fin.eof()) {
            //verbosePizza2.checkVerbose(false);
            getline(fin, str);
            //verbosePizza2.checkVerbose(true);
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
    if(fin.is_open()) {
        while(!fin.eof()){
            for(int i = 0; i < sizeof(pizzaList); i++){
                fin >> pizzaList[i];
                cout << pizzaList[i] << endl;
            }
        }
    }
    
    
    
    
    
    fin.open("pizzas.dat", ios::binary);
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
}
*/

}
    
    
    
