#include <bits.stdc++.h>
using namespace std;

// Brute - pick one element and check other
// Better - using hashmap
// Slightly better - sort the array and take two pointers, one at begin and one at end

bool betterSol(vector<int> arr, int n, int t){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int more = t-arr[i];
        if(mpp.find(more) != mpp.end()) return true;
        else mpp[arr[i]] = i;
    }
    return false;
}

int main(){

    return 0;
}