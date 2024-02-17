#include<iostream>
using namespace std;
void inserion_sort(int a[],int n,int *c1,int *c2)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && a[j]>t)
        {   (*c1)++;
            a[j+1]=a[j]; 
            j--;
        }
        (*c2)++;
        a[j+1]=t;
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
    inserion_sort(a,n,&c1,&c2);
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl<<"Total no of comparisons "<<c1<<endl;
    cout<<"Total no of shifts"<<c1+c2;
    
    
}
