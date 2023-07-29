#include<bits/stdc++.h>
using namespace std;

int majorityEle(vector<int> arr){
    int votes=0,n=arr.size(),ele=arr[0];
    //This will return the majority element
    for(int i=0 ; i<n ; i++){
        if(votes==0){
            votes=1;
            ele=arr[i];
        }
        if(arr[i]==ele){
            votes++;
        }
        if(arr[i]!=ele){
            votes--;
        }
    }
    //Loop to calculate the count of teh majority element
    int count=0;
    for(int x:arr){
        if(x==ele) count++;
    }
    
    return (count>n/2)?count:-1;
    
}

int main(){
cout<<majorityEle({2,2,1,1,1,2,2});
return 0;
}