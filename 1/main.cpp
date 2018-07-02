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
//	sort(strs.begin(), strs.end(), less<string>());//functional head,less is <,greater is >
//	stable_sort(strs.begin(), strs.end(), less<string>());//like sort, but stable_sort preserves the relative order of the elements with equivalent values.
	sort(strs.begin(), strs.end(), [](const string& a,const string& b)//lambda ,compare by other type
	{
		return a.size() < b.size();
	});
	for (auto str:strs)
	{
		cout << str << endl;
	}
	int l;
	cin >> l;
}