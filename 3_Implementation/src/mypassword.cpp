#include <iostream>
#include <string>
#include "mypassword.h"

using namespace std;
string upassword;
Userlogin::Userlogin()
{
    access=0;
}
void Userlogin::login() const
{
    cout<<" Please Enter your password\n";
    cout<<" Password:";
    cin>>upassword;
    if(upassword == mypassword)
    {
        cout<<"\n     Welcome Alex ";
           
    }
    else
    {
        cout<<"  ..Incorrect Password..\n\n";
        login();
    }            
}

