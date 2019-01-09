// https://www.codechef.com/problems/CAMPON

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int d;
        cin>>d;
        int di[100],pi[100];
        for(int i=0;i<d;i++){
            cin>>di[i]>>pi[i];
        }
        int q,req,ded;
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>ded>>req;
            int sum=0;
            for(int i=0;i<d;i++){
                if(di[i]<=ded)
                    sum+=pi[i];
                else break;
            }
            if(sum>=req) cout<<"Go Camp\n";
            else cout<<"Go Sleep\n";
        }
    }

    return 0;
}
