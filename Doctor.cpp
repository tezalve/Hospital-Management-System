#ifndef DOCTOR_CPP
#define DOCTOR_CPP

#include "Admin.h"
#include "Receptionist.h"
#include "Doctor.h"
#include "Patient.h"

Doctor::Doctor()
{
    dID = "";
    name = "";
    address = "";
    contact = "";
    dept = "";
    salary = "";
}

void Doctor::checkPatient(string id)
{
    Patient p;
    Receptionist r;

    r.tSearch(id);

    if(r.found)
    {
        p.isChecked = true;
        string a[40];
        int i=0;

        ifstream in((id + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        if(p.isChecked)
        {
            a[9] = "Checked";
        }
        else
            a[9] = "Not-Checked";


        ofstream out((id + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] <<endl;
        }

    }
    else
        cout << "NotFound" <<endl;
}

void Doctor::giveResult(string id,string x)
{
    Patient p;
    Receptionist r;

    r.tSearch(id);

    if(r.found)
    {
        p.result = x;
        string a[40];
        int i=0;

        ifstream in((id + ".txt").c_str());
        while(in >> a[i])
        {
            i++;
        }

        a[8] = p.result;

        ofstream out((id + ".txt").c_str());
        for(i=0;i<12;i++)
        {
            out << a[i] << endl;
        }
    }
}

#endif // DOCTOR_CPP
