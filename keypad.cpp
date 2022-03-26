#include<bits/stdc++.h>
using namespace std;

string keys(int n){
    string key[] = {"abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    return key[n-2];
}

int keypad(int n , string *output){
    //Base case
    if(n==0){
        output[0] = "";
        return 1;
    }
    
    int lastDigit = n % 10;
    int smallNumber = n / 10;

    int smallOutputSize  = keypad(smallNumber , output);
    string options = keys(lastDigit);

    // Creating copies 
    for(int i = 0; i < options.size() - 1; i++){
        for(int j = 0; j < smallOutputSize; j++){
            output[j + (i + 1) * smallOutputSize] = output[j];
        }
    }

    // attach last digit in every copies
    int k = 0;
    for(int i = 0; i < options.size(); i++){
        for(int j = 0; j < smallOutputSize; j++){
            output[k] = output[k] + options[i];
            k++;
        }
    }

    return smallOutputSize * options.size();

}

int main(){
    int n;
    cin>>n;
    string output[10000];
    int count = keypad(n , output);
    for(int i = 0; i < count; i++){
        cout<<output[i]<<endl;
    }


}