#include <iostream>

using namespace std;


//�rn 2 fonksiyonu
double reciprocal(int x)
{
    if(x==0)
    {
        return 0.0;
    }
    else
        return 1.0/x; //double bir de�iken verdi�im i�in 1 de�ilde 1.0 yaz�nca do�ru cevab� verdi.
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
�rnek 2
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
