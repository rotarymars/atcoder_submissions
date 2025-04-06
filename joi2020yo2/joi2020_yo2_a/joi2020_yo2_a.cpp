#include <bits/stdc++.h>
#define SIZE 505
using namespace std;

char S[SIZE][SIZE];
char T[SIZE][SIZE];
char nxt[SIZE][SIZE];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%s",&S[i]);
	for(int i=0;i<n;i++) scanf("%s",&T[i]);
	int ret=n*n;
	for(int i=0;i<4;i++)
	{
		int cnt=min(i,4-i);
		for(int x=0;x<n;x++)
		{
			for(int y=0;y<n;y++)
			{
				if(S[x][y]!=T[x][y]) cnt++;
			}
		}
		ret=min(ret,cnt);
		for(int x=0;x<n;x++) for(int y=0;y<n;y++) nxt[y][n-x-1]=S[x][y];
		for(int x=0;x<n;x++) for(int y=0;y<n;y++) S[x][y]=nxt[x][y];
	}
	printf("%d\n",ret);
	return 0;
}