#include <iostream>
#include "summation.h"
#include "avrage.h"
using namespace std;

int main(){
    double *array = new double[10];

    cout << "Wellcome to avg & sum!\n";
    
    
    for(int i = 0; i < 10; i++){
        cout << "Please enter a number: ";
        cin >> array[i];
        cout << endl;
    }
    
    cout << "Your avrage is: " << avg(array) << "\nYour summation is: " << sum(array) << endl;

}