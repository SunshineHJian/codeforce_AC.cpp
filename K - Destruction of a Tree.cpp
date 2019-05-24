#include <cstdio>
#include<iostream>
#include <cmath>
#include <algorithm>
#include <cstring>/*
typedef struct Grap {
	int degree;
	struct Grap* p;
	struct Grap* q;
}*grap;
grap G[(int)2E5 + 10];
int flag[(int)2E5 + 10];
int flag2[(int)2E5 + 10];
int main() {
	int n,m;
	while (~scanf("%d", &n)) {
		memset(flag, -1, sizeof(flag));
		memset(flag2, -1, sizeof(flag2));
		int edge = n-1;
		for (int i = 1; i <= n; i++)
			G[i] = new struct Grap();
		for (int i = 1; i <= n; i++) {
			scanf("%d", &m);
			G[i]->p = NULL;
			G[i]->q = NULL;
			G[i]->degree = 0;
			
			if (m != 0) {
				G[m]->degree++;
				G[i]->degree++;
				if(!G[m]->p) {
					G[m]->p = G[i];
					continue;
				}
				grap H = G[m]->p;
				while (H->q) {
					H = H->q;
				}
				H->q=G[i];
			}
		}
		for (int i = 1,j=0,k=0; i <= n; i++) {
			if (G[i]->degree % 2 == 0) {
				edge -= G[i]->degree;
				flag[j++] = i;
				if(G[i]->p) {
					G[i]->p->degree--;
					grap H = G[i]->p;
					while (H->q) {
						H->q->degree--;
						H = H->q;
					}
				}
			}
			else flag2[k++] = i;
		}
		if (edge == 0) {
			printf("YES\n");
			for (int i = 0; flag[i] != -1; i++)
				printf("%d\n", flag[i]);
			for (int i = 0; flag2[i] != -1; i++)
				printf("%d\n", flag2[i]);
		}
		else
			printf("NO\n");
	}
}

	flag[x] = 1;
	if (dge[x] % 2 == 0)
		ans.push_back(x);
	for (int i = 0; i < edge[x].size(); i++)
	{
		int y = edge[x][i];
		dge[y]--;
		if (parent[x] == y || flag[y])
			continue;
		dfs2(y);
	}
*/