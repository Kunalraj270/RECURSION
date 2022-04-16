#include<bits/stdc++.h>
using namespace std;
void subset(string input , string output){
    if(input.size() == 0){
        cout<<output<<endl;
        return;
    }

    string output1 = output;

    string output2 = output;

    output2.push_back(input[0]);

    input.erase(input.begin() + 0);

    subset(input , output1);
    subset(input , output2);
    
    return;

}


int main(){

    subset("ab" , " ");

}