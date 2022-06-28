
// SOHAM K 28 june 2022
#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
const int N=1e3;
char a[N][N];
bool vis[N][N];
int n,m;
ll temp;

void dfs(int i,int j){
    if(i<0||j<0||i>=n||j>=m||a[i][j]!='#') return;
a[i][j]='*';
temp++;

int dr[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
for(int k=0;k<4;k++){
    int cx=i+dr[k][0];
    int cy=j+dr[k][1];
    dfs(cx,cy);
}

}
int main(){
int tt;
cin>>tt;
while(tt--){
    //int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#'){
                    temp=0;
                dfs(i,j);
            ans+=temp*temp;
            }
        }
    }
 if(ans==0) cout<<0<<endl;
 else if((ans)%(n*m)==0) cout<<ans/(m*n)<<endl;
 else {
    cout<<ans/__gcd(ans,(ll)(n*m))<<" / "<<(ll)n*m/__gcd(ans,(ll)(n*m))<<endl;
 }


}
}