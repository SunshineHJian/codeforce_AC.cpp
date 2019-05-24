#include <cstdio>
#include<iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <algorithm>/*
using namespace std;

int a[2000100];
int flag[200100];

struct fl  {
	int value;
	int num;
};
struct fl flag2[200100];
bool comp(fl a, fl b)
{
	return a.value > b.value;
}
int main() {
	int n, k;
	cin >> n >> k;
	int maxn=-1, at[20001];
	memset(flag, 0, sizeof(flag));
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		flag[a[i]]++;
	}
	int i,ll=0;
	for (int j = k; j > 0; j--) {
		for (i = 1; i <= n; i++) {
			if (flag[i] > maxn) {
				maxn = flag[i];
				at[ll] = i;
			}
		}
		ll++;
		flag2[ll - 1].value = flag[at[ll - 1]];
		flag2[ll - 1].num = at[ll - 1];
		flag[at[ll - 1]] = 0, maxn = -1;
	}
	sort(flag2, flag2 + k, comp);
	while (1) {
		if (flag2[0].value > 2 * flag2[k - 1].value)
		{
			if (k > 2) {
				flag2[k - 1].value = flag2[k - 2].value;
				flag2[0].value -= flag2[k - 1].value;
				flag2[k - 1].num = flag2[0].num;
				sort(flag2, flag2 + k, comp);
			}
			else
			{
				flag2[1].num = flag2[0].num;
				break;
			}
			
		}
		else
			break;

	}
	for (int j = 0; j < k; j++) {
		cout << flag2[j].num << " ";
	}
	
	
}*/