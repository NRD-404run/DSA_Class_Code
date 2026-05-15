#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.length()-1; i++){
        int min = i;
        for(int j = i+1; j<s.length(); j++)
        {
            if(s[j] < s[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = s[i];
            s[i] = s[min];
            s[min] = temp;
        }
    }

    int j=0;
    for(int i=1; i<s.length(); i++){
        if(s[i] != s[j]){
            j++;
            s[j] = s[i];
        }
    }

    for(int i=0; i<=j; i++){
        cout << s[i] <<" ";   
    }

    
    
}