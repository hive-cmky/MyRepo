/*The modulo - %% function is helpful whenever we want to check the divisibility of 2 numbers.
Task

There are multiple test cases denoted by the integer TT.
You are given 2 integers - AA and BB.
For each test case, you need to output the following 2 space separated integers on a single line

    The quotient when AA is divided by BB - i.e. A/BA/B
    The remainder when AA is divided by BB - i.e. A%BA%B

Go ahead and code out the solution in the IDE.

4
10 5
11 5
14 5
15 5

2 0
2 1
2 4
3 0

Explanation:

% function gives us the output 00 only when AA is divisible by BB*/

// Update the blanks in the code below to solve the problem
/*#include<bits/stdc++.h>*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A, B;
	    cin >> A >> B;
	    cout << A / B <<" "<< A % B <<endl;
	}
	return 0;
}
