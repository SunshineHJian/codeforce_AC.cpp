#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<cmath>/*
long long int a[1000010];
using namespace std;
int main() {
	int n,k,i=0,count=0,j;
	scanf("%d", &n);
	while (1) {
		k = sqrt(n);
		if (k*k == n) {
			n = k;
			count++;
		}
		else
			for (i = 2; i < n; i++) {
				j = n * i;
				k = sqrt(j);
				if (k*k == j) {
					n = k;
					count+=2;
					break;
				}
			}
		if (i == n) {
			cout << n << " " << count << endl;
			return 0;
		}
	}
	
}*/