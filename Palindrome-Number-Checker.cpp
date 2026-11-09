#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cout<<"Enter Number:" && cin>>n)
    {
      int r=0,d;int o=n;
      while(n>0)
      {
        d=n%10;
        r=r*10+d;
        n/=10;

      }
      
      if(o==r && o>=0)
        {
          cout<< "Palindrome"<<endl;
        }
        else
        {
        cout<<"Not Palindrome"<<endl;
        }
     
    }
  return 0;
    
}