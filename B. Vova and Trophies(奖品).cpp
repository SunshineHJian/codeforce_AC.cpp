#include <cstdio>
#include <iostream>
using namespace std;
char a[200000 + 10];/*
int main() {
	int n,m=0,front,end=0,max=0,flag=0;
	cin >> n;
	scanf("%s", a);
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == 'G')
			m++;
		else
		{
			front = i;
			for (i++; i < n; i++) {
				if (a[i] == 'S')
				{
					flag = 1, end = i;
					break;
				}
			}
			for (i++; i < n; i++) {
				if (flag == 1 && a[i] == 'G')
					flag = 2;
			}
			if (flag == 0)
			{
				m += (n - front-1);
				if (m > max)
					max = m;
				i = front - 1;
				m = 0;
				goto entry;
			}
			else if (flag == 1) {
				m += (end - front-1);
				if (m > max)
					max = m;
				i = front - 1;
				m = 0;
				goto entry;
			}
			else if (flag == 2) {
				m += (end - front);
				if (m > max)
					max = m;
				i = front-1;
				m = 0;
				goto entry;
			}
		}
	entry:
		flag = 0;
	}
	if (m > max)
		max = m;
	cout << max<< endl;
}*/