#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

class Admin
{
private:
    string username;
    string password;


public:
    bool loggedin;

    Admin();
    void changeUserPass(string,string);
    void Login(string,string);
    void Logout();
    void createDoctor(string,string,string,string,string,string);
    void deleteDoctor(string);
    void SearchDoctor(string);
    void editInformationD(string,string);
    void createReceptionist(string,string,string,string,string);
    void deleteReceptionist(string);
    void SearchReceptionist(string);
    void editInformationR(string,string);
    void createNurse(string,string,string,string,string);
    void deleteNurse(string);
    void SearchNurse(string);
    void editInformationN(string,string);
};

#endif // ADMIN_H
