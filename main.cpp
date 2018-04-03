//
//  main.cpp
//  practice
//
//  Created by temp on 3/30/18.
//  Copyright © 2018 temp. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int size = 10;
void display(int num[]);
void randomize (int num[]);
int main() {
    
    int arr[size];
    int *p;
    p = arr;
    
 
    cout << "The array has a total of " << size << " objects\n";
    cout << "The p variable has an address of : " << p << endl;
    
    srand(time(0));
    
    
    randomize(p);
    cout << "The arrays values are : ";
    display(p);
    
    cout << "\nNow we are going to re-do the array and store them in the same address:\n";
    
    randomize(p);
    display(p);
    cout << "\nThe p variable has an address of : " << p << endl;
    system("pause");
    return 0;
}

void display(int num[]) {
        for (int i = 0; i < size; i++){
            cout  << *(num + i) << " ";
        }
}
void randomize(int num[]) {
    for (int i = 0; i < size; i ++){
        *(num + i) = 1 + (rand() % 100);
    }
}





