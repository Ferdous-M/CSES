//not accepted because of not using dp properly

#include <bits/stdc++.h>
using namespace std;

const int N=1e6;
int dp[N];
bool already_counted[N];


int f(int n){
    if(n<0)return 0;
    if(n==0)return 1;
    if(already_counted[n]){
        return dp[n];
    }
    dp[n]=f(n-1)+f(n-2)+f(n-3)+f(n-4)+f(n-5)+f(n-6);
    already_counted[n]=true;
    return dp[n];
    
}

int main()
{
    int n;cin>>n;
    cout<<f(n)<<endl;

    return 0;
}
