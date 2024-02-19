class clsEmployee
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _PhoneNumber;
    double _Salary; 
    string _Department; 
    string _Title;


public:

    clsEmployee(int Id, string FirstName, string LastName,string Title,  string Email, string PhoneNumber, double Salary , string Department)
    {

        _ID = Id;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FirstName + LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
        _Salary = Salary; 
        _Department = Department; 
        _Title = Title; 

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
    string LasttName()
    {
        return _LastName;
    }

    void setLastName(string LastName)
    {
        _LastName = LastName;

    }

    string FullName()
    {
        return _FirstName + "" + _LastName;
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

    void setDepartment(string Department)
    {
        _Department = Department; 
    }

    string Department()
    {
        return _Department; 
    }

    void setSalary(double Salary)
    {
        _Salary = Salary;
    }

    double Salary()
    {
        return _Salary; 
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

        cout << "Info \n";
        cout << "\n==========================================================\n";
        cout << "ID           : " << _ID;
        cout << "\nFirst Name   : " << _FirstName;
        cout << "\nLasr Name    : " << _LastName;
        cout << "\nFull Name    : " << _FullName;
        cout << "\nEmail        : " << _Email;
        cout << "\nPhone Number : " << _PhoneNumber;
        cout << "\nSalary       : " << _Salary;
        cout << "\nTitle        : " << _Title;
        cout << "\nDepartment   : " << _Department;
        cout << "\n==========================================================\n";

    }




};

int main()
{
    clsEmployee Employee1(10, "Fedaa  ", "Aldeen","The Boss", "MyEmail@OOP.com", "000999998", 50,"OOP");
    Employee1.Print();

    Employee1.SendEmail("OOP", "This is an excersise ");
    Employee1.SendSMS("This is OOP");

    return 0;

}
