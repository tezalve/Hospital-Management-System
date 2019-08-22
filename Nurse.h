#ifndef NURSE_H
#define NURSE_H

#include "Admin.h"

class Nurse
{
public:
    string nID;
    string name;
    string address;
    string contact;
    string salary;


    Nurse();
    void testPatient(string);
    void giveTestResult(string,string);

};

#endif // NURSE_H
