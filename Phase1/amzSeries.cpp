#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=1,b=-2;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        cout<<b<<" ";
        a+=3;
        b+=(-4);
    }
    cout<<endl;
}