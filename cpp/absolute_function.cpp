/*Chef and Chefina both love chocolates.
Chef's parents gave him AA chocolates out of a total of NN chocolates.
The remaining chocolates were given to Chefina.
What was the difference between the count of chocolates received by Chef and Chefina?
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case contains 2 space separated integers - NN and AA

Output Format

For each test case, output on a new line the the difference between the count of chocolates received by Chef and Chefina.
Sample 1:
Input
Output

2
100 90
40 10

80
20

Explanation:

Test case 1: Chef received 90 Chocolates. Chefina will get 10 chocolates.
Hence the difference of the chocolates received is 80.

Test case 2: Chef received 10 Chocolates. Chefina will get 30 chocolates.
Hence the difference of the chocolates received is 20.*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int N, A;
        cin >> N >> A;
        int chocolate_chef_received = A;
        int chocolate_chefina_received = N - A;
        int diff = abs(chocolate_chef_received - chocolate_chefina_received);
        cout << diff << endl;
    }
    return 0;
}