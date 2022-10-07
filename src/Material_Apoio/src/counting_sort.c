/*Implementation of Counting sort in C. This implementation works only 
    with integers.*/
#include <stdio.h>
#include <stdlib.h>
void counting_sort(int [], int);
int find_max(int [], int);

void counting_sort(int a[], int length){
    /*for a[] = {0, 3, 2, 3, 3, 0, 5, 2, 3} range will be 0, ... , 5. 
        So we will need 6 spots in our new sub-array which is max + 1*/
    int i, max = find_max(a, length);
    int c[max+1];
    
    for(i = 0; i < max + 1; c[i++] = 0); // first c[i] = 0 will be done, then i++;
    
    for(i = 0; i < length; i++) c[a[i]]++;
    
    for(i = 1; i < max + 1; i++) c[i] = c[i - 1] + c[i];
    
    
    int b[length]; //this is gonna be our new sorted array
    int j = length - 2;
    for(i = 0; i < length; i++) {
        b[--c[a[j]]] = a[j];
        j--;
    }    
    
    /*Right now B represents sorted array of A. But i want to change A (original) 
        so i will overwrite B over A array.*/
    for(i = 0; i < length; i++)    a[i] = b[i];

}
int find_max(int a[], int length){
    int i, max = a[0];
    for(i = 1; i < length; i++) {
        if(max < a[i]) max = a[i];
    }
    return max;
}
