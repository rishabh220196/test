#include<iostream>
using namespace std;

int main()
{
int n=121,p,m=0,s;
p=n;
while(n>0)
{
s=n%10;
m=m*10+s;
n=n/10;
}
if(m==p)
cout<<"Number is palindrome";
else
cout<<"Number is not palindrome";
return 0;
}
