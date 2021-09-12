#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int *arr = new int(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
        int aeven=0,aodd=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]%2==0)
           {
               aeven++;
           }
           else
           {
               aodd++;
           }
       }
       int eveni=n/2;
       int oddi=n -(n/2) ;
       int ans=min(oddi,aeven) + min(eveni,aodd);
       cout<<ans<<endl;
      
    }
	return 0;
}
