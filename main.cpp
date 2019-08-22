#include "Patient.h"
#include "Admin.h"
#include "Receptionist.h"
#include "Doctor.h"
#include "Nurse.h"
#include<stdlib.h>

int choice;
string a,b,id,name,address,contact,type,salary,department,x;
char c;
Admin admin;
Receptionist r;
Doctor d;
Nurse n;
Patient p;

int main()
{
    system("CLS");
    cout << "\n\t\t****  Friends Hospital  ****";
    cout << "\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Admin\n\t\t[2] Receptionist\n\t\t[3] Doctor\n\t\t[4] Nurse\n\t\t[5] Patient\n\t\t[0] Exit\n\t\t=================\n\t\t";

    cout << "Enter Choice::";
    cin >> choice;

    switch(choice)
    {
    default:
        {
            system("CLS");
            cout << "n\t\t\Invalid Choice";
            return main();
        }

    case 0:
        {
            system("CLS");

            cout << "\n\n\t\tAre you sure you want to exit?[Y/N]";
            cin >> c;

            if(c=='N'||c=='n')
            {
                system("CLS");
                return main();
            }
            else
                return 0;

            break;
        }

    case 1:
        {
            system("CLS");
            cout << "\n\n\t\t Enter UserName::";
            cin >> a;
            cout << "\t\t Enter PassWord::";
            cin >> b;
            cout << "\n\n\t\t";

            admin.Login(a,b);

            if(admin.loggedin)
            {
                while(true)
                {
                    system("CLS");
                    cout << "\n\n\n\t\t\tADMIN MENU\n\t\t=====================\n\t\t[1] Create Receptionist\n\t\t[2] Create Doctor\n\t\t[3] Create Nurse\n\t\t[4] Delete Receptionist\n\t\t[5] Delete Doctor\n\t\t[6] Delete Nurse\n\t\t[7] Edit Receptionist\n\t\t[8] Edit Doctor\n\t\t[9] Edit Nurse\n\t\t[10] Search Receptionist\n\t\t[11] Search Doctor\n\t\t[12] Search Nurse\n\t\t\[0] Main Menu\n\t\t=====================\n\t\t";

                    cout << "Enter Choice::";
                    cin >> choice;

                    switch(choice)
                    {
                    default:
                        {
                            system("CLS");
                            cout << "\n\t\tInvalid Choice";
                            break;
                        }

                    case 0:
                        {
                            system("CLS");
                            cout << "\n\t\t\LoggedOut!\n\t\t";
                            system("pause");
                            return main();
                            break;
                        }

                    case 1:
                        {
                            system("CLS");
                            cout<<"\n\n\t\tEnter ID[Starting With 'R'] :: ";
                            cin>>id;

                            if(id[0] != 'R')
                            {
                                cout << "\n\t\tInvalid ID!";
                                cout<<"\n\n\t\tReceptionist Not Created!\n\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                                break;
                            }

                            ifstream in((id + ".txt").c_str());
                            if(in == NULL)
                            {
                                cout<<"\t\tEnter Name :: ";
                                cin>>name;
                                cout<<"\t\tEnter Address :: ";
                                cin>>address;
                                cout<<"\t\tEnter Contact :: ";
                                cin>>contact;
                                cout<<"\t\tEnter Salary :: ";
                                cin>>salary;
                                admin.createReceptionist(id,name,address,contact,salary);
                                cout<<"\t\tReceptionist Created Successfully!\n";
                                cout<<"\t\tReturning to admin menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            else
                            {
                                cout<<"\t\tAlready a Receptionist with that ID!";
                                cout<<"\n\n\t\tReceptionist Not Created!\n\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            break;
                        }

                    case 2:
                        {
                            system("CLS");
                            cout<<"\n\n\t\tEnter ID[Starting With 'D'] :: ";
                            cin>>id;

                            if(id[0] != 'D')
                            {
                                cout << "\n\t\tInvalid ID!";
                                cout << "\n\n\t\tReceptionist Not Created!\n\n";
                                cout << "\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                                break;
                            }

                            ifstream in((id + ".txt").c_str());
                            if(in == NULL)
                            {
                                cout<<"\t\tEnter Name :: ";
                                cin>>name;
                                cout<<"\t\tEnter Address :: ";
                                cin>>address;
                                cout<<"\t\tEnter Contact :: ";
                                cin>>contact;
                                cout<<"\t\tEnter Department :: ";
                                cin>>department;
                                cout<<"\t\tEnter Salary :: ";
                                cin>>salary;
                                admin.createDoctor(id,name,address,contact,department,salary);
                                cout<<"\t\tDoctor Created Successfully!\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            else
                            {
                                cout<<"\t\tAlready a Doctor with that ID!";
                                cout<<"\n\n\t\tDoctor Not Created!\n\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            break;
                        }

                    case 3:
                        {
                            system("CLS");
                            cout<<"\n\n\t\tEnter ID[Starting With 'N'] :: ";
                            cin>>id;

                            if(id[0] != 'N')
                            {
                                cout << "\n\t\tInvalid ID!";
                                cout << "\n\n\t\tReceptionist Not Created!\n\n";
                                cout << "\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                                break;
                            }

                            ifstream in((id + ".txt").c_str());
                            if(in == NULL)
                            {
                                cout<<"\t\tEnter Name :: ";
                                cin>>name;
                                cout<<"\t\tEnter Address :: ";
                                cin>>address;
                                cout<<"\t\tEnter Contact :: ";
                                cin>>contact;
                                cout<<"\t\tEnter Salary :: ";
                                cin>>salary;
                                admin.createNurse(id,name,address,contact,salary);
                                cout<<"\t\tNurse Created Successfully!\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            else
                            {
                                cout<<"\t\tAlready a Nurse with that ID!";
                                cout<<"\n\n\t\tNurse Not Created!\n\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            break;
                        }

                    case 4:
                        {
                            system("CLS");
                            cout << "\n\n\t\tEnter ID :: ";
                            cin >> id;

                            ifstream in((id + ".txt").c_str());
                            if(in != NULL)
                            {
                                in.close();
                                admin.deleteReceptionist(id);
                                cout<<"\t\tReceptionist Deleted Successfully!\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            else
                            {
                                cout << "\n\t\tNo Receptionist With That ID";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }

                            remove ((id + ".txt").c_str());
                            break;
                        }
                    case 5:
                        {
                            system("CLS");
                            cout << "\n\n\t\tEnter ID :: ";
                            cin >> id;

                            ifstream in((id + ".txt").c_str());
                            if(in != NULL)
                            {
                                in.close();
                                admin.deleteDoctor(id);
                                cout<<"\t\tDoctor Deleted Successfully!\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            else
                            {
                                cout << "\n\t\tNo Doctor With That ID";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            break;
                        }

                    case 6:
                        {
                            system("CLS");
                            cout << "\n\n\t\tEnter ID :: ";
                            cin >> id;

                            ifstream in((id + ".txt").c_str());
                            if(in != NULL)
                            {
                                in.close();
                                admin.deleteNurse(id);
                                cout<<"\t\tNurse Deleted Successfully!\n";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            else
                            {
                                cout << "\n\t\tNo Nurse With That ID";
                                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                                system("pause");
                            }
                            break;
                        }

                    case 7:
                        {
                            system("CLS");
                            cout << "\n\n\t\tEnter ID :: ";
                            cin >> id;

                            cout << "\n\t\tWrite The Information You Want to Change :: ";
                            cin >> x;

                            cout << "\n\n\t\t";

                            admin.editInformationR(id,x);

                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }

                    case 8:
                        {
                            system("CLS");
                            cout << "\n\n\t\tEnter ID :: ";
                            cin >> id;

                            cout << "\n\t\tWrite The Information You Want to Change :: ";
                            cin >> x;

                            cout << "\n\n\t\t";

                            admin.editInformationD(id,x);

                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }

                    case 9:
                        {
                            system("CLS");
                            cout << "\n\n\t\tEnter ID :: ";
                            cin >> id;

                            cout << "\n\t\tWrite The Information You Want to Change :: ";
                            cin >> x;

                            cout << "\n\n\t\t";

                            admin.editInformationN(id,x);

                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }

                    case 10:
                        {
                            system("CLS");
                            cout << "\n\t\tEnter ID :: ";
                            cin >> id;

                            admin.SearchReceptionist(id);

                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }

                    case 11:
                        {
                            system("CLS");
                            cout << "\n\t\tEnter ID :: ";
                            cin >> id;

                            admin.SearchDoctor(id);

                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }

                    case 12:
                        {
                            system("CLS");
                            cout << "\n\t\tEnter ID :: ";
                            cin >> id;

                            admin.SearchNurse(id);

                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }
                    }
                }
            }
            else
            {
                cout << "\n\n\t\t";
                cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                system("pause");
                return main();
            }
            break;
        }

    case 2:
        {
            while(true)
            {
                system("CLS");
                cout << "\n\n\n\t\t\tRECEPTIONIST MENU\n\t\t=====================\n\t\t[1] Create Patient\n\t\t[2] Delete Patient\n\t\t[3] Edit Patient\n\t\t[4] Search Patient\n\t\t[0] Main Menu\n\t\t=================\n\t\t";

                cout << "Enter Choice::";
                cin >> choice;

                switch(choice)
                {
                default:
                    {
                        system("CLS");
                        cout << "\n\t\tInvalid Choice";
                        break;
                    }

                case 0:
                    {
                        system("CLS");
                        system("pause");
                        return main();
                        break;
                    }

                case 1:
                    {
                        system("CLS");
                        cout<<"\n\n\t\tEnter ID[Starting With 'P'] :: ";
                        cin>>id;

                        if(id[0] != 'P')
                        {
                            cout << "\n\t\tInvalid ID!";
                            cout<<"\n\n\t\tPatient Not Created!\n\n";
                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                            break;
                        }

                        ifstream in((id + ".txt").c_str());
                        if(in == NULL)
                        {
                            cout<<"\t\tEnter Name :: ";
                            cin>>name;
                            cout<<"\t\tEnter Address :: ";
                            cin>>address;
                            cout<<"\t\tEnter Contact :: ";
                            cin>>contact;
                            cout << "\t\tEnter Type :: ";
                            cin >> type;
                            r.createPatient(id,name,address,contact,type);
                            cout<<"\t\tPatient Created Successfully!\n";
                            cout<<"\t\tReturning to Receptionist Menu. . . . .\n\n\t\t";
                            system("pause");
                        }
                        else
                        {
                            cout<<"\t\tAlready a Patient with that ID!";
                            cout<<"\n\n\t\tPatient Not Created!\n\n";
                            cout<<"\t\tReturning to Receptionist Menu. . . . .\n\n\t\t";
                            system("pause");
                        }
                        break;
                    }

                case 2:
                    {
                        system("CLS");
                        cout << "\n\n\t\tEnter ID :: ";
                        cin >> id;

                        ifstream in((id + ".txt").c_str());
                        if(in != NULL)
                        {
                            in.close();
                            r.deletePatient(id);
                            cout<<"\t\tPatient Deleted Successfully!\n";
                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                        }
                        else
                        {
                            cout << "\n\t\tNo Patient With That ID";
                            cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                            system("pause");
                        }
                        break;
                    }

                case 3:
                    {
                        system("CLS");
                        cout << "\n\n\t\tEnter ID :: ";
                        cin >> id;

                        cout << "\n\t\tWrite The Information You Want to Change :: ";
                        cin >> x;

                        cout << "\n\n\t\t";

                        r.editInformationP(id,x);

                        cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                        system("pause");
                        break;
                    }

                case 4:
                    {
                        system("CLS");
                        cout << "\n\t\tEnter ID :: ";
                        cin >> id;

                        r.searchPatient(id);

                        cout<<"\t\tReturning to Admin Menu. . . . .\n\n\t\t";
                        system("pause");
                        break;
                    }
                }
            }
            break;
        }

    case 3:
        {
            while(true)
            {
                system("CLS");
                cout << "\n\n\n\t\t\tDOCTOR MENU\n\t\t=====================\n\t\t[1] Check Patient\n\t\t[2] Give Result\n\t\t[0] Main Menu\n\t\t=================\n\t\t";
                cout << "Enter Choice::";
                cin >> choice;

                switch(choice)
                {
                default:
                    {
                        system("CLS");
                        cout << "\n\t\tInvalid Choice";
                        break;
                    }

                case 0:
                    {
                        system("CLS");
                        system("pause");
                        return main();
                        break;
                    }

                case 1:
                    {
                        system("CLS");
                        cout << "\n\t\t\Patient's ID[Starting With 'P'] :: ";
                        cin >> id;

                        d.checkPatient(id);
                        cout << "\n\t\t\Patient Checked Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }

                case 2:
                    {
                        system("CLS");
                        cout << "\n\t\t\Patient's ID[Starting With 'P'] :: ";
                        cin >> id;
                        cout << "\n\t\t\Patient's Result :: ";
                        cin >> x;

                        d.giveResult(id,x);
                        cout << "\n\t\t\Result Given Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }
                }
            }
            break;
        }

    case 4:
        {


            while(true)
            {
                system("CLS");
                cout << "\n\n\n\t\t\tNURSE MENU\n\t\t=====================\n\t\t[1] Test Patient\n\t\t[2] Give Test Result\n\t\t[0] Main Menu\n\t\t=================\n\t\t";
                cout << "Enter Choice::";
                cin >> choice;

                switch(choice)
                {
                default:
                    {
                        system("CLS");
                        cout << "\n\t\tInvalid Choice";
                        break;
                    }

                case 0:
                    {
                        system("CLS");
                        system("pause");
                        return main();
                        break;
                    }

                case 1:
                    {
                        system("CLS");
                        cout << "\n\t\t\Patient's ID[Starting With 'P'] :: ";
                        cin >> id;

                        n.testPatient(id);

                        cout << "\n\t\t\ Patient Tested Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }

                case 2:
                    {
                        system("CLS");
                        cout << "\n\t\t\Patient's ID[Starting With 'P'] :: ";
                        cin >> id;
                        cout << "\n\t\t\Patient's Test Result :: ";
                        cin >> x;

                        n.giveTestResult(id,x);

                        cout << "\n\t\t\Test Result Given Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }
                }
            }
            break;
        }
    case 5:
        {
            cout << "\n\t\t Enter ID[Starting With 'P'] :: ";
            string pID;
            cin >> pID;

            ifstream in((pID + ".txt").c_str());
            if(in == NULL)
            {
                cout << "\n\t\t\ No Patient By That Id";
                break;
            }

            while(true)
            {
                system("CLS");
                cout << "\n\n\n\t\t\tPatient MENU\n\t\t=====================\n\t\t[1] Pay\n\t\t[2] Due\n\t\t[3] Doctor's Result\n\t\t[4] Test's Result\n\t\t[5] Choose Doctor\n\t\t[6] Choose Test\n\t\t[7] View Information\n\t\t[0] Exit\n\t\t=================\n\t\t";
                cout << "Enter Choice::";
                cin >> choice;

                switch(choice)
                {
                default:
                    {
                        system("CLS");
                        cout << "\n\t\tInvalid Choice";
                        break;
                    }

                case 0:
                    {
                        system("CLS");
                        system("pause");
                        return main();
                        break;
                    }

                case 1:
                    {
                        system("CLS");
                        p.Pay(pID);
                        cout << "\n\t\t\Paid Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }

                case 2:
                    {
                        system("CLS");
                        p.checkDue(pID);
                        system("pause");
                        break;
                    }

                case 3:
                    {
                        system("CLS");
                        p.checkDoctorResult(pID);
                        system("pause");
                        break;
                    }

                case 4:
                    {
                        system("CLS");
                        p.checkTestResult(pID);
                        system("pause");
                        break;
                    }
                case 5:
                    {
                        system("CLS");
                        cout << "\n\t\tDoctor's ID[Starting With 'D'] :: ";
                        cin >> id;
                        p.chooseDoctor(pID,id);
                        cout << "\n\t\t\ Doctor Was Chosen Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }

                case 6:
                    {
                        system("CLS");
                        cout << "\n\t\tTest's Name :: ";
                        cin >> x;
                        p.chooseTest(pID,x);
                        cout << "\n\t\t\ Test Chosen Successfully\n\n\t\t";
                        system("pause");
                        break;
                    }

                case 7:
                    {
                        system("CLS");
                        r.searchPatient(pID);
                        system("pause");
                        break;
                    }
                }
            }
        }
        break;
    }
}
