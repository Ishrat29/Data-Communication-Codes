/*--- 1. Write a program to implement a CRC (Cyclic Redundancy Code) error detection model. ---*/
/*---Receiver part---*/
#include<bits/stdc++.h>
#define ll long
#define f(i, n) for(i=0;i<n;i++)
using namespace std;


int main()
{
  string crc, code="";
  cout<<"Enter Codeword=";
  cin>>code;
  cout<<"Enter CRC generator polynomial=";
  cin>>crc;

  ll n=crc.length(),i, j;

  for(i=0;i<=code.length()-n;){
    for(j=0;j<n;j++)
     code[i+j]=code[i+j]==crc[j]? '0':'1';
    for( ; i<code.length()&&code[i]!='1';i++);
  }

  for(char i: code.substr(code.length()-n+1))
    if(i!='0'){
        cout<<"Error in Communication!!";
        return 0;
    }

    cout<<"No Error in Communication!"<<endl;

  return 0;

}
