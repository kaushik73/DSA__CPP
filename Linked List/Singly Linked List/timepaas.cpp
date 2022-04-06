#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a=5;
	int *ptr1 = &a;
	cout<<*&a<<endl;
	int starptr = *ptr1;
	int **andptr = &ptr1;
	cout<<"ptr1 : "<<ptr1<<endl;
	cout<<"starptr : "<<starptr<<endl;
	cout<<"andptr : "<<andptr<<endl;
}