#include <bits/stdc++.h>/*
using namespace std;
#define maxn 100010
char s[maxn];
int Map[maxn];
int main() {
	memset(s, '\0', sizeof(s));
	memset(Map, 0, sizeof(Map));
	int n, m;
	cin >> n >> m;
	int flag = n;
	int difficult;
	for (int i = 0; i < m; i++) {
		scanf("%d", &difficult);
		Map[difficult]++;
		if (Map[difficult] == 1) {
			flag--;
			if (flag == 0) {
				s[i] = '1';
				for (int i = 1; i <= n; i++) {
					
					Map[i]--;
					if (Map[i] == 0)
						flag++;
				}
					
			}
			else
				s[i] = '0';
		}
		else
			s[i] = '0';
	}
	s[m] = '\0';
	cout << s << endl;


}*/