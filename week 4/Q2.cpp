#include<iostream>
using namespace std;
void count(int arr[],int n)
{   int i,j,max=0;
    for( i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    int count[max+1];
    for( i=0;i<max+1;i++)
             count[i]=0;
    for( i=0;i<n;i++)
            count[arr[i]]++;

    i=0,j=0;
    while(i<=max)
    {
        if(count[i]>0)
        {
            arr[j]=i;
            j++;
            count[i]=count[i]-1;
        }
        else
            i++;
    }



}
int main()
{
    int t;
    cout<<"Enter no of test cases";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,key;
        cout<<"Enter no of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    
        count(arr,n);
        cout<<"After sorting"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Enter key";
        cin>>key;
        for(int i=1;i<=n;i++)
        {
            if(i==key)
               cout<<arr[i-1];
        }


    }
}
