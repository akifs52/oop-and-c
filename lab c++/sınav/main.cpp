#include <iostream>

using namespace std;

struct student{



 char studentName[10];

 float stuWeight;

 float stuHeight;

 float studentRatio;

};

void studentInformation(struct student s[3])
{
    for(int i=0;i<3;i++)
    {
        cout<<"enter "<<i+1<<". child name: " <<endl;

        cin >>s[i].studentName;

        cout<<"enter "<<i+1<<". child weight:"<< endl;

        cin >>s[i].stuWeight;

        cout<<"enter "<<i+1<<". child height:" <<endl;

        cin >>s[i].stuHeight;
    }

}

float weightHeightRatioFinder(struct student t[3])
{

    for(int i=0;i<3;i++)
    {
        t[i].studentRatio=t[i].stuWeight/t[i].stuHeight;
        return t[i].studentRatio;
    }
}


int main()

{
    struct student students[3];

    studentInformation(students);

    weightHeightRatioFinder(students);



}
