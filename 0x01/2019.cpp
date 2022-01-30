// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2019. 더블더블
// https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QDEX6AqwDFAUq&categoryId=AV5QDEX6AqwDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a = 1;
	for (int i = 0; i < n + 1; i++)
	{
		cout << a << " ";
		a *= 2;
	}

	return 0;
}