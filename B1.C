#include<stdio.h>
#include<stdlib.h>

long  *kk;
long  f(long n){
  if (n>0)
      return (kk[n]);
  else return 0;
}

int main(){
   long  i,num,n;
   kk=(long *) malloc(100001*sizeof(long));
   kk[0]=kk[1]=1;
   for(i=2; i<=100000;++i) {
       kk[i]=(kk[i-1]*i) % 1000000007;
   }
   scanf("%ld", &num);
   for(i = 0; i < num; ++i) {
	  scanf("%ld", &n);
	  printf("%ld\n", f(n));
    }
return 0;
}