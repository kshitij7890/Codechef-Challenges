#include<bits/stdc++.h>
using namespace std;


bool is_special(int n)
{
    int prod=1;
     while(n>0)
    {
        prod*= n%10;
        n/=10;
    }

    if(prod==n)
    {
       return true;
    }
    else return false;
}

int main()
{
    int n;
    cin>>n;

    int special=0;
    int psp=0;

    if(is_special(n)==true){
        special++;
    }

    if(floor(log10(n)+1)==1  && is_special(n)==true)
    {
        cout<<"20";
    }

    else if(floor(log10(n)+1)==2  && is_special(n)==true && ((n/10)!=(n%10)))
    {
        cout<<"36";
    }

    else if(floor(log10(n)+1)==2  && is_special(n)==true && ((n/10)==(n%10)))
    {
        cout<<"18";
    }





    return 0;
}
