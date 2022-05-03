#include <iostream>
using namespace std;
bool checkPalindrome(string name1, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    // R.Relation
    if (name1[i] != name1[j])
        return false;
    else
        return checkPalindrome(name1, i + 1, j - 1);
}

int main()
{
    string name1 = "kaushik";
    string name2 = "kanak";
    bool ans = checkPalindrome(name2, 0, name2.length() - 1);
    if (ans)
        cout << "It is a palindrome";
    else
        cout << "Not a palindrome";

}