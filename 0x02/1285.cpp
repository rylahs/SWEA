// 0x02. Difficulty Level 2
// Written by : Rylah
// Date : 2022.01.31
// 1285. 아름이의 돌 던지기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV18-stqI8oCFAZN

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	int arr[100001];
	for (int t = 1; t <= testCase; t++)
	{
		fill(arr, arr + 100001, 0);
		int n;
		cin >> n;
		while (n--)
		{
			int a;
			cin >> a;
			if (a < 0) a *= -1;
			arr[a]++;
		}
		int idx = 0;
		for (int i = 0; i < 100001; i++)
		{
			if (arr[i] != 0)
			{
				idx = i;
				break;
			}
		}


		cout << "#" << t << " " << idx << " " << arr[idx] << "\n";

	}
	return 0;
}