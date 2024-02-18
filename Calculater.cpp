#include<iostream>
using namespace std; 
class clsCalculater
{
private:
    
    int _Number = 0;
    int _Result = 0; 
    
    string _OperationName = "";

    void _CheckOpeartion(char Operation)
    {

       
        switch (Operation)
        {
        case '+':
            _Result += _Number;
            
            break;
        case '-':
            _Result -= _Number;

            break;
            case '*':
                _Result *= _Number;

            break;
           case '/':
               if (_Number == 0)
                   _Number = 1;
               _Result /= _Number;
               break;

        default:
            _Result = 0; 
            break;
        }
    }
    

public:

    void Add(int Number)
    {
        _Number = Number;
        _CheckOpeartion('+');
        _OperationName = "Adding";

    }
     void Substract(int Number)
    {
        _Number = Number;
        _CheckOpeartion('-');
        _OperationName = "Substracting";


    }
     void Multiply(int Number)
    {
        _Number = Number;
        _CheckOpeartion('*');
        _OperationName = "Multiplaying";


    }
     void Devied(int Number)
    {
        _Number = Number;
        _CheckOpeartion('/');
        _OperationName = "Devideing";


    }
       void Clear()
    {
        _Number = 0;
        _CheckOpeartion(0);
        _OperationName = "Clearing";


    }

       void PrintResult()
       {
           cout << "Result After " << _OperationName << " " << _Number << " is :" << _Result << endl;
       }

    



};


int main()
{

    clsCalculater Calculater1; 

    Calculater1.Add(10);
    Calculater1.PrintResult();

    Calculater1.Substract(5);
    Calculater1.PrintResult();

    Calculater1.Add(100);
    Calculater1.PrintResult();

    Calculater1.Devied(2);
    Calculater1.PrintResult();

    Calculater1.Devied(0);
    Calculater1.PrintResult();

    Calculater1.Clear();
    Calculater1.PrintResult();
}
