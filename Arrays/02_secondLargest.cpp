#include <bits/stdc++.h>
using namespace std;


// Brute - Sort and traverse back for second largest
// Better -  Make 2 passses, first for largest and then for second largest
// Best - Make a single pass and check

int getLargest(vector<int> &arr, int n){
    int large = arr[0];
    int slarge = -1;
    for(int i=1; i<n; i++){
        if(arr[i] > large){
            slarge = large;
            large = arr[i];
        } else if(arr[i] > slarge) slarge = arr[i];
    }
    return slarge;
}

int getSmallest(vector<int> &arr, int n){
    int small = arr[0];
    int ssmall = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < small){
            ssmall = small;
            small = arr[i];
        } else if(arr[i] < ssmall) ssmall = arr[i];
    }
    return ssmall;
}

vector<int> bestSol(vector<int> &arr, int n){
    int slargest = getLargest(arr, n);
    int ssmallest = getSmallest(arr, n);
    return {slargest, ssmallest};
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> ans = bestSol(arr, 7);
    cout << ans[0];
    cout << ans[1];
    return 0;
}