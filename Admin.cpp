#ifndef ADMIN_CPP
#define ADMIN_CPP

#include "Admin.h"
#include "Patient.h"

Admin::Admin()
{
    username = "hms";
    password = "hms";
    loggedin = false;
}

void Admin::changeUserPass(string user, string pass)
{
    if(!loggedin)
        cout << "Please login first" << endl;
    else
    {
        username = user;
        password =  pass;
    }
}

void Admin::Login(string user,string pass)
{
    if(pass == password && user == username)
    {
        cout << "Logged in!" << endl;
        loggedin = true;
    }
    else
        cout << "\n\n\t\t Invalid!";
}

void Admin::Logout()
{
    if(!loggedin)
        cout << "You are not logged in!" << endl << endl;
    else
    {
        loggedin = false;
    }
}

void Admin::createDoctor(string id,string name,string address,string contact,string dept,string salary)
{
    ofstream out((id + ".txt").c_str());
    out << id << endl;
    out << name << endl;
    out << address << endl;
    out << contact << endl;
    out << dept << endl;
    out << salary << endl;
}

void Admin::createReceptionist(string id,string name,string address,string contact,string salary)
{
    ofstream out((id + ".txt").c_str());
    out << id << endl;
    out << name << endl;
    out << address << endl;
    out << contact << endl;
    out << salary << endl;
}

void Admin::createNurse(string id,string name,string address,string contact,string salary)
{
    ofstream out((id + ".txt").c_str());
    out << id << endl;
    out << name << endl;
    out << address << endl;
    out << contact << endl;
    out << salary << endl;
}

void Admin::deleteDoctor(string id)
{
    remove ((id + ".txt").c_str());
}

void Admin::deleteReceptionist(string id)
{
    remove ((id + ".txt").c_str());
}

void Admin::deleteNurse(string id)
{
    remove ((id + ".txt").c_str());
}

void Admin::SearchDoctor(string id)
{
    ifstream in((id + ".txt").c_str());

    if (in != NULL)
    {
        string x;

        if (id[0] == 'D')
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
            cout << "Department :: " << x << endl;
            in >> x;
            cout << "Salary :: " << x << endl << endl;
        }
        else
            cout << id << " - No Doctor by that ID" << endl;
    }
    else
        cout << id << " - No One By That ID" << endl << endl;
}

void Admin::SearchReceptionist(string id)
{
    ifstream in((id + ".txt").c_str());

    if (in != NULL)
    {
        string x;

        if (id[0] == 'R')
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
            cout << "Salary :: " << x << endl << endl;
        }
        else
            cout << id << " - No Receptionist by that ID" << endl;
    }
    else
        cout << id << " - No One By That ID" << endl << endl;
}

void Admin::SearchNurse(string id)
{
    ifstream in((id + ".txt").c_str());

    if (in != NULL)
    {
        string x;

        if (id[0] == 'N')
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
            cout << "Salary :: " << x << endl << endl;
        }
        else
            cout << id << " - No Nurse by that ID" << endl;
    }
    else
        cout << id << " - No One By That ID" << endl << endl;

}

void Admin::editInformationD(string id,string x)
{
    ifstream in((id + ".txt").c_str());

    if(in != NULL)
    {
        if(id[0] == 'D')
        {
            string a[40];
            int i=0;

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

            else if(x == "Dept" || x == "dept" || x == "DEPT")
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

            else if(x == "Salary" || x == "salary" || x == "SALARY")
            {
                cin >> x;
                a[5] = x;

                ofstream out((id + ".txt").c_str());
                out << endl;

                for(i=0;i<12;i++)
                {
                    out << a[i] <<endl;
                }
            }
            else
                cout << "Invalid!" << endl;
        }
        else
            cout << id << " - No Doctor By That ID" << endl;
    }
    else
        cout << id << " - No One By That ID" << endl;
}

void Admin::editInformationR(string id,string x)
{
    ifstream in((id + ".txt").c_str());

    if(in != NULL)
    {
        if(id[0] == 'R')
        {
            string a[40];
            int i=0;

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

            else if(x == "Salary" || x == "salary" || x == "SALARY")
            {
                cin >> x;
                a[5] = x;

                ofstream out((id + ".txt").c_str());
                out << endl;

                for(i=0;i<12;i++)
                {
                    out << a[i] <<endl;
                }
            }
        }
        else
            cout << id << " - No Receptionist By That ID" << endl;
    }
    else
        cout << id << " - No One By That ID" << endl;
}

void Admin::editInformationN(string id,string x)
{
    ifstream in((id + ".txt").c_str());

    if(in != NULL)
    {
        if(id[0] == 'N')
        {
            string a[40];
            int i=0;

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

            else if(x == "Salary" || x == "salary" || x == "SALARY")
            {
                cin >> x;
                a[5] = x;

                ofstream out((id + ".txt").c_str());
                out << endl;

                for(i=0;i<12;i++)
                {
                    out << a[i] <<endl;
                }
            }
        }
        else
            cout << id << " - No Nurse By That ID" << endl;
    }
    else
        cout << id << " - No One By That ID" << endl;
}

#endif // ADMIN_CPP
