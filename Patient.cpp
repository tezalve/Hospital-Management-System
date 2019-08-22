#ifndef PATIENT_CPP
#define PATIENT_CPP

#include "Admin.h"
#include "Patient.h"
#include "Receptionist.h"

Patient::Patient()
{
    pID = "";
    name = "";
    address = "";
    contact = "";
    type = "";
    due = "N/A";
    appointedDoctor = "N/A";
    test = "N/A";
    result = "N/A";
    isChecked = false;
    isTested = false;
    testResult = "N/A";
}

void Patient::checkTestResult(string id)
{
    ifstream in((id + ".txt").c_str());
    string x;
    for(int i = 0 ; i <12; i++)
    {
        in >> x;
    }
    cout << "Your Test Result = " << x << endl << endl;
}

void Patient::checkDoctorResult(string id)
{
    ifstream in((id + ".txt").c_str());
    string x;
    for(int i = 0 ; i <9; i++)
    {
        in >> x;
    }
    cout << "Your Doctor's Result = " << x << endl << endl;
}

void Patient::chooseDoctor(string id1,string id2)
{
    Receptionist r;

    r.tSearch(id1);

    if(r.found)
    {
        appointedDoctor = id2;
        due = "1K";

        string a[40];
        int i=0;

        ifstream in((id1 + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        a[6] = appointedDoctor;
        a[5] = due;

        ofstream out((id1 + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] <<endl;
        }
    }
}

void Patient::chooseTest(string id1,string x)
{
    Receptionist r;

    r.tSearch(id1);
    if(r.found)
    {
        test = x;
        string a[40];
        int i=0;

        ifstream in((id1 + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        a[7] = test;

        ofstream out((id1 + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] <<endl;
        }

    }
}

void Patient::Pay(string id)
{
    Patient p;
    Receptionist r;

    r.tSearch(id);

    if(r.found)
    {
        string a[40];
        int i=0;

        due = "Paid";

        ifstream in((id + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        a[5] = due;

        ofstream out((id + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] << endl;
        }
    }
}

void Patient::checkDue(string id)
{
    Patient p;
    Receptionist r;

    r.tSearch(id);

    if(r.found)
    {
        string a[40];
        int i=0;

        ifstream in((id + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        cout << "Your Due :: " << a[5] << endl;
    }
}


#endif // PATIENT_CPP
