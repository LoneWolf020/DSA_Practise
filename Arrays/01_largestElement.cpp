#include <bits/stdc++.h>
using namespace std;

// n Square 
int bruteSol(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        int ele = arr[i];
        int flag = 1;
        for(int j=0; j<n; j++){
            if(arr[j] > ele){
                flag = 0;
                break;
            }
        }
        if (flag) return ele;
    }
}

// nLogn
int betterSol(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

// n
int bestSol(vector<int> &arr, int n){
    int ans = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > ans) ans = arr[i];
    }
    return ans;
}


int main(){

    vector<int> arr = {1,2,3,4,5};
    cout << bruteSol(arr, 5);
    cout << betterSol(arr, 5);
    cout << bestSol(arr, 5);

    return 0;
}