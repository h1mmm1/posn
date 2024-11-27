// LANG : C++
#include <bits/stdc++.h>
using namespace std;

vector<int> s;
bool visited[15];
bool vis_p[100];
bool vis_n[100];
int cnt;

void res(int k, int n) {
	if (k == 0) {
		cnt++;
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (visited[j] || vis_p[(n-k)+j] || vis_n[(n-k)-j+30]) continue;
		s.push_back(j);
		visited[j] = true;
		vis_p[(n-k)+j] = true;
		vis_n[(n-k)-j+30] = true;
		res(k-1,n);
		s.pop_back();
		visited[j] = false;
		vis_p[(n-k)+j] = false;
		vis_n[(n-k)-j+30] = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	res(n, n);
	cout << cnt;
}
