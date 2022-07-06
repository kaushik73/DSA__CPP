#include <iostream>
using namespace std;

int main()
{

    cout << "Pointer";
}

// int main() {
//     char thirdvalue = 'a';
//     int * p1, * p2;
//     char * p3;
//     int firstvalue = 5, secondvalue = 15;
//     p1 = & firstvalue; // p1 = address of firstvalue
//     p2 = & secondvalue; // p2 = address of secondvalue
//     p3 = & thirdvalue; // p3 = address of thirdvalue
//     * p1 = 10; // value pointed to by p1 = 10  --> firstvalue=10
//     * p2 = * p1; // value pointed to by p2 = value pointed to by p1           ->dono ki values same ho gayi jo *p1 me thi
//     //cout<<*p1<<" "<<*p2<<endl; //-> dono 10 ko point kar rahe hai i.e firstvalue
//     // *p1 = *p2;
//     p1 = p2; // p1 = p2 (value of pointer is copied) -> value at p2 and p1 are same
//     cout<<*p1<<" "<<*p2<<endl; //-> dono 10 ko point kar rahe hai i.e firstvalue
//     * p1 = 20; // value pointed to by p1 = 20
//     * p3 = 'b'; // value pointed to by p3 = ‘b ’
//     cout << "firstvalue is " << firstvalue << endl;
//     cout << "secondvalue is " << secondvalue << endl;
//     cout << "thirdvalue is " << thirdvalue << endl;

//     int a6[] = {1, 2, 3, 4};
//     cout << *(a6) << " " << *(a6+1)<<endl;

//     int *p = (a6 + 1);
//     cout << *p<<endl;
//     // Important Concept :
//     char b[] = "xyz";
//     char *c22 = &b[0]; // -> now C is also pointing tp whole array
//     cout <<c22 << endl;
//     int a[5];
//     int *c;
//     cout << sizeof(a) << " " << sizeof(c)<<endl;
//     //int ar11[] = {1, 2, 3, 4};
//    // int *p = ar11++; -> Error
//    // cout << *p << endl;

//     char *ptr6;
//     char Str[] = "abcdefg";
//     ptr6 = Str;
//     ptr6 += 5;
//     cout << ptr6<<endl;

//     int numbers[5]={9,9,9,9,9};
//     int *p7 = numbers; // -> numbers stores address
//     p7 = numbers;
//     cout<<p7<<"  " <<&numbers<<"  "<<*p7<<endl;
//     return 0;
// }