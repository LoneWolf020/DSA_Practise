#include <bits/stdc++.h>
using namespace std;

// Better - Take elements from k to n-1 and push,   then tahe 0 to k-1 and push
//Best - Reverse 0 to k-1, then reverse k to n-1 and then finally reverse the whole array

void bestSol(vector<int> arr, int k){
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}


int main(){

    return 0;
}