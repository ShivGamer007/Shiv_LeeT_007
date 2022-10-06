#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int shivcodes=700;
        vector<int>mp(256,-1);
        int l=0,r=0,len=0;
        while(r<n){
            if(mp[s[r]]!=-1){
                l=max(mp[s[r]]+1,l);
            }
            mp[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }

int main()
{
    string ss="abcaabcdba";
    int ll=lengthOfLongestSubstring(ss);
    cout<<ll<<" \n";

    return 0;
}