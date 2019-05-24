#include <cstdio>
#include<iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>/*
using namespace std;
int a[200010];
int b[200010];
long long int sum[200010];
int max1 = -1;
int max2 = -1;
int flag1,flag2;
int main() {
	int n,count=0;
	cin >> n;
	memset(sum, 0, sizeof(sum));
	memset(b, 0, sizeof(b));
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max1)
			max1 = a[i],flag1=i;
		sum[i] += (sum[i - 1] + a[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] > max2&&i != flag1)
			max2 = a[i],flag2=i;
	}
	for (int i = 1,j=1; i <= n; i++) {
		if (i!=flag1&&max1== sum[n] - a[i]-max1) {
			count++;
			b[j++] = i;
		}
		else if (i == flag1 && max2 == sum[n] - max1-max2) {
			count++;
			b[j++] = i;
		}
	}
	if (count) {
		cout << count << endl;
		for (int i = 1; b[i] != 0; i++) {
			cout << b[i] << " ";
		}
	}
	else
		cout << 0 << endl;
}*/