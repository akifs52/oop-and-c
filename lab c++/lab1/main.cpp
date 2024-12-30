#include <iostream>

using namespace std;


//örn 2 fonksiyonu
double reciprocal(int x)
{
    if(x==0)
    {
        return 0.0;
    }
    else
        return 1.0/x; //double bir deðiken verdiðim için 1 deðilde 1.0 yazýnca doðru cevabý verdi.
}


int cost (int areacodes,int duration)
{
    if(areacodes>=200 && areacodes<=299)
    {
        return 100*duration;
    }
    else if(areacodes>=300 && areacodes<=499)
    {
        return 150*duration;
    }
    else
        return 300*duration;


}
int main()
{

/*
örnek 2
int m,n;

double sum=0.0;

cout<<"enter two variables:\n";

cin >>m >>n;

if(m>=n)
{
    if(m==0 || n==0)
    {
        reciprocal(0);
    }
    else
    {
        while(m>=n)
       {
          sum += reciprocal(n);
          n++;
        }
    }
}

else if(n>=m)
{
     if(m==0 || n==0)
    {
        reciprocal(0);
    }
    else
    {
       while(n>=m)
      {
         sum += reciprocal(m);
         m++;
      }
    }

}

cout <<"answer is:"<< sum;

*/



int kod,sure;

cout <<"enter your duration:\n" ;

cin >>sure;

cout <<"enter your areacode:\n" ;

cin >>kod;

cout << "cost is:\n" << cost (kod,sure);
    return 0;
}
