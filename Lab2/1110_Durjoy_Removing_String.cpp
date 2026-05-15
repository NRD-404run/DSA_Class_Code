#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int idx;
    cin >> idx;
    int len = strlen(a);
    for(int i=idx; i<len; i++)
    {
        a[i] = a[i+1];
    }
    cout << a ;
}