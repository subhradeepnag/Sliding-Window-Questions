#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[] = {2,5,1,8,2,9,1};
    int n = 7;
    int k = 3;

    int sum = 0;
    int i=0;
    int j=0;
    int mx = INT_MIN;
    while(j<n)
    {
        sum+=arr[j];

        if(j-i+1<k)
        {
            j++;
        }
        else if((j-i+1) == k)
        {
            mx = max(mx,sum);

            sum-=arr[i];

            i++;
            j++;
        }
    }

    cout<<mx;
}
