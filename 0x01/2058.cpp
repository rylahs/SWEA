// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2058. �ڸ��� ���ϱ�
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPRjqA10DFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	
	cout << sum;
	return 0;
}