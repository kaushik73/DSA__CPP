#include <bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     string sent;
     string s1 = "kaushik", s2 = "jain"; //k=0 , a=1 , u = 2........
     cout << "s1.insert() : " << s1.insert(2, "xxx") << endl;
     // start inserting from 2nd element i.e. k(0)a(1)u(2{yaha sehoga xxx insert})i.e. kaxxxushik
     cout << "s1.length() : " << s1.length() << endl;
     string s3("manan jain"); // strings can also be defined as this
     string s4(5, 'k');
     // cin.ignore(3); // first 3 character of str input is ignored
     // cin >> str;
     // cout<<"\nstring is : "<<str<<endl;
     cout << "using getline function : ";
     getline(cin, sent);
     cout << "\nsentence is : " << sent << endl;
     string s5(s1); // assign value of s1 to s5
     cout << "s5 is  : " << s5 << endl;
     cout << "s1.append(s2) : " << s1.append(s2) << endl;
     cout << "sent and s2 are : " << sent << "  " << s2 << endl;
     cout << " sent.assign(s2) : " << sent.assign(s2) << endl; //s2 ki value sent m assign kar do
     cout << "sent and s2 are : " << sent << "  " << s2 << endl;
     cout << "s1.at(3) : " << s1.at(3) << endl;
     cout << " s2.compare(s1) : " << s2.compare(s1) << endl; //negative
     cout << "s1.size() : " << s1.size() << endl;            //starts from 1
     // cout<<"s1.resize(5) : "<<s1.resize(5)<< endl;
     cout << "s1 : " << s1 << endl;
     cout << "s1.at(4) : " << s1.at(4) << endl; //starts from 0
     cout << "s3 is : "
          << s3 << endl;
     cout << "s4 is : "
          << s4 << endl;
     //     clear(): Erases all the contents of the string and assign an empty string (“”)
     //     of length zero.

     //    empty(): Returns a boolean value, true if the string is empty and false if the
     //    string is not empty.

     //    substr(start,end): Returns a sub string.

     //    Using getline() function: To input the string with space we use getline() function
     //    instead of cin.

     //    we can use sort() function that is present in above header file of our string.
     //    Sort() function takes 2 arguments viz. iterator to start of the stringmand iterator to
     //    end of the string.

     //   assign(): Assigns new string by replacing the previous value (can also be
     //   done using ‘=’ operator).

     //   s2.compare(s1): Compares the value of the string with the string passed in the
     //   parameter and returns an integer greater than 0 when s2 is larger.

     //   s1.erase(3,4): Deletes a substring of the string. Its time complexity is O(N) where
     //   N is the size of the new string. delete s1 from 3rd index upto 4 character.

     //   c_str(): Convert the string into C-style string (null terminated string) and
     //   returns the pointer to the C-style string. Its time complexity is O(1).

     // ----------------------------REFER THIS FOR ALL STRING FUNCTIONS-----------------------
     // https://drive.google.com/file/d/1EMlDaf0O_mXlTTB5kuj6VhbyQpLqJ8we/view
}