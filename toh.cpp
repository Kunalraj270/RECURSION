#include<bits/stdc++.h>
using namespace std;

void toh(int n , char source , char helper , char destination){
    if(n == 0){
        return;
    }

    toh(n-1 , source , destination , helper );
    cout<<source<<" "<<destination<<endl;
    toh(n-1 , helper , source , destination );
    return;
}

int main(){
    int n;
    cin>>n;

    toh(n , 'a' , 'b' , 'c');
}