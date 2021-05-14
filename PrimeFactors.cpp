//To find out the largest prime factor of the given number

#include<bits/stdc++.h>
using namespace std;
long long int N=1000001;
long long int seive[1000001];

void get_seive()
{
	
	seive[0]=1;
	seive[1]=1;

	for(int i=2;i<=N;i++)
		seive[i]=i;

	for(int i=2;i*i<=N;i++)
	{
		if(seive[i]==i)
		{
			for(int j=i*i;j<=N;j+=i)    
			{
				if(seive[j]==j)
				{
					seive[j]=i;
				}
			}
		}
	}
}


int main()
{
   	get_seive();
	int n;// input value
	cin>>n;

	while(n!=1)
	{
		//cout<<seive[n]<<" ";
		    int t=n;
		n=n/seive[n];
		    if(n==1)
			cout<<"The largest prime factor is: "<<seive[n*t]<<" ";
	}

return 0;
}