#include<bits/stdc++.h>
using namespace std;

void candies(int a[], int n, int k){
    bool b[n];
    int maxele = INT_MIN;
    for(int i=0;i<n;i++){

        if(a[i]>maxele){
            maxele =  a[i];
        }

    }

    for(int i=0;i<n;i++){
        if(a[i]+k>=maxele){
            b[i] = true;
        }
        else{
            b[i] = false;
        }
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter extra candies: ";
    cin>>k;
    candies(a,n,k);
}