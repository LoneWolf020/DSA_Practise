#include <bits/stdc++.h>
using namespace std;

// Brute - check one by one 
// Better - Hashing || using map DS or Stack
// Best - sum of original value - sum of array || 2-element window check || using XOR concept  

int bestSol(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        if((i+1)>n || arr[i]!=arr[i+1]) return arr[i];
    }
    return -1;
}

int bestSol2(vector<int> arr, int n){
    int XOR1 = 0;
    for(int i=0; i<n; i++){
        XOR1 = xor1 ^ arr[i];
    }
    return XOR1;
}

int main(){

    return 0;
}