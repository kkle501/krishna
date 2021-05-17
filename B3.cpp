#include <iostream> 
using namespace std;


int main()
{ 
    int n;	// input value
    cin>>n; 

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];  // reading array elements
    }

    int flag=0;
    int ans=0;

    for (int i=0;i<(1<<n);i++)
    {
        ans=0;
        for(int j=0; j<n; j ++)
	{
                         if (i & (1 << j))
			 { 
                		ans+=a[j];
                		ans=ans%360;
                         } 
			 else 
			 { 
                		ans-=a[j];
                		ans=ans%360;
            		 }
         }

            	if(ans==0) 
	    	{ 
            		flag=1;
           	 	break;
            	}
    }

    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
      
return 0;
}