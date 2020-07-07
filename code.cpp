#include<iostream>
using namespace std;
int main()
{
    int Dr,Dd,Mr,Md,Yr,Yd;
    cin>>Dr>>Mr>>Yr>>Dd>>Md>>Yd;
    if(Yr==Yd)
    {
        if(Mr==Md)
        {
            if(Dr>Dd)
            {
                cout<<15*(Dr-Dd);
            }
            else {
                cout<<"0";
            }
        }
        else if(Mr>Md)
        {
            cout<<500*(Mr-Md);
        }
        else if(Mr<Md)
        {
            cout<<"0";
        }
    }
    else if(Yr<Yd)
    {
        cout<<"0";
    }
    else{
        cout<<"10000";
    }
    return 0;
}
