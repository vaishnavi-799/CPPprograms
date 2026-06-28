// 
#include <bits/stdc++.h>
using namespace std;
int MaxOfSubArray(vector<int> v)
{
    int ans,sum;
    ans=sum=v[0];
    for(int i=1;i<v.size();i++)
    {
        sum=max(v[i],v[i]+sum);
        ans=max(sum,ans);
    }
    
    return ans;
}
int MaxOfProdtSubArray(vector<int> v)
{
    int ans,maxx,minn;
    ans=maxx=minn=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<0) swap(minn,maxx);
        maxx=max(v[i],v[i]*maxx);
        minn=min(v[i],v[i]*minn);
        ans=max(maxx,ans);
    }
    
    return ans;
}
int main() {
    vector<int> v={2, 3, -2, 4};
    
    cout<<MaxOfProdtSubArray(v);

    return 0;
}