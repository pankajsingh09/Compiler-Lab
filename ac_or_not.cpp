//WAP to check whether the entered string is accepted or not for a given grammar.

#include<bits/stdc++.h>
using namespace std;

char a[100];
int n,i;
 
int main()
 {
     cout<<"\n Enter String";
     cin>>a;
     n=strlen(a);

     if(a[0]=='a' && (a[n-1]=='a' || a[n-1]=='b') && a[n-2]=='c')
     {
         for(i=1;i<n-2;i++)
         {
             if(a[i]!='b')
             {
                 cout<<"\n string is not acceptable";
                 exit(0);
             }
         }
         cout<<"\n sting is acceptable";
     }
     else
     {
         cout<<"\n string is not acceptable";
     }
     
     return 0;
     
 }
