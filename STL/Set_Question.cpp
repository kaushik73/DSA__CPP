// Question is :-
//  https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t >> n >> k;
    int total_candies = 0;
    while (t--)
    {
        multiset<int> bag;
        for (int i = 0; i < n; i++)
        {
            int candy;
            cin >> candy;
            bag.insert(candy);
        }
        for (int i = 0; i < k; i++)
        {
            auto itt = (--bag.end());
            auto candy = *itt;
            total_candies += candy;
            bag.erase(itt);
            bag.insert(candy / 2);
        }
    }
    cout << "Answer is : " << total_candies;


    
}