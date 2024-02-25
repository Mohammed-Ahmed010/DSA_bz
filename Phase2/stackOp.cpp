#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
    int t;
    cin>>t;
    while(t--){
        stack<int>st;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x;
            if(x==0){
                cin>>y;
                st.push(y);
            }else{
                if(st.empty()){
                    cout<<-1<<" ";
                }else{
                cout<<st.top()<<" ";
                st.pop(); 
                }
            }
              
            
        }
        cout<<"\n";
        
        
    }
    return 0;
}