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
		string scoreBoard;
		cin >> scoreBoard;
		int totalCnt = scoreBoard.length();

		int winCnt = 0;
		for (int i = 0; i < totalCnt; i++)
		{
			if (scoreBoard[i] == 'o')
				winCnt++;
		}

		int remainGame = 15 - totalCnt;
		cout << "#" << t << " ";
		if (remainGame + winCnt >= 8)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
		
		
		
	}

	return 0;
}