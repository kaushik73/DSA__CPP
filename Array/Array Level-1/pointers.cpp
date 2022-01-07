#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ int arr[] = {1,2,3,4,5,6,7};
    int constant = 10;
    int * ptr;
    ptr=&constant;
    // &arr[2] -> 0x61fee4
    cout<<"*ptr -> "<<*ptr<<endl;
    cout<<"ptr -> "<<ptr;
    cout<<"\n&constant -> "<< &constant<<endl;
    cout<<endl<<"Size of array is -> "<<sizeof(ptr)<<endl;
    int *aptr=arr ;
    int *pointer = &arr[0];
    cout<<endl<<"New Concept"<<endl;
    cout<<endl<<" arr -> "<<arr<<endl;
    cout<<endl<<" &arr -> "<<&arr<<endl;
    cout<<endl<<" pointer -> "<<pointer<<endl;
    cout<<endl<<" aptr -> "<<aptr<<endl;
    cout<<endl<<" *pointer -> "<<*pointer<<endl;
    cout<<endl<<" *aptr -> "<<*aptr<<endl;
    cout<<endl<<" &aptr -> "<<&aptr<<endl;    //address where aptr is stored
    cout<<endl<<"New Concept\n"<<endl;
    cout<<"2[arr] -> "<<2[arr]<< " --same-- arr[2] -> "<<arr[2]<<endl;
    cout<<"\narr+1 -> "<<arr+1<<endl;
    cout<<"\n&arr[0]+1 -> "<<&arr[0]+1<<endl;
    cout<<"\narr+2 -> "<<arr+2<<endl;
    cout<<"\n&arr[2] -> "<<&arr[2]<<endl;
    cout<<"\n&arr+1 -> "<<&arr+1<<endl; // arr+(7*4) 7 elements and each size 4 
    cout<<"\n*arr+1 -> "<<*arr+1;
    cout<<"\n*(arr+1) -> "<<*(arr+1)<<endl;


}