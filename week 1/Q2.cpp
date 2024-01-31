#include <iostream>
using namespace std;

int search(int arr[], int l, int r, int x,int*c)
{
	while (l <= r) {
		int m = l + (r - l) / 2;
                
		
		if (arr[m] == x)
    {        (*c)++;
    
            return m; 
    }
	
		if (arr[m] < x)
        {
			l = m + 1;
            (*c)++;

        }
		else
        {
			r = m - 1;
            (*c)++;
        }
	}


	return -1;
}


int main()
{
	int n,i;
	cout<<"Enter no of elements ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int key;
int c=0;
	cout<<"Enter key ";
	cin>>key;
	int res = search(arr, 0, n - 1, key,&c);
	(res == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << res<<endl;
        cout<<"no of comparisons "<<c;
	return 0;
}