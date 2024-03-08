//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsMyString.h"
#include "clsQueueLine.h"


using namespace std;

int main()
{

    clsQueueLine PayBillsQueue("A0", 10);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    
    PayBillsQueue.PrintLineTicket();



    system("pause>0");

    return 0;
}
