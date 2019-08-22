#ifndef DOCTOR_H
#define DOCTOR_H

#include "Admin.h"

class Doctor
{
public:
    string dID;
    string name;
    string address;
    string contact;
    string dept;
    string salary;


    Doctor();
    void checkPatient(string);
    void giveResult(string,string);
};

#endif // DOCTOR_H
