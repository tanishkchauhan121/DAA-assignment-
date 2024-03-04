#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter first sorted array size";
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
       cin>>a1[i];
    cout<<"Enter second sorted array size";
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++)
       cin>>a2[i];
    cout<<"Similar elements ";
    int i,j;
    i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
            i++;
        else if(a1[i]>a2[j])
            j++;
        else{
            cout<<a1[i]<<" ";
            i++;
            j++;
           
        }
    }
}
