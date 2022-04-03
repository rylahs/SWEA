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
		priority_queue<int, vector<int>, less<>> pq;
		int n;
		cin >> n;
		vector<int> res;
		for (int i = 0; i < n; i++)
		{
			int cmd;
			cin >> cmd;
			
			switch (cmd)
			{
			case 1:
				int input;
				cin >> input;
				pq.emplace(input);
				break;
			case 2:
				if (pq.empty())
				{
					res.emplace_back(-1);
				}
				else
				{
					res.emplace_back(pq.top());
					pq.pop();
				}
				break;
			}
		}
		cout << "#" << t << " ";
		for (auto& e : res)
			cout << e << " ";
		cout << "\n";
	}

	return 0;
}