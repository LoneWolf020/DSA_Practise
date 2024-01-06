#include <bits/stdc++.h>
using namespace std;



int bestSol(vector<int> arr, int n){
    int maxi = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            maxi = max(count, maxi);
        } else count  = 0;
    }
    return maxi;
}

int main(){

    return 0;
}