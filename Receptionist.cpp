#ifndef RECEPTIONIST_CPP
#define RECEPTIONIST_CPP

#include"Admin.h"
#include "Receptionist.h"
#include "Patient.h"

Receptionist::Receptionist()
{
    rID = "";
    name = "";
    address = "";
    contact = "";
    salary = "";
    found = false;
}


void Receptionist::createPatient(string id,string name, string address, string contact, string type)
{
    Patient p;

    ofstream out((id + ".txt").c_str());

    out << id << endl;
    out << name << endl;
    out << address << endl;
    out << contact << endl;
    out << type << endl;
    out << p.due << endl;
    out << p.appointedDoctor << endl;
    out << p.test << endl;
    out << p.result << endl;

    if(p.isChecked)
    {
        out << "Checked" << endl;
    }
    else
        out << "Not-Checked" << endl;

    if(p.isTested)
    {
        out << "Tested" << endl;
    }
    else
        out << "Not-Tested" << endl;

    out << p.testResult << endl;

}

void Receptionist::deletePatient(string id)
{
    remove ((id + ".txt").c_str());
}

void Receptionist::searchPatient(string id)
{
    if (id[0] == 'P')
    {
        ifstream in((id + ".txt").c_str());
        string x;

        if (in == NULL)
        {
            cout << "No One by that ID" << endl;
            found = false;
        }
        else
        {
            in >> x;
            cout << "ID :: " << x << endl;
            in >> x;
            cout << "Name :: " << x << endl;
            in >> x;
            cout << "Address :: " << x << endl;
            in >> x;
            cout << "Contact :: " << x << endl;
            in >> x;
            cout << "Type :: " << x << endl;
            in >> x;
            cout << "Due :: " << x << endl;
            in >> x;
            cout << "Appointed Doctor :: " << x << endl;
            in >> x;
            cout << "Test :: " << x << endl;
            in >> x;
            cout << "Doctor's Result :: " << x << endl;
            in >> x;
            cout << "Is Checked :: " << x << endl;
            in >> x;
            cout << "Is Tested :: " << x << endl;
            in >> x;
            cout << "Test Result :: " << x << endl << endl;

            found = true;
        }
    }
    else
    {
        cout << id << " - No Patient By That ID" << endl << endl;
        found = false;
    }

}

void Receptionist::tSearch(string id)
{
    ifstream in((id + ".txt").c_str());

    if (in != NULL)
    {
        if (id[0] == 'P')
        {
            found = true;
        }
        else
        {
            cout << id << " - No Patient By That ID" << endl << endl;
            found = false;
        }
    }
    else
    {
        cout << id << " - No One By That ID" << endl << endl;
        found = false;
    }
}

void Receptionist::editInformationP(string id,string x)
{
    tSearch(id);

    if(found)
    {
        string a[40];
        int i=0;

        ifstream in((id + ".txt").c_str());

        while(in >> a[i])
        {
            i++;
        }

        if(x == "Name" || x == "name" || x == "NAME")
        {
            cin >> x;
            a[1] = x;

            ofstream out((id + ".txt").c_str());
            out << endl;

            for(i=0;i<12;i++)
            {
                out << a[i] <<endl;
            }
        }

        else if(x == "Address" || x == "address" || x == "ADDRESS")
        {
            cin >> x;
            a[2] = x;

            ofstream out((id + ".txt").c_str());
            out << endl;

            for(i=0;i<12;i++)
            {
                out << a[i] <<endl;
            }
        }

        else if(x == "Contact" || x == "contact" || x == "CONTACT")
        {
            cin >> x;
            a[3] = x;

            ofstream out((id + ".txt").c_str());
            out << endl;

            for(i=0;i<12;i++)
            {
                out << a[i] <<endl;
            }
        }

        else if(x == "Type" || x == "type" || x == "TYPE")
        {
            cin >> x;
            a[4] = x;

            ofstream out((id + ".txt").c_str());
            out << endl;

            for(i=0;i<12;i++)
            {
                out << a[i] <<endl;
            }
        }
    }
}

#endif // RECEPTIONIST_CPP
