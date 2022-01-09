#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1; 
    string s2;
    cout<<"Enter 1st String : ";
    cin>>s1; 
    cout<<"Enter 2nd String : ";
    cin>>s2;
    string temp;
    temp = s2;
    s2= s1;
    s1 = temp;

    cout<<" 1st String is : "<<s1<<endl;
    cout<<" 2nd String is : "<<s2;
    


    
}