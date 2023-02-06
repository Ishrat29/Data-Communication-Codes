/*---2) Write a program for 4 x 8 block even parity error detection. ---*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    string str1, str2, str3, str4;
    ll array[9];
    ll i,count=0,sum=0;

    cout<<"Enter Four Strings:"<<endl;
    cin >> str1>> str2>> str3>> str4;

    for(i=0; i<8; i++)
    {
        cout << str1[i] << " ";
        if(str1[i]=='1')
            count++;
    }
    cout << "  |  " << count%2 << endl;

    count=0;
    for(i=0; i<8; i++)
    {
        cout << str2[i] << " ";
        if(str2[i]=='1')
            count++;
    }
    cout << "  |  " << count%2 << endl;

    count=0;
    for(i=0; i<8; i++)
    {
        cout << str3[i] << " ";
        if(str3[i]=='1') count++;
    }
    cout << "  |  " << count%2 << endl;

    count=0;
    for(i=0; i<8; i++)
    {
        cout << str4[i] << " ";
        if(str4[i]=='1') count++;
    }
    cout << "  |  " << count%2 << endl;

    cout << "-----------------------" << endl;

    for(i=0; i<8; i++)
    {
        count=0;
        if(str1[i]=='1')
            count++;
        if(str2[i]=='1')
            count++;
        if(str3[i]=='1')
            count++;
        if(str4[i]=='1')
            count++;
        cout << count%2 << " ";

        array[i]=count%2;
    }

    for(i=0; i<8; i++)
    {
        sum+=array[i];
    }
    cout << "  |  " << sum%2 << endl;

    return 0;
}



