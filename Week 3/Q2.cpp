#include<iostream>
using namespace std;
void selection_sort(int a[],int n,int *c1,int *c2)
{
    int i,j,min,pos;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {   
            (*c1)++;
            if(a[j]<min)
               {
                   min=a[j];
                   pos=j;
               }
        }
        if(i!=pos)
        {   
            (*c2)++;
            a[pos]=a[i];
            a[i]=min;
        }
    }
    
}
int main()
{
    int n,t;
    cout<<"Enter no. of test cases";
    cin>>t;
    cout<<"Enter no of terms";
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
       cin>>a[i];
    int c1=0,c2=0;
    selection_sort(a,n,&c1,&c2);
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl<<"Total no of comparisons "<<c1<<endl;
    cout<<"Total no of swaps"<<c2;
    
    
}
