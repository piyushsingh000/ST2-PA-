//Name:-Piyush Singh
//Roll No:-2010991969
//Set:-05
//Q1 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
   int ans[n];
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int target;
    cin>>target;
    int s1=0;
    int s2=0;
    int sum=0;
    int maxi=INT_MIN;

    while(s2<n){
        sum+=ans[s2];
        if(sum<target){
            s2++;
        }
        else if(sum==target){
            maxi=max(maxi,s2-s1+1);
            s2++;
        }
        else if(sum>target){
            while(sum>target){
                sum-=ans[s1];
                s1++;
            }
            if(sum==target){
                maxi=max(maxi,s2-s1+1);
            }
            s2++;
        }
    }
    cout<<maxi;
}