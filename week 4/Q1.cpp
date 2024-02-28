#include<iostream>
using namespace std;

int merge(int arr[],int l,int m,int r)
{   int inv=0;
    int l1=m-l+1;
    int l2=r-m;
    int a1[l1],a2[l2];
    int i,j,k;
    for(i=0;i<l1;i++)
         a1[i]=arr[l+i];
    for(i=0;i<l2;i++)
         a2[i]=arr[m+i+1];
    i=0;
    j=0;
    k=l;
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
            inv+=l1-i;
            
            
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
return inv;

}
int mergesort(int arr[],int l,int r)
{  int inv=0;
    if(l<r)
    {
    int m=l+(r-l)/2;
    inv+=mergesort(arr,l,m);
    inv+=mergesort(arr,m+1,r);
    inv+=merge(arr,l,m,r);
    }
          return inv;
    
    
    
    
  
}
int main()
{  int inv;
    int t;
    cout<<"Enter no of test cases";
    cin>>t;
    for(int i=0;i<t;i++)
     {
         int n;
         cout<<"Enter no of elements";
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
            cin>>arr[i];
         inv = mergesort(arr,0,n-1);
         cout<<"After sorting"<<endl;
         for(int i=0;i<n;i++)
               cout<<arr[i]<<" ";
         cout<<"No of inversions"<<inv;
    
         
     }
}
