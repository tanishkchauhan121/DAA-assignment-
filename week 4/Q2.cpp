#include<iostream>
using namespace std;
int quick(int arr[],int l,int r)
{
    int pivot = arr[l];
    int i,j;
    i=l;
    j=r;
    
    while(i<j)
    {
        while(arr[i]<=pivot && i<=r)
            i++;
        while(arr[j]>pivot && j>=l)
            j--;
        if(i<j)
           swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    
    return j;
}
void quicksort(int arr[],int l,int r,int &key)
{
    if(l<r)
    {
        int p=quick(arr,l,r);
        if(p==key-1)
          cout<<"K ^th smallest element is"<<arr[p];
        quicksort(arr,l,p-1,key);
        quicksort(arr,p+1,r,key);

    }
}
int main()
{
   int t;
   cout<<"Enter no of test cases";
   cin>>t;
   int i;
   for(i=0;i<t;i++)
   {
    int n;
    cout<<"Enter no of elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
       cin>>arr[i];
    int key;
    cout<<"Enter key";
    cin>>key;
    quicksort(arr,0,n-1,key);
    
    
}
}
