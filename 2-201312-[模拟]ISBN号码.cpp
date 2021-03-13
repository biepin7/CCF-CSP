#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int last =0;

    for(int i=0,j=1;i<s.size()-1;i++)
    {
        if(s[i]!='-') {last+=(s[i]-'0')*j++;}
        
    }

    last%=11;
    char c = last+'0';
    if(last==10) c='X';


    if(s.back()==c) cout<<"Right";
    else{
        s.back()=c;
        cout<<s;
    }



    return 0;
}    