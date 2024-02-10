#include<iostream>
using namespace std;
int main()
{   int t,i,j,k,n;
    cout<<"Enter no of test case";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter no of elements";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int key;
        cout<<"Enter key";
        cin>>key;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]-a[j]==key||a[i]-a[j]==-key)
                     cout<<i<<" "<<j<<" "<<key<<endl;
            }
        }
    }
}
