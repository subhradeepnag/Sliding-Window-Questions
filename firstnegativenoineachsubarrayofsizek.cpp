#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int n = 8;
    int k = 3;
    int i=0,j=0;
    list<int>l;
    vector<int>v;

    while(j<n)
    {
        if(arr[j]<0)
        {
            l.push_back(arr[j]);
        }

        if((j-i+1)<k)
        {
            j++;
        }
        else if((j-i+1) == k)
        {
            if(l.size() == 0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(l.front());

                if(arr[i] == l.front())
                {
                    l.pop_front();
                }
            }

            i++;
            j++;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
