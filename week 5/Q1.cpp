#include<iostream>
using namespace std;
void count(char arr[],int n)
{
   int max=0;
   for(int i=0;i<n;i++)
   {
    if(max<arr[i])
       max=arr[i];
   }
   int count[max+1];
   for(int i=0;i<=max;i++)
       count[i]=0;
   for(int i=0;i<n;i++)
      count[arr[i]-'a']++;
    int m=0,pos;
    int j;
    for(j=0;j<=max;j++)
    {
        if(m<count[j])
        {
           m=count[j];
           pos=j;
        }
           
    }
    if(m!=1)
       cout<<(char)('a'+pos)<<"-"<<m;
    else
       cout<<"No duplicates";
    
   

}
int main()
{
    int t;
    cout<<"Enter no of test cases";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"Enter no of elements";
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        count(arr,n);
        // cout<<"After sorting"<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
    }
}
