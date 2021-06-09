#include <bits/stdc++.h>
using namespace std;
int main() {
    
    string s = "aabaabaa";
    string ptr = "aaba";

    unordered_map<char,int>mp;

    for(char i:ptr)
    {
        mp[i]++;
    }

    int cnt = mp.size();
    int i = 0;
    int j = 0;
    int k = ptr.size();
    int ans = 0;
    while(j<s.size())
    {
        if(mp.find(s[j])!= mp.end())
        {
            mp[s[j]]--;

            if(mp[s[j]] == 0)
            {
                cnt--;
            }
        }

        if((j-i+1)< k)
        {
            j++;
        }
        else if((j - i + 1) == k)
        {
            if(cnt == 0)
            {
                ans++;
            }

            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]==0)
                {
                    cnt++;
                }

                mp[s[i]]++;   
            }
            i++;
            j++;
        }
    }

    cout<<ans;
}
