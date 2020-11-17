#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

            int flag=0;
            for(int i=0;i<n;i++)
            {
                int curr_sum=0;

                for(int j=i;j<n;j++)
                {
                    curr_sum+=arr[j];

                    if(curr_sum==0)
                        {
                            flag=1;
                            break;
                        }
                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
    }

	return 0;
}
