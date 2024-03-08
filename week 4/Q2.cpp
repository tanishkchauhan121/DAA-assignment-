#include<iostream>
using namespace std;
int partition(int a[],int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<=r-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return (i+1);
}
int qsort(int a[],int l,int r,int key)
{
	if(key>0 && key<=(r-l+1))
	{
		int part=partition(a,l,r);
		
		if(part==key)
		{
			cout<<a[part]<<endl;
		}
		else if(part>key)
		{
			qsort(a,l,part-1,key);
		}
		else
		{
			qsort(a,part+1,r,key);
		}
}
}
int main()
{
	cout<<"Enter the number of test cases=";
	int n,m,i,j;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cout<<"Enter the number of elements=";
		cin>>n;
		int a[n];
		cout<<"Enter the elements:";
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		cout<<"Enter the key=";
		int key;
		cin>>key;
	    qsort(a,0,n-1,key-1);
	}
}
