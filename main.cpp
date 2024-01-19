#include <iostream>
#include<windows.h>
using namespace std;
void menu(){
cout<<"______________________________________________________________\n";
cout<<"\n    _______________     Digital timer       ________________\n";
cout<<"\n______________________________________________________________\n";
}
void timer(){
char check=' ';
bool while1;
menu();
int hours,minitue,second;
cout<<"\nHOURS :";
cin>>hours;
cout<<"\nMIN   :";
cin>>minitue;
cout<<"\nSEC   :";
cin>>second;
if(second>59||minitue>59||hours>23)
{cout<<"\nthat is invalid number\n";
cout<<"1:retry or Any num to exit?\n";
cout<<"your choice :";cin>>check;
}
if(check=='1')
{system("cls");timer();}
else if(check==' '){while1=true;}
else{while1=false;}
while(while1==true)
{
  system("cls");
  menu();
  if(second>59)
    {
      minitue++;
     second=0;
            }
    if(minitue>59)
    {
       hours++;
       minitue=0;
    }
cout<<"Time ="<<hours<<":"<<minitue<<":"<<second;
second++;
Sleep(500);
}
}
int main()
{
   timer();
    return 0;
}
