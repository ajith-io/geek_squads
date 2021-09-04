#ifndef MYPASSWORD_H_
#define MYPASSWORD_H_
#include <string>
#include <iostream>
class Userlogin
{
    public:
        Userlogin();
        void login() const;
    private:
        bool access;
        std::string mypassword = "helloworld";
};

#endif