#include <bits/stdc++.h>
using namespace std;

bool bestSol(vector<int> arr, int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k) return true;
    }
    return false;
}

int main(){

    vector<int> arr = {6,7,8,4,1};
    cout << bestSol(arr,5,7);
    return 0;
}