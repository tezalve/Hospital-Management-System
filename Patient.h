#ifndef PATIENT_H
#define PATIENT_H

#include "Admin.h"

class Patient
{
public:
    string pID;
    string name;
    string address;
    string contact;
    string type;
    string due;
    string appointedDoctor;
    string test;
    string result;
    bool isChecked;
    bool isTested;
    string testResult;


    Patient();
    void Pay(string);
    void checkDue(string);
    void checkDoctorResult(string);
    void checkTestResult(string);
    void chooseDoctor(string,string);
    void chooseTest(string,string);
};

#endif // PATIENT_H
