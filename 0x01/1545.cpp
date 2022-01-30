// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 1545. 거꾸로 출력해보아요
// https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV2gbY0qAAQBBAS0&categoryId=AV2gbY0qAAQBBAS0&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	while (n > -1)
	{
		cout << n << " ";
		n--;
	}
	
	return 0;
}