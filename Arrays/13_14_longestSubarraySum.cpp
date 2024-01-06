#include <bits/stdc++.h>
using namespace std;


// Brute - calculate sum and count || generate all subarray and find sum O(n3)
int bruteSol(vector<int> arr, int n, int k){
    int sum = 0;
    int maxi = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        count = 0;
        sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            count++;
            if(sum == k){
                maxi = max(maxi, count);
            } else if (sum > k) break;
        }
    }
    return maxi;
}

// Better - using Hashmap and pre computations and this is best for arrays having both pos and neg
// correct only for positives (not correct if array has 0)
// O(NlogN) if using oredered map and if there are no collisions in unordered map then O(n) else O(n2)
int betterSol(vector<int> arr, int n, int k){
    map<long long, int> preMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if(preMap.find(rem) != preMap.end()){
            int len = i - preMap[rem];
            maxLen = max(maxLen, len);
        }
        preMap[sum] = i;
        // to make it work for 0 
        // put an if condition which says 
        // if(preMap.find(sum) == preMap.end()) then add preMap[sum] = i;
    }
    return maxLen;    
}


// Best - for Array having only 0 and pos
// 2 pointer approach and greedy

int bestSol(vector<int> arr, int n, int k){
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return maxLen;
}

int main(){

    return 0;
}