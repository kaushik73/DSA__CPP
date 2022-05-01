#include <iostream>
#include <string>
// KAUSHIK
using namespace std;
int getLength(char name[])
{
   int count = 0;
   for (int i = 0; name[i] != '\0'; i++)
   {
      count++;
   }
   return count;
}
void reverse(char name[], int len)
{
   int s = 0, e = len - 1;
   while (s < e)
   {
      swap(name[s++], name[e--]);
   }
}
char* tolowercase(char name[], int n)
{
   char *ans = new char[n]; // answer array of character of size n
   for (int i = 0; i < n; i++)
   {
      if (name[i] >= 'A' && name[i] <= 'Z')
      {
         ans[i] = name[i]-'A' + 'a';
      }
      else if (name[i] >= 'a' && name[i] <='z'){
         ans[i] = name[i];

      }
      else{
         ans[i] = '#';
      }
   }
   return ans;
}
int main()
{
   string str1 = "kaushik", str2 = "jain", str3;
   int len1;
   char name[20];
   str3 = str1;        // copy str1 into str3
   str3 = str1 + str2; // concatenation str1 and str2
   len1 = str3.size();
   cout << "length of str3 " << len1 << endl;
   // taking input for character array
   cout << "Enter your name: ";
   cin >> name;
   cout << "Your name: " << name << endl;
   // name[3] = '\0'; // Now only kau will be printed , THIS IS NULL CHAHRACTER
   // cin terminate when you hit tab ,space ,enter,\0,\n
   int len = getLength(name);
   cout << "Reverse of name is : ";
   reverse(name, len);
   cout << name;
   char name3[8]= "kaUShIk";
   cout<<"\nlowername of kaUShIk is : "<<tolowercase(name3,7);
   return 0;
}