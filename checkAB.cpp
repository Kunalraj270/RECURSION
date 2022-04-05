#include<bits/stdc++.h>
using namespace std;

bool checkAB(char *input , int si){
    //Base case
    if(input[si] == '\0') return true;
    if(input[si] != 'a') return false;
    if(input[si+1] != '\0' && input[si+2] != '\0'){
        if(input[si+1] == 'b' && input[si+2] == 'b'){
            return checkAB(input , si + 3);
        }
    }

    return checkAB(input , si + 1);
}

bool check_AB(char *input){
    bool ans;
    ans = checkAB(input , 0);
    return ans;
}


int main(){  
    char input[1000];
    bool ans;
    cin>>input;
    ans = check_AB(input);
    if(ans) cout<<"True"<<endl;
    else
    cout<<"False"<<endl;

}