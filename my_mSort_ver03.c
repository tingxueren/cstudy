#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Merge(int *tr1, int *tr2, int *tr3, int m, int n)
{
    int i, j, k;
    k = 0;
    for (i = 0 , j = 0; i < m && j < n; ) {
    	if (tr2[i] <= tr3[j])
		tr1[k++] = tr2[i++];
	else
		tr1[k++] = tr3[j++];

    }
    for (;i < m; ++i) tr1[k++] = tr2[i];
    for (;j < n; ++j) tr1[k++] = tr3[j];
}

void mSort(int* sr, int* tr1, int s, int t)
{
	
    if (s == t)
	// tr1[] 从 0 开始, 注意开始的位置
	tr1[0] = sr[s];
    else
    {
	int *tr2, *tr3;    
	int m = (s + t) / 2;
        tr2 = malloc((m - s + 1)*sizeof(int));
        tr3 = malloc((t - m)*sizeof(int));
	mSort(sr, tr2, s, m);
	mSort(sr, tr3, m+1, t);
	Merge(tr1, tr2, tr3, m - s + 1, t - m);
        free(tr2);
        free(tr3);
    }
}

void mergeSort(int* l, int length)
{
    mSort(l, l, 0, length);
}

int main()
{
    int MAX;
    printf("please intpu MAX = ");
    scanf("%d", &MAX);
    int al[MAX];
    int i;
    srandom(time(NULL));
    for (i = 0; i < MAX; ++i) {
    	al[i] = random() % MAX;
    }
    for (i = 0; i < MAX; ++i) printf("%d ", al[i]);
    printf("\n");

    mergeSort(al, MAX - 1);

    for (i = 0; i < MAX; ++i) printf("%d ", al[i]);
    printf("\n");
    return 0;

}
