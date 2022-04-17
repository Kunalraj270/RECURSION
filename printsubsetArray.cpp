#include<bits/stdc++.h>
using namespace std;

void subsetArry(vector<int> input , vector<int> output){
    if(input.size() == 0){
        // sort(output.begin() , output.end());
        for(int i = 0; i < output.size(); i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }

    vector<int> output1 = output;
    vector<int> output2 = output;

    output2.push_back(input[0]);
    input.erase(input.begin() + 0);

    subsetArry(input , output1);
    subsetArry(input , output2);

    return;
}


int main(){
    vector<int> input = {15 , 20 , 12};

    vector<int> output ={};

    subsetArry(input , output);
}