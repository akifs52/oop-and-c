#include <iostream>

using namespace std;

int main()
{
    int number =88;
    int &refNumber=number;





   /* int *pNumber;
    pNumber = &number;
    */
   /*

    cout<< "pointer content is:"<< pNumber<<endl;

    cout << "value of number is: "<< number<<endl;

    cout << "adress of number is: " <<&number<<endl;

    cout << "pointed value is: "<<*pNumber<<endl;

    cou

    *pNumber=99;

    cout<< "pointer content is:"<< pNumber<<endl;

    cout << "value of number is: "<< number<<endl;

    cout << "adress of number is: " <<&number<<endl;

    cout << "pointed value is: "<<*pNumber<<endl;

    */


    cout << "value of number is: "<< number<<endl;

    cout << "value of reference: " <<refNumber<<endl;

    refNumber=99;

    cout << "value of reference: "<< refNumber<<endl;

    cout << "value of variable number: " <<number<<endl;

    number=55;

    cout << "value of number is: "<< number<<endl;

    cout << "value of reference: " <<refNumber<<endl;

    return 0;
}
