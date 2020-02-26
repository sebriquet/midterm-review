#include <iostream>

using namespace std;

int* mergeArray(int* a1, int* a2, int size1, int size2) {
    int newsize = size1 + size2;
    int *merged_array = new int[newsize];
    int j=0;
    for (int i = 0; i<= size1 - 1; i++){
        merged_array[j++] = a1[i];
    }
    int k = size1 -1;
    for (int i = 0; i<= size2 -1; i++) {
        merged_array[k++] = a2[i];
    }


    return sort(merged_array, merged_array +newsize);

}