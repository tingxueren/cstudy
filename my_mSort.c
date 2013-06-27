#include <stdio.h>
#include <stdlib.h>

void Merge(int* tr1, int *tr2, int m, int n, int p)
{
    int i, j, k;
    k = m;
    for (i = m , j = n+1; i <= n && j <= p; ) {
    	if (tr2[i] <= tr2[j])
		tr1[k++] = tr2[i++];
	else
		tr1[k++] = tr2[j++];

    }
    for (;i <= n; ++i) tr1[k++] = tr2[i];
    for (;j <= p; ++j) tr1[k++] = tr2[j];
}

void mSort(int* sr, int* tr1, int s, int t)
{
    if (s == t)
	tr1[s] = sr[s];
    else
    {
        int* tr2 = malloc(100*sizeof(int));
	int m = (s + t) / 2;
	mSort(sr, tr2, s, m);
	mSort(sr, tr2, m+1, t);
	Merge(tr1, tr2, s, m, t);
        free(tr2);
    }
}

void mergeSort(int* l, int length)
{
    mSort(l, l, 0, length);
}

int main()
{
    int al[] = {1, 3, 4, 7, 9, 2, 8, 6, 10};
    int i;
    for (i = 0; i < 9; ++i) printf("%d ", al[i]);
    printf("\n");

    mergeSort(al, 8);

    for (i = 0; i < 9; ++i) printf("%d ", al[i]);
    printf("\n");
    return 0;

}
