#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,t;
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
        int c=0;
        for(i=0;i<n;i++)
        {   for(j=i+1;j<n;j++)
          {  
             for(k=0;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    c++;
                }
            }

          }
           
        }
        if(c==0)
          cout<<"No sequence found";

    }


    
}
