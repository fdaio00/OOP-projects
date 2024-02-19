class clsPerson
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _PhoneNumber;


public:




    clsPerson(int Id, string FirstName, string LastName, string Email, string PhoneNumber)
    {

        _ID = Id;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FirstName + " " + LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;

    }

    int ID()
    {
        return _ID;
    }

    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }
    string LastName()
    {
        return _LastName;
    }

    void setLastName(string LastName)
    {
        _LastName = LastName;

    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void setEmailAddress(string Email)
    {
        _Email = Email;
    }
    string EmailAdrres()

    {

        return _Email;
    }

    void SendEmail(string Subject, string Body)
    {


        cout << "\n==========================================================\n";
        cout << "The Following Message Sucssesfully sent to Eamil : " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body : " << Body << endl;
        cout << "\n==========================================================\n";

    }

    void setPhoneNumber(string PhoneNumber)
    {

        _PhoneNumber = PhoneNumber;
    }

    string PhoneNumber()
    {
        return _PhoneNumber;
    }

    void SendSMS(string Subject)
    {
        cout << "\n==========================================================\n";
        cout << "The Following Message Sucssesfully sent phone number : " << _PhoneNumber << endl;
        cout << Subject << endl;
        cout << "\n==========================================================\n";


    }


    void Print()
    {

        cout << "\nInfo ";
        cout << "\n==========================================================\n";
        cout << "ID           : " << _ID;
        cout << "\nFirst Name   : " << _FirstName;
        cout << "\nLasr Name    : " << _LastName;
        cout << "\nFull Name    : " << _FullName;
        cout << "\nEmail        : " << _Email;
        cout << "\nPhone Number : " << _PhoneNumber;
        cout << "\n==========================================================\n";

    }





};

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    float _Salary;

public:

    clsEmployee(int ID, string FristName, string LastName, string Email, string Phone, string Title, string Department, double Salary)
        : clsPerson(ID, FristName, LastName, Email, Phone)
    {
        _Title = Title;
        _Salary = Salary;
        _Department = Department;

    }

    void setTitle(string Tiele)
    {

        _Title = Tiele;
    }

    string Title()
    {
        return _Title;
    }



    void setSlasry(double Salary)
    {
        _Salary = Salary;
    }

    double Salary()
    {
        return _Salary;
    }

    void setDapertment(string Department)
    {

        _Department = Department;


    }

    string Department()
    {
        return _Department;
    }

    void Print()
    {
        cout << "\nInfo ";
        cout << "\n==========================================================\n";
        cout << "ID           : " << ID();
        cout << "\nFirst Name   : " << FirstName();
        cout << "\nLasr Name    : " << LastName();
        cout << "\nFull Name    : " << FullName();
        cout << "\nEmail        : " << EmailAdrres();
        cout << "\nPhone Number : " << PhoneNumber();
        cout << "\nTilte        : " << _Title;
        cout << "\nDepartment   : " << _Department;
        cout << "\nSalary       : " << _Salary;
        cout << "\n==========================================================\n";
    }

};
class clsDevolper : clsEmployee
{

private:
  
    string _MainProgrammingLanguage;

public:
    clsDevolper(int ID, string FristName, string LastName, string Email, string Phone, string Title, string Department, double Salary,  string MainProgrammingLanguage)
        :clsEmployee(ID, FristName, LastName, Email, Phone, Title, Department, Salary)
    {
        
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

  

    void setMainProgrammingLanguage(string MainLanguage)
    {
        _MainProgrammingLanguage = MainLanguage;
    }

    string MainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {

        cout << "\nInfo ";
        cout << "\n==========================================================\n";
        cout << "ID                              :      " << ID();
        cout << "\nFirst Name                      : " << FirstName();
        cout << "\nLasr Name                       : " << LastName();
        cout << "\nFull Name                       : " << FullName();
        cout << "\nEmail                           : " << EmailAdrres();
        cout << "\nPhone Number                    : " << PhoneNumber();
        cout << "\nTilte                           : " << Title();
        cout << "\nDepartment                      : " << Department();
        cout << "\nSalary                          : " << Salary();
        cout << "\nMain Programming Language       : " << _MainProgrammingLanguage;

        cout << "\n==========================================================\n";


    }
};

int main()
{
    
    clsDevolper Devolper(10, "Fedaa", "Raadan", "Fed@OOP.com", "00000", "CEO", "OOP", 5000, "C++");
    Devolper.Print();



    system("pause>0");
    return 0;
}
