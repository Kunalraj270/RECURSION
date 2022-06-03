#include<bits/stdc++.h>
using namespace std;

void solve(int open , int close , string op){

    //Base condtion
    if(open == 0 && close == 0){
        cout<<op<<endl;
        return;
    }

    if(open != 0){
        string op1 = op;
       op1.push_back('(');
        solve(open-1 , close , op1);
    }

    if(close > open){
        string op2 = op;
        op2.push_back(')');
        solve(open , close - 1 , op2);

    }
}

// vector<string> balanceParenthesis(int n){
//     vector<string> v;
//     int open = n;
//     int close = n;
//     string op = "";
//     solve(open , close , op , v);
//     return v;
// }


int main(){
    int n;
    cin>>n;
    int open = n;
    int close = n;
    string op = "";
    solve(open , close , op );
}