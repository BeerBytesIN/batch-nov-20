#include<bits/stdc++.h>
typedef  long long int ll;
typedef  long double ld;
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define mod 1000000007
#define F first
#define S second
#define to 2
#define pb push_back
using namespace std;

// Complexity: time-- O(n)  space-- O(1)
int main()
{
    sync;

        ll n;
        cin>>n;
        ll arr[n];
        input(arr,n);

        ll i=0,j=n-1;
        while(i<=j)
        {
            if(arr[i]<0)    i++;
            else if(arr[j]<0)
                swap(arr[i],arr[j]);
            else if(arr[j]>=0)
                j--;
        }
        for(i=0;i<n;i++)
            cout<<arr[i]<<(i==n-1?"\n":" ");

    return 0;
}
