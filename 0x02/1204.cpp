// 0x02. Difficulty Level 2
// Written by : Rylah
// Date : 2022.01.31
// 1204. [S/W 문제해결 기본] 1일차 - 최빈수 구하기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV13zo1KAAACFAYh

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int testCase;
	cin >> testCase;
	int arr[101];
	for (int t = 1; t <= testCase; t++)
	{
		fill(arr, arr + 101, 0);
		int testCaseNum;
		cin >> testCaseNum;

		for (int i = 0; i < 1000; i++)
		{
			int a;
			cin >> a;
			arr[a]++;
		}
		int maxV = -1;
		int idx;
		for (int i = 0; i < 101; i++)
		{
			if (maxV < arr[i])
			{
				maxV = arr[i];
				idx = i;
			}
			if (maxV == arr[i])
			{
				if (idx < i)
					idx = i;
			}
		}

		cout << "#" << testCaseNum << " " << idx << "\n";

	}
	return 0;
}