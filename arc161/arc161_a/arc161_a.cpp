#include <stdio.h>

void merge_sort(int n, int x[])
{
	static int y[200001] = {};
	if (n <= 1) return;
	merge_sort(n / 2, &(x[0]));
	merge_sort((n + 1) / 2, &(x[n/2]));
	
	int i, p, q;
	for (i = 0, p = 0, q = n / 2; i < n; i++) {
		if (p >= n / 2) y[i] = x[q++];
		else if (q >= n) y[i] = x[p++];
		else y[i] = (x[p] < x[q])? x[p++]: x[q++];
	}
	for (i = 0; i < n; i++) x[i] = y[i];
}

int main()
{
	int i, N, A[200001];
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &(A[i]));
	merge_sort(N, A);
	
	int num = 0;
	if (N >= 3) for (i = 0; i < N; i++) if (A[i] == A[(N+1)/2]) num++;
	if (num * 2 > N) printf("No\n");
	else printf("Yes\n");
	return 0;
}