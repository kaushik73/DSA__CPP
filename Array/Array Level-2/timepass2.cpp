#include <iostream>
using namespace std;

int fun(int ptr[])
{ cout<<endl<<ptr[2];
    int x = 10;
    cout << "sizeof(ptr) = " << (int)sizeof(*ptr) << endl;
    ptr = &x;
    cout << "*ptr = " << *ptr;
    return 0;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    cout << "sizeof(arr) = " << (int)sizeof(arr) << endl;
    fun(arr);
    return 0;
}

