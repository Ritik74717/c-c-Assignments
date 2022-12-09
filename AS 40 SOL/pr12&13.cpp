#include<iostream>
#include<deque>
using namespace std;
string backspace(string s)
{
    deque<char> dq;
    int i;
    for(i=0;i<s.length();++i)
    {
        if(s[i]!='#')
        {
            dq.push_back(s[i]);

        }
        else if(!dq.empty())
        {
            dq.pop_back();
        }
    }
    string ans = " ";
    while(!dq.empty())
    {
        ans=ans+dq.front();
        dq.pop_front();
    }
    return ans;
}
int main()
{
    string s1 = "abc#de#f#ghi#jklmn#op#";
    cout<<backspace(s1);

    return 0;
}
