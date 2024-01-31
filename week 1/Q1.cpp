#include<iostream>
using namespace std;
int main()
{ int n,ch;
  cout<<"Enter no of test cases ";
  cin>>ch;
  for(int k=0;k<ch;k++)
  {

  
  cout<<"Enter no of elements ";
  cin>>n;
  int arr[n];
  int i,j,key,count=1;
cout<<"Enter key ";
cin>>key;
  for(i=0;i<n;i++)
{
   cin>>arr[i];
}
for(i=0;i<n;i++)
{
 if(key==arr[i])
    { cout<<"key found"<<endl;
    break;
    }
 count++;

}
cout<<"no of comparison "<<count<<endl;
  }
}