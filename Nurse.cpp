#ifndef NURSE_CPP
#define NURSE_CPP

#include "Admin.h"
#include "Nurse.h"
#include "Patient.h"
#include "Receptionist.h"

Nurse::Nurse()
{
    nID = "";
    name = "";
    address = "";
    contact = "";
    salary = "";
}

void Nurse::testPatient(string id)
{
    Patient p;
    Receptionist r;

    r.tSearch(id);

    if(r.found)
    {
        p.isTested = true;
        string a[40];
        int i=0;

        ifstream in((id + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        if(p.isTested)
        {
            a[10] = "Tested";
        }
        else
            a[10] = "Not-Tested";

        ofstream out((id + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] <<endl;
        }
    }
}

void Nurse::giveTestResult(string id,string x)
{
    Patient p;
    Receptionist r;

    r.tSearch(id);

    if(r.found)
    {
        p.testResult = x;
        string a[40];
        int i=0;

        ifstream in((id + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        a[11] = p.testResult;

        ofstream out((id + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] << endl;
        }
    }
}


#endif // NURSE_CPP
