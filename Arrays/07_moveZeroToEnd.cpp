#include <bits/stdc++.h>
using namespace std;

// Brute - put all non-zero elements in an array which was initialized with all 0 of size arr

vector<int> BestSol(vector<int> arr, int n){
    int point = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[point] = arr[i];
            point++;
        }
    }
    for(int i=point; i<n; i++){
        arr[i] = 0;
    }
    return arr;
}

int main(){

    return 0;
}