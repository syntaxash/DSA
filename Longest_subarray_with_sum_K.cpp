#include<bits/stdc++.h>
using namespace std;
int Longest_Subarray_with_Sum_K(vector<int> a , long long k){
    map<long long , int> preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<a.size();i++){
        sum=sum+a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len =i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return maxLen;
}
int main(){

    int n;
    cin>>n;
    
    int k;
    cin>>k;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<Longest_Subarray_with_Sum_K(a,k);

    return 0;
}