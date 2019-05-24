#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;/*
#define maxsize 100005
#define mod 998244353
int a[maxsize];
long long int dp[maxsize][205][3];//动规状态三维
//dp[i][j][0/1/2] 第i个确定为j，dp[i-1]比它小/等于/大的可能总数
int main()
{
	memset(dp, 0, sizeof(dp));
	int n;
	long long sum;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i=1; i<=200; i++)
	{
		if (a[1] == -1 || a[1] == i)
			dp[1][i][0] = 1;
	}
	for (int i=2; i<=n;i++)
	{
		for (int j = 1; j <= 200; j++)
		{
			if (a[i] == -1 || a[i] == j)
				dp[i][j][1] = (dp[i-1][j][0] + dp[i-1][j][1] + dp[i-1][j][2])%mod;
		}
		sum = 0;
		for (int j = 1; j <= 200; j++)
		{
			if (a[i] == -1 || a[i] == j)
				dp[i][j][0] = sum;
			sum += (dp[i-1][j][0] + dp[i-1][j][1] + dp[i-1][j][2])%mod;
		}
		sum = 0;
		for (int j = 200; j >=1; j--)
		{
			if (a[i] == -1 || a[i] == j)
				dp[i][j][2] = sum;
			sum += (dp[i-1][j][1] + dp[i-1][j][2])%mod;
		}
	}
	sum = 0;
	for (int i = 1; i <= 200; i++)
		sum =(sum+ (dp[n][i][1] + dp[n][i][2]))%mod;
	cout << sum << endl;
	return 0;
}*/