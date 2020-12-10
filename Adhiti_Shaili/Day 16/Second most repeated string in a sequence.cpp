#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        int maxi=0,sec_maxi=0;
        unordered_map<string,int> hash;
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        
        string val1="",val2="";
        for(auto i=hash.begin();i!=hash.end();i++)
        {
            if(i->second>maxi)
            {
                sec_maxi=maxi;
                maxi=i->second;
                val2=val1;
                val1=i->first;
            }
            else if(i->second<maxi&&i->second>sec_maxi)
            {
                sec_maxi=i->second;
                val2=i->first;
            }
        }
        return val2;
    }
};