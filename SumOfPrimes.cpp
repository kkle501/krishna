//Sum of prime numbers program

#include<bits/stdc++.h>
using namespace std;
long long int N=1000001;
long long int seive[1000001];

void get_seive()
{
	for(int i=0;i<N;i++)
		seive[i]=1;

	seive[0]=0;
	seive[1]=0;

	for(int i=2;i<N;i++)
	{
		if(seive[i]==1)
		{
			for(int j=i*i;j<=N;j+=i)    
			{
			seive[j]=0;
			}
		}
	}
}


int main() 
{
	get_seive();
	int q;// no. of queries
	cin>>q;
	
	while(q--)
	{
		int start,end; // input values
		cin>>start>>end;
		int sum=0;
		
		for(int i=start;i<=end;i++)
       		{
			if(seive[i]==1)
				sum+=i;
        	}
	cout<<sum<<" ";
	}	
	
return 0;
}