#include<bits/stdc++.h>
using namespace std;
vector<int> nextsmallerelement(vector<int> &arr,int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);     //declaration of array where answer is going to stored

    for(i = n-1; i>=0; i--)
    {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
    }
}