// #include <stdio.h>

// void count_freq(char *str, int freq[10],int len)
// {
//     for (int i = 0; i <len; i++)
//     {
//         freq[str[i]-'0']++;
//     }
// }

// int main(void)
// {
//     int freq[10] = {0};              // Array to count occurence
//     char str[] = "3952849274659507"; // Input string
//     int len = sizeof(str)/ sizeof(str[0]);

//     count_freq(str, freq,len); // Calculate frequency

//     for (int i = 0; i < 10; ++i) // Print result
//     {
//         printf("%d: %d\n", i, freq[i]);
//     }
//     return 0;
// }
//--------------------------------------------------------------------
// string s3 = "69627470091273";
// cout << typeid(s3[3]).name() << endl;
// int sx = s3[3] - '0'; // output is 2
// int freq_counter[9] = {0};
// int len = sizeof(freq_counter) / sizeof(freq_counter[0]);
// for (int i = 0; i < s3.length(); i++)
// {
//     freq_counter[s3[i] - '0']++;
// }
// for (int i = 0; i <= len; i++)
// {
//     cout << i << " has frequency of " << freq_counter[i] << endl;
// }

//--------------------------------------------------------------------
// C++ implementation to print the character and
// its frequency in order of its occurrence
#include <bits/stdc++.h>
using namespace std;
#define SIZE 26
void printCharWithFreq(string str)
{
    int n = str.size();
    int freq[SIZE] = {0};
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
    for (int i = 0; i < n; i++)
    {
        if (freq[str[i] - 'a'] != 0)
        {
            cout << str[i] << freq[str[i] - 'a'] << " ";
            freq[str[i] - 'a'] = 0;
        }
    }
}
int main()
{
    string str = "kaushikjainmanan";
    printCharWithFreq(str);
    return 0;
}