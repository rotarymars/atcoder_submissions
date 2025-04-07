#include<stdio.h>

int prime[210];
int main(){
	for(int i=2;i<=200;i++)prime[i]=1;
	for(int p=2;p*p<=200;p++)if(prime[p])for(int i=p*p;i<=200;i+=p)prime[i]=0;
	
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(int x=a;x<=b;x++){
		int flag=1;
		for(int y=c;y<=d;y++)flag&=!prime[x+y];
		if(flag){
			puts("Takahashi");
			return 0;
		}
	}
	puts("Aoki");
}
