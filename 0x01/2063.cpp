// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2063. 중간값 찾기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPsXKA2UDFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[200] = { 0, };

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + 200);

	cout << arr[n / 2 + 1] << "\n";
	
	return 0;
}