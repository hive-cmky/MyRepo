/*Chef has recently started playing chess.
He completes a game of chess in 30 minutes.
Chef has a total of NN minutes of available time

    He will utilise the maximum possible time to play
    He will not plan incomplete games - if there is insufficient time remaining to play a game, he will not play the game

How many complete games with Chef be able to play and how much spare time will remain?
Go ahead and code out the solution in the IDE.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of the integer NN

Output Format

For each test case, output on a new line 22 space separated integers

    Total games played by Chef
    Total spare time in minutes

Sample 1:
Input
Output

2
100
90

3 10
3 0*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    //your code goes here

    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int total_game = N / 30;
        int remaining_time = N % 30;
        cout << total_game << " " << remaining_time << endl;


    }
}