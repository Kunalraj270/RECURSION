#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void dToB(int n){
    int arr[32];
    int i = 0;
    while(n > 0){
        arr[i] = n % 2;
        n = n/2;
        i++;
    }


//    reverse(v.begin() , v.end());

   for(int j = i-1; j>=0; j--){
       cout<<arr[j]<<endl;
   }
}
int main(){
    int n;
    cin>>n;
    dToB(n);
}