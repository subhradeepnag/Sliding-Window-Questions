//longest subarray of sum k
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[] ={4,1,1,1,2,3,5};
    int n = 7;
    int k = 5;

    int i = 0,j = 0;
    int mx = 0;
    int sum = 0;
    while(j<n)
    {
        sum+=arr[j];

        if(sum<k)
        {
            j++;
        }

        else if(sum == k)
        {
            if((j-i+1) > mx)
            {
                mx = j-i+1;
            }
            j++;
        }
        else if(sum > k)
        {
            while(sum > k)
            {
                sum-=arr[i];
                i++;
            }
            j++;
        }
    }

    cout<<mx;
    
}
