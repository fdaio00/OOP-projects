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
        _FullName = FirstName +  LastName;
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
        cout << "\n==========================================================\n";

    }
       




};

int main()
{
    clsPerson Person1(10, "Fedaa  ", "Aldeen", "MyEmail@OOP.com", "000999998");
    Person1.Print();

    Person1.SendEmail("OOP", "This is an excersise ");
    Person1.SendSMS("This is OOP");

    return 0;

}
