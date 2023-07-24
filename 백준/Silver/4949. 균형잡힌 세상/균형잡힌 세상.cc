#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string s) {
    stack<char> myStack;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '[') {
            myStack.push(s[i]);
        } else if (s[i] == ')' || s[i] == ']') {
            if (myStack.empty()) {
                return false;
            }

            if (s[i] == ')') {
                if (myStack.top() != '(') {
                    return false;
                } else {
                    myStack.pop();
                }
            } else if (s[i] == ']') {
                if (myStack.top() != '[') {
                    return false;
                } else {
                    myStack.pop();
                }
            }
        }
    }

    return myStack.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    while (true) {
        getline(cin, s);
        if (s == ".") 
            break;

        if (isBalanced(s)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }

    return 0;
}
