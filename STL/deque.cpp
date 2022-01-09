#include <stdio.h>
#include <iostream>
#include<deque>
using namespace std;

int main()
{ 
deque<int> d;
d.push_back(1);
d.push_front(2);
cout<<d.front() ;
cout<<"\n\n\n\n"<<d.at(0);

}