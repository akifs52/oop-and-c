#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    double prOfMin;
    double minutes;
    double prOfMb;
    double mb;
    double prOfSms;
    int sms;

    double totalMin=0.0,totalMb=0.0,totalSms=0.0,total=0.0,tax=0.0;

    cout << "Please enter your name: ";

    cin >>name;

    cout << endl;

    cout <<name << " ,please enter the price for call per minute: ";

    cin >>prOfMin;

    cout <<name << " ,please enter how many minutes you have talked: ";

    cin >>minutes;

    totalMin=(prOfMin*minutes)/100;

    cout <<name << " ,you have spent " << totalMin << "TL for the calls.\n\n";

    cout <<name << " ,please enter the price for internet usage per Mb: ";

    cin >> prOfMb;

    cout <<name << " ,please enter how many Mb you have used: ";

    cin >>mb;

    totalMb=(prOfMb*mb)/100;

    cout <<name << " ,you have spent " << totalMb << "TL for the internet.\n\n";

    cout <<name << " ,please enter the price for one SMS: ";

    cin >>prOfSms;

    cout <<name << " ,please enter how many SMS you have used: ";

    cin >>sms;

    totalSms=(prOfSms*sms)/100;

    cout <<name << " ,you have spent " << totalSms << "TL for the SMS.\n\n";

    total=totalMb+totalMin+totalSms;

    cout <<name << ", total cost for all services is: " <<total<< "TL."<< endl;

    tax=(total*18)/100;

    cout << name << ", tax is " <<tax << "TL."<< endl;

    total+=tax;

    cout <<name << ", total bill fee with tax is " << total << "TL.";



    return 0;
}
