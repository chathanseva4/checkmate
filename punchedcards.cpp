#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,t1t;
    cin>>t;
    int x=t;
    while(t--){
        int r,c;
        cin>>r>>c;
        r=r*2+1;
        c=c*2+1;
        cout<<"Case #"<<x-t<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                // cout<<"|"<<" "<<". ";
                if(i==0 && j==0 || i==0 && j==1 || i==1 && j==0 ) cout<<".";
                else if(i%2==0){
                    
                    if(j%2==0)cout<<"+";
                    else cout<<"-";
                }
                else{
                    if(j%2==0) cout<<"|"; 
                    else cout<<".";
                }
            }
            cout<<endl;
        }
    }
}
