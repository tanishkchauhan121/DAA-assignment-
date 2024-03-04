#include<iostream>
using namespace std;
int partition(int arr[],int l,int r,int*c,int *s)
{   
    int pivot=arr[l];
    int i,j;
    i=l;
    j=r;
    while(i<j)
    {
        while(arr[i]<=pivot && i<r)
        {
            i++;
            (*c)++;
            
            
        }
            
        while(arr[j]>pivot && j>l)
        {
            j--;
            (*c)++;
        }
        if(i<j)
        {
           swap(arr[i],arr[j]);
           (*s)++;
        }
           
    }
    
    swap(arr[j],arr[l]);
     (*s)++;
    

    return j;

}
void quicksort(int arr[],int l,int r,int *c,int *s)
{   
    if(l<r)
    {
       int p = partition(arr,l,r,c,s);
       quicksort(arr,l,p-1,c,s);
       quicksort(arr,p+1,r,c,s);
    }
    

}
int main()
{
    int t;
    cout<<"Enter no of test cases";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c=0,s=0;
        cout<<"Enter no of elements";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        quicksort(arr,0,n-1,&c,&s);
        cout<<"After sorting"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"No. of comparisons"<<c<<endl;
        cout<<"No.of swaps"<<s;
        
    }

}
