#include<bits/stdc++.h>
using namespace std;
{
string ans="";
int i=str1.size()-1;
int j=str2.size()-1;
int carry=0;
while(i>=0||j>=0||carry)
{
carry +=((i>=0)?(str1[i--]-'0'):
(o));
carry+=((j>=0)?(str2[j--]-'0'):
(0));
ans=char('0'+(carry%2))+
ans;
carry=carry/2;
}
return ans;
}
int main()
{
string str1="1100011";
string str2="10";
count<<"sum is"<<addBitStrings(str1,str2);
return 0;
}
