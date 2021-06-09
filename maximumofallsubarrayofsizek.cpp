//Maximum of all subarray of size k
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[] ={1,3,-1,-3,5,3,6,7};
    int n = 8;
    int k = 3;

    vector<int>ans;
    int i=0;
    int j=0;
    list<int>l;

    while(j<n)
    {
        while((l.size()>0) && (l.back()<arr[j]))
        {
            l.pop_back();
        }

        l.push_back(arr[j]);

        if((j-i+1)<k)
        {
            j++;
        }
        else if((j-i+1) == k)
        {
            ans.push_back(l.front());

            if(l.front() == arr[i])
            {
                l.pop_front();
            }

            i++;
            j++;
        }


    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}
