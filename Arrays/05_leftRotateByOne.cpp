#include <bits/stdc++.h>
using namespace std;

void bestSol(vector<int> arr, int n){
    int ele = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = ele;
}

int main(){

    return 0;
}