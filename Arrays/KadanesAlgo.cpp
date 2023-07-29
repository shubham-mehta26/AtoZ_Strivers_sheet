#include<bits/stdc++.h>
using namespace std;

/*
 Intutution -> The positives will always increase the sum the subarray. So till the sum is postitve its a valid case. If the sum goes less than 0 , any further addition to it will result in decreasing the max value.So whenever the sum goes less than 0 , we make the sum 0
*/
pair<int,pair<int,int>> maximumSubarraySum(vector<int> arr){
    int sum = 0;
    int maxSum = INT_MIN;
    int startIndex=0,endIndex=0;
    for(int i=0 ; i<arr.size() ; i++){
        sum+=arr[i];
        maxSum = max(maxSum , sum);
        if(sum==maxSum) endIndex = i;
        if(sum<0){
            startIndex=i+1;
            endIndex = i+1;
            sum=0;
        }
    }

    /* if only the sum is asked

        for(int i=0 ; i<n ; i++){
            sum+=arr[i];
            maxSum=max(sum,maxSum);
            if(sum<0) sum=0;
        }

    */
    return {sum,{startIndex,endIndex}};
}
int main(){
vector<int> nums = {5,4,-1,7,8};
pair<int,pair<int,int>> ans = maximumSubarraySum(nums);
cout<<"sum->"<<ans.first<<endl;
cout<<"StartIndex->"<<ans.second.first<<endl;
cout<<"EndIndex->"<<ans.second.second<<endl;
return 0;
}