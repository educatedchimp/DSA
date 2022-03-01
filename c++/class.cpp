#include <bits/stdc++.h>
using namespace std;

bool isPossible(int ar[],int mid,int n,int m){
    int count =1,pages=0;
    for(int i=0;i<n;i++){
        if(pages+ar[i]>mid){
            pages=ar[i];
            count++;
            if(count>m)
                return 0;    
        }
        else pages+=ar[i];

    }   
    return true;
}

int main(){
    int n,m,total=0,ans=0;
    cin >>n >>m;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >>ar[i];
        total+=ar[i];
    }
    int low=0,high=total,mid=0;
    while(low<=high){
        mid =(low+high)/2;
        if(isPossible(ar,mid,n,m)){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout <<ans;
    return 0;
}