// #include<bits/stdc++.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string sent;
    string s1 = "kaushik", s2 = "jain";
    string s3("manan jain"); // strings can also be defined as this
    string s4(5, 'k');
    // cin.ignore();
    // cin >> str;
    // cout<<"\nstring is : "<<str<<endl;
    // cout<<"using getline function";
    // getline(cin,sent);
    // getline(cin,sent);
    // cout<<"\nsentence is : "<<sent<<endl;
    cout << s1.append(s2) << endl;
    cout << sent.assign(s2) << endl;
    cout << s1.at(3) << endl; //s

    cout << s2.compare(s1) << endl; //negative
    cout << s1.size() << endl;      //starts from 1
    s1.resize(5);
    cout << s1.size() << endl;
    cout << s1 << endl;
    // cout<<s1.at(5)<<endl;
    cout << s1.at(4) << endl; //starts from 0
    cout <<endl<< s3 << endl;
    cout <<endl<< s4 << endl;
//     clear(): Erases all the contents of the string and assign an empty string (“”)
//     of length zero.

//    empty(): Returns a boolean value, true if the string is empty and false if the
//    string is not empty.

//    substr(start,end): Returns a sub string.

//    we can use sort() function that is present in above header file on our string.
//    Sort() function takes 2 arguments viz. iterator to start of the stringmand iterator to
//    end of the string.
}