#include <iostream> 
#include <cmath>

using namespace std;

float cos(float x, int y) {
    int factorials[y];
    int k =0;
    int n = 2;

    while (true) {
         for (int i = 0; i<= n; i++){
        factorials[k] = factorials[k] * i;
        k++;
        n++;
        n++;
         }

         if (k == y){
             break;
         }
    }

    int powers[y];
    int m = 0;
    for (int i = 2; i <= y ; i+2) {
        powers[m] = pow(x,i);
        m++;
    }

    int cosine  = 1;
    int taylors = cosine - (factorials[0]/ powers[0]);

    for (int i = 1; i< y; i++) {
        taylors = taylors + (factorials[i]/powers[i]);
        
    }

    return taylors;

}