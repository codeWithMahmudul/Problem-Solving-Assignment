

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Assignment problem 2
// Time Complexity: O(n)
// Space Complexity: O(n)
bool isPalindromeCheck(string str, int s, int e){
    if(s>=e) return true;
    if(str[s] != str[e]) return false;
    return isPalindromeCheck(str, s+1, e-1);
}

bool isPalindrome(string s){
    return isPalindromeCheck(s, 0, s.length() - 1);
}


// Assignment problem 2
// Time Complexity: O(b)
// Space Complexity: O(1)
int multiplication(int a, int b){
    if(a == 0 && b==0) return 0;
    if(b==0) return 0;

    return a + multiplication(a, b-1);
}



int main()
{
    cout << multiplication(5, 5) << endl;

    string s = "madam";

    cout << (isPalindrome(s) ? "true" : "false") << endl;
}