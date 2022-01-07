#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;
int main(){

    priority_queue<int,vector<int>,greater<int>> mini;

    mini.push(2);
    mini.push(34);
    mini.push(1);
    mini.push(29);


    int n = mini.size();
    cout<<mini.size()<<endl;

    for(int i = 0; i < n;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    } cout<<endl;

    cout<<mini.size()<<endl;
}

