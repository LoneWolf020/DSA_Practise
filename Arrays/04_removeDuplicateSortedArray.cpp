#include <bits/stdc++.h>
using namespace std;

// Brute - Put the elements in a set DS 
// For inserting in set it takes O(NlogN) time
// Optimal - 2 pointer approach

int bestSol(vector<int> arr, int n){
    int point = 0;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[point]) continue;
        else {
            point++;
            arr[point] = arr[i];
        }
    }
    return point+1;
}

int main(){

    return 0;
}