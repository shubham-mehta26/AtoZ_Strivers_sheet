#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , pair<int,int>> p1 = {1,{2,3}};
    cout<< p1.first <<" "<<p1.second.second<<" "<<p1.second.first<<endl;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[1].second;
}
void explainVectors(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v3(5,100);
    vector<int> v4(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it1 = v.end(); // points to the memory location right after the last element

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for(vector<int>::iterator it = v.begin() ; it!=v.end() ; it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin() ; it!=v.end() ; it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v){
        cout<<it<<" ";
    }
}

void ExplainList(){
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(4);

    ls.push_front(2);
    ls.emplace_front(1);

    list<int>::iterator it = ls.begin();
    for(it ; it!=ls.end() ; it++){
        cout<<*(it)<<" ";
    }
}

void ExplainDeque(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    cout<<dq.back();
    cout<<dq.front();
}

void ExplainStack(){
    stack<int> st;
    //Follows LIFO
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout<<st.top();

    st.pop();

    cout<<st.top();

    cout<<st.size();

    cout<<st.empty();

}

void ExplainQueue(){
    queue<int> q;
    // Follows FIFO
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);  // {1,2,3,4}

    q.back() += 5;
                //{1,2,3,9}
    cout<<q.back();

    cout<<q.front();
    q.pop();

}

void ExplainPQ(){
    priority_queue<int> pq; // basically max heap
    // Inside tree data structure is maintained

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10);// {10,8,5,2}

    cout<<pq.top(); //prints 10
    pq.pop(); // {8,5,2}

    //Minimum heap is to be maintained then
    priority_queue< int, vector<int> , greater<int>> pq1;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10);// {2,5,8,10}

    cout<<pq.top(); // prints 10

}

void ExplainSet(){
    // stores everything in SORTED and UNIQUE
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3); // iterator
    auto it1 = st.find(6); // if the element is not found it returns the st.end()-> the address after the last element

}

void ExplainMS(){
    multiset<int> ms;
    //It follows all thr Properties of set
    // Sorted -> yes 
    // Unique -> no
}

void ExplainUS(){
    unordered_set<int> us;
    // mostly O(1);
    // Sorted -> no
    // Unique -> yes
    // lower bound and upper bound does not work
}

void ExplainMap(){
    // map < key , value >
    // key is unique and is in sorted order
    map< int , int > m;
    map< int , pair<int,int> > mpp1;
    map< pair<int,int> , int > mpp2;

    m[1]=2;
    m.insert({3,4});
    // m.emplace({2,3});

}
int main(){
    // explainPair();
    ExplainList();
    cout<<endl;
    ExplainDeque();
return 0;
}