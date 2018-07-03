#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	vector<string> strs;
	strs.push_back("A011");
	strs.push_back("B02");
	strs.push_back("A051");
	strs.push_back("A02");
	strs.erase(remove_if(strs.begin(), strs.end(), [](const string& str)
	{
		auto it = str.find('A');
		if (it!=string::npos)
		{
			return true;
		}
		else
		{
			return false;
		}
	}),strs.end());
	for (auto str:strs)
	{
		cout << str << endl;
	}
}