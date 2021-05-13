// Calculate the number of bullets Blondie needs for each area

#include <iostream>


using namespace std;


int main()

{

int t;
 // no. of test cases 
cin>>t;

	while(t--)
	{

	int n;
 // size of the array     
	cin>>n;

	int arr[n];
  // array size    
	int x=0, c=0, sum=0;


	for(int i=1;i<=n;i++)

	{

		cin>>arr[i];
   // reading array elements into array       
		if(arr[i]!=-1)

		{

			sum+=arr[i];

			c++;


		}

          	else if(arr[i]==-1)

			{

				x=sum/c;

				arr[i]=x;

				sum+=x;

				c++;

			}


	}


	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";


	}


return 0;

}