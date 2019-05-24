#include <cstdio>
#include<iostream>
#include <algorithm>/*
using namespace std;
long long sum = 0;
int a[20010];
void Calculate(int n)
{
	int weight;
	printf("请输入%d个需要木板的长度: ", n);
	for (int i = 0; i < n; i++)   
	{
		scanf("%d", &weight);
		a[i] = weight;
	}
	sort(a, a + n);
	for (int i=0; i < n-1; i++)
	{
		sum += a[i]+a[i+1];
		a[i +1] = a[i] + a[i+1];
		sort(a +i+1, a +n);
		
	}
}
int main() {
	memset(a, 0, sizeof(a));
	int n;
	printf("请输入需要木板的数量N：");
	scanf("%d", &n);
	Calculate(n);
	printf("最少需要的钱为：%lld美分\n", sum);
}*/
