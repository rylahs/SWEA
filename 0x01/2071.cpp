// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2071. 평균값 구하기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QRnJqA5cDFAUq

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
		vector<int> v;
		for (int i = 0; i < 10; i++)
		{
			int a;
			cin >> a;
			v.emplace_back(a);
		}
		int result = accumulate(v.begin(), v.end(), 0) / 10;
		if (accumulate(v.begin(), v.end(), 0) % 10 > 5)
			result++;

		cout << "#" << t << " " << result << "\n";
	}

	return 0;
}