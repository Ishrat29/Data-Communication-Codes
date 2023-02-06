/*--- 1. Write a program to implement a CRC (Cyclic Redundancy Code) error detection model. ---*/
/*---Sender part---*/
#include<bits/stdc++.h>
#define ll long long int
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
  string crc, data, code="";
  cout<<"Enter Dataword=";
  cin>>data;
  cout<<"enter CRC generator polynomial=";
  cin>>crc;

  ll m=data.length(), n=crc.length(), i, j;
  code+=data;

  for(i=1;i<=n-1;i++){
    code+='0';
  }
  for(i=0;i<=code.length()-n;){
    for(j=0;j<n;j++)
     code[i+j]=code[i+j]==crc[j]? '0':'1';
    for( ; i<code.length()&&code[i]!='1';i++);
  }

   cout<<"Codeword: " <<data+code.substr(code.length()-n+1)<<endl;

  return 0;
}
