#include<bits/stdc++.h>
using namespace std;
int subs(string input ,  string *output){
    // base case
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int outputSize  = subs(smallString , output);

    for(int i = 0; i < outputSize; i++){
        output[i + outputSize] = input[0] + output[i];
    }

    return 2*outputSize;

}

int main(){
    string input;
    cin>>input;
    int size = pow(2 , input.size());
    string *output  = new string[size];
    int count = subs(input , output);
    for(int i = 0; i < count; i++){
        cout<<output[i]<<endl;
    }
}