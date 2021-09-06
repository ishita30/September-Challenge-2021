#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,district=0,state=0,time=0;
        cin>>n>>a>>b;
        string str;
        cin>>str;
       
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
               district++; 
            }
            else
            {
               state++; 
            }
            
        }
        time=(district*a) + (state*b);
        cout<<time<<endl;
    }
	// your code goes here
	return 0;
}
