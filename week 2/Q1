#include<iostream>
using namespace std;
int leftsearch(int arr[],int l,int r,int key)
{ int ans=-1;  
  while(l<=r)
  {
     int m= l+(r-l)/2;
    if(arr[m]==key)
    {
        ans=m;
        r=m-1;
    }
    else if(key>arr[m])
       l=m+1;
    else 
       r=m-1;
  }
     return ans;
    
         
}
int rightsearch(int arr[],int l,int r,int key)
{ 
   int ans=-1;  
  while(l<=r)
  {
    int m= l+(r-l)/2;
    if(arr[m]==key)
    {
        ans=m;
        l=m+1;
    }
    else if(key>arr[m])
       l=m+1;
    else 
       r=m-1;
  }
  return ans;
         
        
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
        cout<<"Enter no. of elements";
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int key,c=0;
        cout<<"Enter key";
        cin>>key;

        int firstocc=leftsearch(arr,0,n-1,key);
        int lastocc=rightsearch(arr,0,n-1,key);
        if(firstocc==-1 && lastocc==-1)
           cout<<"key not found";
        else
        {
          int dup=lastocc-firstocc+1;
          cout<<"First occurrence -> "<<firstocc<<endl;
          cout<<"last occurrence -> "<<lastocc<<endl;
          cout<<"No of dupliactes "<<dup<<endl;
        }
        
    }
    

}
