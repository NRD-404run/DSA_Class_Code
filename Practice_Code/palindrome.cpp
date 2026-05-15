#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,temp,rem,sum=0;
    cin >> num;
    temp = num;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum*10 + rem;
        temp = temp/10;
    }

    if(num == sum){
        cout << "Palindrome Number";
    }else{
        cout << "Not Palindrome Number";
    }
}