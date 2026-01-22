#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int check=-1,manhattan;
        vector<int>ans(2,-1);
        for(int i=0;i<towers.size();i++){
            manhattan=abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]);
            if(manhattan<=radius&&towers[i][2]>=check){
            if(towers[i][2]>check){
                ans[0]=towers[i][0];
                ans[1]=towers[i][1];
                check=towers[i][2];
            }
            else if((towers[i][0]<ans[0]||towers[i][0]==ans[0]&&towers[i][1]<ans[1])){
                ans[0]=towers[i][0],ans[1]=towers[i][1];
            }
        }
        }
        return ans;
    }
int main(){
vector<vector<int>>a={{1,3,4},{2,2,3},{4,4,7}};
vector<int>c={0,0};
int radius=5;
vector<int>ans=bestTower(a,c,radius);
for(int val:ans){
    cout<<val;
}
}