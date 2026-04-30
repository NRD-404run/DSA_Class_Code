#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a = new int[n+2];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int idx1,idx2,val1,val2;
    cin >> idx1 >> val1;
    cin >> idx2 >> val2;
    for(int i=n; i>=idx1+1; i--)
    {
        a[i] = a[i-1];
    }
    a[idx1]=val1;
    for(int i=n+1; i>=idx2+1; i--)
    {
        a[i] = a[i-1];
    }
    a[idx2] = val2;
    for(int i=0; i<n+2; i++)
    {
        cout << a[i] << " ";
    }
    delete[] a;
}
