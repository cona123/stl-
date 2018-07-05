#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <iostream>
#include <memory>
using namespace std;
int main()
{
	unique_ptr<int> a(new int(10));
	//unique_ptr<int> a = make_unique<int>(10);
	//unique_ptr<int> b(a);//wrong
	unique_ptr<int> b = move(a);//right
	cout << *b;
	
	shared_ptr<int>c = make_shared<int>(10);
	shared_ptr<int>d(c);
	cout << *c;
	cout << *d;

	cout << "done";
}