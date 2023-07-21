#include <iostream>
using namespace std;

class Hospital {
private:
    // Private member variables
    string adm_usename = "ycce";
    string adm_pass = "111";
    int count_patient = 4;
    int city_count = 4;
    int doc_count = 4;
    string docname[50] = {"Pankaj", "Nayan", "Pawan", "Harshal"};
    string docpass[50] = {"69", "1000", "99", "55"};
    int idpass[50] = {1, 2, 3, 4};
    string docmob[20] = {"899950", "356483", "459688", "7942434"};
    int age[20] = {25, 30, 60, 50};
    string Pname[50][50], P_age[50][50], Pmobile[50][50];
    string cityName[20] = {"nagpur", "mumbai", "delhi", "pune"};
    string username[50] = {"phoyar733", "harshal123", "akash22", "chetanc1"};
    string Ppassword[50] = {"733", "123", "22", "1"};
    int p_list = 0;
    int pLOg, len, id;

    // Private member functions
    void D_reg();
    void P_reg();
    void savedetails(int id);
    void patient();
    void doctor();
    void add_city();
    void doctor_list();
    void patient_list();
    void admin();

public:
    void hospital();
};

void Hospital::D_reg() {
    // Doctor registration logic here...
     int a = 0;
    while (a == 0)
    {
        cout << "Create doctor username" << endl;
        cin >> docname[doc_count];
        cout << "Create a good password" << endl;
        cin >> docpass[doc_count];
        cout << "Enter age" << endl;
        cin >> age[doc_count];
        cout << "Enter mobile number" << endl;
        cin >> docmob[doc_count];

        //  cout << "Enter mobile" << endl;
        // cin >> Pmobile[len];
        cout << "User id is succefully created" << endl;
        a++;
        doc_count++;
        cout << doc_count << endl;
    }
}

void Hospital::P_reg() {
    // Patient registration logic here...
      int a = 0;
    while (a == 0)
    {
        cout << "Create the username" << endl;
        cin >> username[count_patient];
        cout << "Create a good password" << endl;
        cin >> Ppassword[count_patient];
        //  cout << "Enter mobile" << endl;
        // cin >> Pmobile[len];
        cout << "User id is succefully created" << endl;
        a++;
        count_patient++;
    }
}

void Hospital::savedetails(int id) {
    // Display patient details
     cout << "Name :" << Pname[0][id] << endl;
    cout << "Age :" << P_age[0][id] << endl;
    cout << "Mobile :" << Pmobile[0][id] << endl;
}

void Hospital::patient() {
    // Patient logic here...
      cout << "1.Login" << endl;
    cout << "2.Registration" << endl;
    cin >> pLOg;

    if (pLOg == 1)
    {
        // login code here...

        cout << "Dear patient please enter your login details" << endl;
        string username1;
        cout << "Enter username " << endl;
        cin >> username1;
        string Ppassword1;
        cout << "Enter password " << endl;
        cin >> Ppassword1;

        bool found2 = false;
        for (int i = 0; i < count_patient; i++)
        {
            if (username1 == username[i] && Ppassword1 == Ppassword[i])
            {
                found2 = true;
                break;
            }
        }
        if (found2)
        {
            cout << "Welcome sir" << endl;
            cout << "Book appointment with the doctor" << endl;
        

            int city1;
         
               cout << "Select the city" << endl;
            for (int i = 0; i < city_count; i++)
            {
                cout << i + 1 << " " << cityName[i] << endl;
            }
         
            cin >> city1;
         
            cout << "Select the doctor" << endl;
            for (int i = 0; i < doc_count; i++)
            {
                cout << i + 1 << " " << docname[i] << endl;
            }
            int selectedDoc;
            cin >> selectedDoc;
     
            id=selectedDoc-1;
            cout << "Enter details to book appointment" << endl;

            int i = 0;
            int j = i + 1;
            for (i = i; i < j; i++)
            {
                cout << "Enter the name" << endl;
                cin >> Pname[0][id];
                cout << "Enter age" << endl;
                cin >> P_age[0][id];
                cout << "Enter mobile" << endl;
                cin >> Pmobile[0][id];
            }
            p_list++;
            cout << "Your appointment is booked succucesfully" << endl;
         
            i++;
        }
    }
    if (pLOg == 2)
    {
        P_reg();
    }
}

void Hospital::doctor() {
    // Doctor logic here...
       int n;
    cout << "1.Login" << endl;
    cout << "2.Register" << endl;
    cin >> n;
    if (n == 1)
    {
        string doc_user;
        cout << "Enter doctor username " << endl;
        cin >> doc_user;
        string doc_pass;
        cout << "Enter doctor password " << endl;
        cin >> doc_pass;
        int k; // to take index of doc
        bool found = false;
       
        cout << doc_count << endl;
        for (int j = 0; j < doc_count; j++)
        {
            if (doc_user == docname[j] && doc_pass == docpass[j])
            {
                found = true;
                k = j;
                break;
            }
        }
        if (found)
        {
            cout << "Welcome Doctor" << endl;
            cout << "1.Show profile" << endl;
            cout << "2.Edit details" << endl;
            cout << "3.show all appointments" << endl;
            int doc_choice;
            cin >> doc_choice;
            if (doc_choice == 1)
            {
                cout << "Name of  doctor" << docname[k] << endl;
                cout << "Id of  doctor" << idpass[k] << endl;
                cout << "Age of  doctor" << age[k] << endl;
                cout << "Mobile number of  doctor" << docmob[k] << endl;
            }
            if (doc_choice == 2)
            {
                cout << "What you want to edit " << endl;
                int edit;
                cout << "1.Name" << endl;
                cout << "2.id" << endl;
                cout << "3.age" << endl;
                cout << "4.Mobile number " << endl;
                cin >> edit;
                switch (edit)
                {
                case 1:
                    cin >> docname[k];
                    break;
                case 2:
                    cin >> idpass[k];
                    break;
                case 3:
                    cin >> age[k];
                    break;
                case 4:
                    cin >> docmob[k];
                    break;
                deafault:
                    cout << "Invalid" << endl;
                    break;
                }
            }
            if (doc_choice == 3)
            {
                cout << "The appointments are " << endl;
                cout << "Here are the patient details " << endl;
                savedetails(idpass[k-1]);
                cout << "THANK YOU" << endl;
            }
        }
    }
    else if (n == 2)
    {
        D_reg();
    }
}

void Hospital::add_city() {
    // Add city logic here...
       int a = 0;
    while (a == 0)
    {
        cout << "Enter the city name" << endl;
        cin >> cityName[city_count];

        cout << "City is added succesfully." << endl;
        a++;
        city_count++;
    }
}

void Hospital::doctor_list() {
    // Display list of doctors
     for (int i = 0; i < doc_count; i++)
    {
        cout << "Details of doctor : " << i + 1 << endl<<endl;

            cout << "Doctor name :" << docname[i]<<endl;
            cout << "doctor age :" << age[i]<<endl;
            cout << "Doctor mobile number :" << docmob[i]<<endl<<endl;
    }
}

void Hospital::patient_list() {
    // Display list of patients
     for(int i=0;i<p_list;i++){
    cout<<"Patient :"<<i+1<<endl;
    for(int j=0;j<p_list;j++){
        cout << "Name :" << Pname[0][j] << endl;
    cout << "Age :" << P_age[0][j] << endl;
    cout << "Mobile :" << Pmobile[0][j]  << endl;
    }

  }
}

void Hospital::admin() {
    // Admin panel logic here...
       string useradm, admpass;
    cout << "Enter username" << endl;
    cin >> useradm;
    cout << "Enter password" << endl;
    cin >> admpass;
    if (useradm == adm_usename && admpass == adm_pass)
    {
        int adm;
        cout << "1.Add cities :" << endl;
        cout << "2.Doctor rgistration :" << endl;
        cout << "3.Patient registration :" << endl;
        cout << "4.Show doctor list :" << endl;
        cout << "5.Show patient list :" << endl;
        cin >> adm;
        switch (adm)
        {
        case 1:
            add_city();
            break;
        case 2:
            D_reg();
            break;
        case 3:
            P_reg();
            break;
        case 4:
            doctor_list();
            break;
        case 5:
            patient_list();
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}

void Hospital::hospital() {
    while (true) {
        cout << "\nWelcome to DATTA MEGHE HOSPITAL" << endl;
        cout << "1. Patient" << endl;
        cout << "2. Doctor" << endl;
        cout << "3. Admin" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int n;
        cin >> n;

        switch (n) {
            case 1:
                patient();
                break;
            case 2:
                doctor();
                break;
            case 3:
                admin();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid input" << endl;
        }
    }
}

int main() {
    Hospital dattameghe;
    dattameghe.hospital();
    return 0;
}
