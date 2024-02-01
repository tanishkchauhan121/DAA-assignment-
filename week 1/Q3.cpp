#include<iostream>
using namespace std;
int linearsearch(int arr[],int lb,int ub,int key)
{
   while(lb<=ub)
   {
     if(arr[lb]==key)
        return lb;
        
     lb++;
    }
  return -1;

}
int main()
{  int n;
   cout<<"Enter no of elements";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   int key;
   cout<<"Enter key";
   cin>>key;
   int i;
   if(arr[0]==key)
     cout<<"Key found at index 0";
   for(i=1;i<n&&arr[i]<=key;i=i*2)

   int res= linearsearch(arr,i/2,min(i,n-1),key);
   (res==-1)?cout<<"key not found":cout<<"Key found at index"<<res;
   
}
