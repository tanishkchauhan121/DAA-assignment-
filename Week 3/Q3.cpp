#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int l1=m-l+1;
    int l2=r-m;
    int a1[l1],a2[l2];
    for(int i=0;i<l1;i++)
       a1[i]=arr[l+i];
    for(int i=0;i<l2;i++)
       a2[i]=arr[m+i+1];
    int i,j,k;
    i=0,j=0,k=l;
    while(i<l1 && j<l2)
    {
        if(a1[i]<a2[j])
        {
            arr[k]=a1[i];
            i++;
        }
        else
        {
            arr[k]=a2[j];
            j++;
        }
            
        k++;
        
    }
    while(i<l1)
    {
        arr[k]=a1[i];
        i++;
        k++;
    }
    while(j<l2)
    {
        arr[k]=a2[j];
        j++;
        k++;
    }

}
void mergesort(int arr[],int l,int r)
{
    if(l>=r)
       return;
    int m=l+(r-l)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
    
}
int main()
{
    int t,n;
    cout<<"Enter no of test cases";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"Enter no of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergesort(arr,0,n-1);
        cout<<"After sorting"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int k,j,flag=-1;
        for(k=0;k<n;k++)
        {
        for(j=k+1;j<n;j++)
           {
              if(arr[k]==arr[j])
                 {
                   flag=1;
                   break;
                   
                 }
        
            }
        }
        if(flag==-1)
          cout<<"NO";
        else
          cout<<"YES";
    }
    
    
}
