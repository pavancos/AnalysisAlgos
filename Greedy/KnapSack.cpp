#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void GreedyKnapSack(int n,int m, vector<int>& p,vector<int>& w,vector<int>& x){
    vector<float>r;
    for(int i=0;i<n;i++)
        r.push_back((float)(p[i]/w[i]));
    for(int i=0;i<n;i++){
        
    }
}

int main(){
    int n=3;
    int m=20;
    vector<int>P={25,24,15};
    vector<int>W={18,15,20};
    vector<int>X={0,0,0};
    GreedyKnapSack(n,m,P,W,X);

}