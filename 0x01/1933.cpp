// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 1933. 간단한 N의 약수
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PhcWaAKIDFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
	return 0;
}