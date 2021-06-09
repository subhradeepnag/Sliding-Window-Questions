#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        int sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

// bool check(vector<int>v,int ans)
// {
//     if(isPerfectSquare(ans) == false)
//     {
//         return false;
//     }
//     else
//     {
//         // return true;
//         while((isPerfectSquare(ans) == true) && (v.size()>0))
//         {
//             v.pop_back();

//             for(int i=0;i<v.size();i++)
//             {
//                 ans*=v[i];
//             }

//             if(isPerfectSquare(ans) == false)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// }

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int ans = 1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            ans*=v[i];
        }
        // if(check(v,ans) == true)
        // {
        //     cout<<"NO"<<endl;;
        // }
        // else
        // {
        //     cout<<"YES"<<endl;
        // }
        int flag = 0;
        for(int i=0;i<v.size();i++)
        {
            if(isPerfectSquare(v[i]) == false)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else if(flag == 0)
        {
            cout<<"NO"<<endl;
        }



    }
    
    
}
