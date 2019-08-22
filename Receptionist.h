#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H

#include "Admin.h"

class Receptionist
{
public:
    string rID;
    string name;
    string address;
    string contact;
    string salary;
    bool found;


    Receptionist();
    void editInformationP(string,string);
    void createPatient(string,string,string,string,string);
    void deletePatient(string);
    void searchPatient(string);
    void tSearch(string);
};

#endif // RECEPTIONIST_H
