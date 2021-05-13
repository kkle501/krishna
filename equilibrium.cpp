// calculate how many equilibrium indexes in the given array

#include<iostream>

using namespace std;

int main()

{


	int n;// array index		
	cin>>n;

	int arr[n];
 // no. of elements in the array

	// reading array elements
	for(int i=0;i<n;i++)

	cin>>arr[i];


	int prefix[n];// prefix array
	prefix[0]=arr[0];

	// calculating prefix array
	for(int i=i;i<n;i++)

	{

		prefix[i]=prefix[i-1]+arr[i];	

	}  



	int kk=0,ka=0;
	int count=0;		
	for(int i=1;i<n-1;i++)

	{

		kk=prefix[i-1];
		ka=prefix[n-1]-prefix[i];					
		if(kk==ka)

			count++;			


	}

	cout<<count;
return 0;	
}