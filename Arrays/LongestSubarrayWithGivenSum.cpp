#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> nums, long long k) {
    // using hashMap;

    // unordered_map<long long, int> preSum;
    // int n= a.size();
    // long long sum = 0;
    // int longest = 0;
    // for(int i=0 ; i<n ; i++){
    //     sum+=a[i];
    //     if(sum==k) longest = i+1;
    //     long long rem = sum - k;
    //     if(preSum.find(rem)!=preSum.end()){
    //         int len = i - preSum[rem];
    //         longest = max(longest , len);
    //     }
    //     if(preSum.find(sum)==preSum.end()) preSum[sum]=i;
    // }
    // return longest;


    //2 pointer approach -> only fot the positives
    int i=0,j=0;
    long long sum=0;
    int len=0;
    while(j<nums.size()){
        sum+=nums[j];
        while(sum>k && i<=j){
            sum-=nums[i];
            i++;
        }
        if(sum==k){
            len = max(len,j-i+1);
        }
        j++;
    }
    return len;
    
}
int main(){
cout<<longestSubarrayWithSumK({1,2,3,1,1,1,1},3);
return 0;
}