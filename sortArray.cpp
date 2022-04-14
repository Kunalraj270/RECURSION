#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v , int temp){
    // Base case
    if(v.size() == 0 || v[v.size() - 1] <= temp){
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();

    insert(v , temp);
    v.push_back(val);
    return;
}
void sort(vector<int> &v){
    // Base case
    if(v.size() == 1){
        return;
    }

    int temp = v[v.size() - 1];
    v.pop_back();

    sort(v);

    insert(v , temp);

}
int main(){
    vector<int> v = {2,3,7,6,4,5,9};
    sort(v);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}