#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int idx,val;
    cin >> idx >> val;
     
    for(int i=n; i>=idx+1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[idx] = val;

    for(int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }


}