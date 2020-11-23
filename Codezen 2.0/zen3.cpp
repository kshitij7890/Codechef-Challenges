#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool isvow(char c)
{
    return (c == 'A') || (c == 'E') ||
           (c == 'I') || (c == 'O') ||
           (c == 'U');
}

int main()
{
	string s;
	cin>>s;
	int flag1=0,flag2=0;

	for(int i=0;i<s.length();i++)
    {
        if(isvow(s[i])==true && isvow(s[i+1])==true && isvow(s[i+2])==true)
        {
            flag1=1;
            break;
        }

    }
    unordered_set<char>ch;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(isvow(s[i])==false)
        {
            count++;
            ch.insert(s[i]);
        }
    }
    if(count>=5){
        flag2=1;
    }

    if(flag1==1 && flag2==1)
    {
        cout<<"GOOD"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

	return 0;
}
