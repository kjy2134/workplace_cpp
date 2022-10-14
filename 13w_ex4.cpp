#include <iostream>
#include<set>
#include<string>

using namespace std;
int main() {
	string names[] = { "jiu", "arer","dfe","wrw","etw" };
	set<string, less<string>> nameset(names, names + 5);
	set<string, less<string>> ::iterator iter;
	nameset.insert("tett");
	nameset.insert("12124");
	nameset.insert("hhhhhr");
	nameset.insert("garty");
	nameset.insert("eedd");
	nameset.erase("arer");
	cout << " /n Size=" << nameset.size() << endl;
	iter = nameset.begin();
	while (iter != nameset.end())
		cout << *iter++ << '\n';
	string searchname;
	cout << "\nenter name:"; cin >> searchname;
	iter = nameset.find(searchname);
	if (iter == nameset.end())
		cout << "the name" << searchname << " in not in the set";
	else
		cout << "the name" << *iter << "is in the set";
	return 0;
}

