#include<iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
struct mout {
	int height;
	int wid;
	int flag;
	
};

int T, n, m;
vector <struct mout> vec[1005];
queue <struct mout> que;
int high[100005];
int road[100005];
int countn;
int a, b, k;
struct mout t;
int flag = 0;

void dfs(int nn) {

	if (flag == 1) return;
	countn++;
	road[countn] = high[nn];
	for (struct mout &u:vec[nn]) {
		if (flag == 1) return;
		if (u.flag == 0) continue;
		u.flag = 0;
		struct mout g;
		for (struct mout &f :vec[u.wid]) {
			if (f.wid == nn) {
				f.flag = 0;
				g = f;
				break;
			}
		}
		if (u.wid == b) {
			flag = 1;
			return;
		}
		else {
			dfs(u.wid);
			if (flag == 0) {
				countn--;
				u.flag = 1;
				g.flag = 1;
			}
			else {
				u.flag = 1;
				g.flag = 1;
			}
			
			
		}
	}
}
int main() {
	cin >> T;

	while (T--) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &high[i]);
		}
		for (int i = 1; i <= n - 1; i++) {
			scanf("%d%d", &a, &b);
			t.height = high[b];
			t.wid = b;
			t.flag = 1;
			vec[a].push_back(t);
			t.height = high[a];
			t.wid = a;
			t.flag = 1;
			vec[b].push_back(t);
		}
		for (int i = 1; i <= m; i++) {

			scanf("%d%d%d", &a, &b, &k);
			countn = 0, flag = 0;
			dfs(a);
			sort(road + 1, road + countn + 1);
			cout << road[k] << endl;
			
		}

	}
}