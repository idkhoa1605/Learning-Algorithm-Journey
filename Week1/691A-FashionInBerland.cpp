#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> jacket;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		jacket.push_back(tmp);
		if (tmp == 1)
			k++;
	}
	if (n == 1) {
		string res = jacket[0] ? "YES" : "NO";
		cout << res;
	}
	else
	if (k != n-1)
		cout << "NO";
	else
		cout << "YES";
}
