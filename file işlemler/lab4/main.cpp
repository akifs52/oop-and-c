#include <iostream>
#include <string>
#include <sstream>
#define N 2
using namespace std;



struct car
{
    string brand;
    string model;
    int year;
    float yearage;
    float engineVolume;
    float weight;
};
float engine(struct car a[N])
{
    for(int i=0;i<N;i++)
    {
        cout <<i+1<< ".enter the car brand: ";
        getline(cin,a[i].brand);
        cout <<i+1<< "enter the car model: ";
        getline(cin,a[i].model);
    }


}
int main()
{
    struct car b[N];

    engine(b);

    for(int i=0;i<N;i++)
    {
        cout <<b[i].brand;
    }
    return 0;
}
