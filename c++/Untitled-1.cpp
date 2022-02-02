#include <bits/stdc++.h>
using namespace std;

int main(){
     int t,mid,start,end,ar[100],target ;
     cin >>t;
     while(t--){
     start=0;     
     cin >>end;
     for(int i=0;i<end;i++){
          cin >>ar[i];     
     }     
     cin >>target;
     
        while(start<=end){
          mid = start+(end-start)/2 ;
          if(ar[mid]==target){
               cout<<"Found";
               return 0;     
          }
          else if(ar[mid]>target)
               start++;
          else 
               end--;
          }
          cout<<"Not Found";
     }
     return 0;
}