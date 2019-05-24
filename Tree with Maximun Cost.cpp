#include <cstdio>
#include <vector>
using namespace std;/*

#define MAX_N 200000 + 1

int n;
long long int a[MAX_N];
vector<int> e[MAX_N];

long long int f[MAX_N];
long long tree_sum[MAX_N];
long long tree_max[MAX_N];
long long make_tree(int u, int deep) {
	long long res = a[u] * deep;
	tree_sum[u] = a[u];
	for (int v : e[u]) {
		if (v != f[u]) {
			f[v] = u;
			res += make_tree(v, deep + 1);
			tree_sum[u] += tree_sum[v];
		}
	}
	return res;

}

long long ans=0;

void Cal_ans(int u,long long cal_ans) {
	for (int v : e[u]) {
		if (v != f[u]) {
			//if (cal_ans > ans)
				//ans = cal_ans;
			tree_max[v] = cal_ans + tree_sum[1] - tree_sum[v] * 2;
			Cal_ans(v, tree_max[v]);
		}
	}
}
long long judgemax() {
	for (int i = 1; i <= n; ++i) {
		if (tree_max[i] > ans)
			ans = tree_max[i];
	}
	return ans;
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n - 1; ++i) {
		int u, v;
		scanf("%d%d", &u, &v);
		e[u].push_back(v);
		e[v].push_back(u);
	}
	for (int i = 1; i <= n; ++i) {
		
	}
	f[1] = 0;
	tree_max[1]= make_tree(1, 0);
	Cal_ans(1,tree_max[1]);
	ans = judgemax();
	printf("%lld", ans);
	return 0;
}*/
