#include<bits/stdc++.h>
using namespace std;

void solve(string input , string output , vector<string> &v){
    if(input.size() == 0){
        v.push_back(output);
        return;
    } 

    if(isalpha(input[0])){
        string output1 = output;
        string output2 = output;

        output1.push_back(tolower(input[0]));
        output2.push_back(toupper(input[0]));

        input.erase(input.begin() + 0);

        solve(input , output1 , v);
        solve(input , output2 , v);
    }else{
        string op1 = output;
        op1.push_back(input[0]);

        input.erase(input.begin() + 0);

        solve(input , op1 , v);
    }

    return;
}


int main(){
    string input;
    cin>>input;

    string output = "";

    vector<string> v;

    solve(input , output , v);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
}