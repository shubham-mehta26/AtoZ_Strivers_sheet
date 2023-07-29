#include<bits/stdc++.h>
using namespace std;
// int cmp(pair<int,int> a,pair<int,int> b){
//     return a.first<b.first;
// }
bool cmp(pair<int,int> a,pair<int,int> b){ // ascending based of first
    return a.first<b.first;
}
// bool cmp(pair<int,int> a,pair<int,int> b){ // ascending based of second
//     return a.second<b.second;
// }

bool cmp1(pair<int,int> a,pair<int,int> b){ // descending of seconf , if equal then descedning of first
    if(a.second==b.second) return a.first>b.first;
    else return a.second>b.second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    // precompute
    // int hash[13] ={0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }
    unordered_map<int,int> mpp;
    for(auto x:arr){
        mpp[x]++;
    }

    //traversal
    unordered_map<int,int>::iterator x;
    for(x=mpp.begin();x!=mpp.end();x++){
        cout<<x->first<<"->"<<x->second<<endl;
    }

    //sorting

    // first maps can be converted to pairs
    vector< pair<int,int> > v(mpp.begin(),mpp.end());
    //sorting it using cmp(comparator)
    sort(v.begin(),v.end(),cmp);


    cout<<"traversal of the vector"<<endl;

    for(auto x:v){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    // int q;
    //sorting it using cmp1(comparator)
    sort(v.begin(),v.end(),cmp1);


    //traversal of the vector
    cout<<"traversal of the vector"<<endl;
    for(auto x:v){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     // fetch

    // }
return 0;
}