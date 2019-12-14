#include "StackType.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string reverse(string const &s)
{
	string rev;
	for (int i = s.size() - 1; i >= 0; i--) {
		rev = rev.append(1, s[i]);
	};

	return rev;
}

int main()
{
    StackType<string> stack;

    string str;
    getline(cin, str);

    istringstream iss(str);
    for(std::string x; iss >> x;) {
        stack.Push(x);
    }

    StackType<string> stack2;
    while(!stack.IsEmpty()){
        stack2.Push(stack.Top());
        stack.Pop();
    }

    while(!stack2.IsEmpty()){
        cout << reverse(stack2.Top()) << " ";
        stack2.Pop();
    }

    cout << endl;

    return 0;
}
