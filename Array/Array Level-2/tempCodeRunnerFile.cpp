  int sum = 0;
    int max_sum = -999;
    int arr[6] = {-5, 4, 6, -3, 4, -1};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            sum += arr[j];
           
        }
         if (max_sum < sum)
            {
                max_sum = sum;
            }
    }

    cout<<"Maximum sum is "<<max_sum;