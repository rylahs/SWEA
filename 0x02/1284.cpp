// 0x02. Difficulty Level 2
// Written by : Rylah
// Date : 2022.01.31
// 1284. 수도 요금 경쟁
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV189xUaI8UCFAZN

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >> W;
		int a_price = P * W;
		int b_price = 0;
		if (R >= W)
			b_price = Q;
		else
			b_price = Q + (W - R) * S;

		int min_water = 10001;
		min_water = min(a_price, b_price);

		cout << "#" << t << " " << min_water << "\n";

	}
	return 0;
}