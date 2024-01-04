#include <bits/stdc++.h>
using namespace std;


// Brute - Take an element and check the elemnets after that O(n2)
// Best - Single Pass

bool bestSol(vector<int> &arr, int n){
    int flag = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            flag = 0;
        }
    }
    return flag;
}


int main(){

    return 0;
}