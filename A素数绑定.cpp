#include <cstdio>
#include<iostream>
#include <cmath>
#include <algorithm>/*
bool IsprimeNumber(int value) {
	if (value < 2)
		return false;
	int len = (int)sqrt(value);
	for (int i = 2; i <= len; i++) {
		if (value%i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n, m,value,i;
	while (~scanf("%d%d", &n, &m) && (n||m)) {
		for (i = n; i <= m; i++) {
			value = i * i + i + 41;
			if (!IsprimeNumber(value))
			{
				printf("Sorry\n");
				break;
				
			}
		}
		if(i==m+1)
			printf("OK\n");
	}
	return 0;
}*/