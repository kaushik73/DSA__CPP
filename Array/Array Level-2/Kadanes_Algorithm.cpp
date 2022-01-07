#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int max_sum = -999;
    int sum,temp;
    int arr[6] = {-5, 4, 6, -3, 4, -1};

    for (int i = 0; i < 6; i++)
    { sum=0;temp=0;
        for (int j = i; j < 6; j++)
        {
            sum += arr[j];
            // if()
            cout<<"sum at "<<j<<" is -> "<<sum<<endl;
           
        }
        
         if (max_sum < sum)
            {
                max_sum = sum;
            }
    }

    cout<<"Maximum sum is "<<max_sum;

}