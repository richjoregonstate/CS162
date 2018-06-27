#include "summation.h"

double sum(double *array){
    double sum = 0;
    
    
    for(int i = 0; i < 10; i++){
        sum += array[i];
    }
    return sum;
}