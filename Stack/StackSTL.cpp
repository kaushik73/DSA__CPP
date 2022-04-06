#include <bits/stdc++.h>
using namespace std;

void print1(stack<int> copy)
{
    cout << "\nprint function call" << endl;
    while (!copy.empty())
    {
        cout << copy.top()<<" ";
        copy.pop();
    }
    cout<<endl;
}

void swap_function(){
    cout<<"Swap function use in STACK | STL\n";
    stack<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  foo.swap(bar);  // dono stack ko swap karna 
  print1(foo);
}
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    print1(s);
    cout << "size is" << s.size();
    cout << "\nTop element is" << s.top();
    cout<<"\nelement pop is : "<< s.top();
    s.pop();
    cout<<"\nelement pop is : "<< s.top();
    s.pop();
    cout << "\nTop element is" << s.top();
    cout << "\nsize is" << s.size();
    print1(s);
    swap_function();
}