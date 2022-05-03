#include <iostream>
using namespace std;
void my_f_int_Array1(int temp[])
{
    cout << "This is how integer array is passed : " << temp << endl;
}
// In function passing temp[] == *temp == address passing
void my_f_int_Array(int *temp)
{
    cout << "This is how integer array is passed : " << temp << endl; 
}
void my_f_char_Array(char ch[])
{
    cout << "This is how integer array is passed : " << ch << endl;
}
int main()
{
    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;
    cout << " 1st " << sizeof(*temp) << endl;
    cout << " 2nd " << sizeof(&temp) << endl;
    cout << temp << " ------  " << &temp << endl;
    int *ptr = &temp[0];
    cout << sizeof(ptr) << "---" << sizeof(*ptr) << "---" << sizeof(&ptr) << endl;
    int **ptr2 = &ptr;
    cout << "*ptr -> " << *ptr << endl;
    cout << "&ptr -> " << &ptr << endl;
    cout << ptr2 << " --- " << **ptr2 << " ----- " << *ptr2 << endl;
    char ch[6] = "abcde";
    my_f_int_Array(temp);
    my_f_char_Array(ch);
    return 0;
}