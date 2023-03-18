#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string expr;
    
    while (cin >> expr) {
        stack<char> s;
        
        for (auto c : expr) {
            if (c != '(' && c != ')') {
                continue;
            }
            if (s.empty()) {
                s.push(c);
            } 
            else if (c == ')' && s.top() == '(') {
                s.pop();
            }
            else {
                s.push(c);
            }
        }
        
        if (s.empty()) {
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }
 
    return 0;
}
