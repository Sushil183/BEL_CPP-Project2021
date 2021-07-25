#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

/*void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}*/

void homepage()
{
  int process=0;
  system("cls");
  //date1();
  cout << "\n";
  cout <<"\t\t\t\t\t      ----------------------------------\n";
  cout <<"\t\t\t\t\t      |KATHMANDU METRO POLICE STATION  |\n";
  cout <<"\t\t\t\t\t      ----------------------------------\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"Prepared By    ";
  cout <<":";
  cout <<"Rachana(033)| Shashwot(043)| Sushil(047)";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"Project Name  ";
  cout <<":";
  cout <<"Computerized FIR Management System";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"\n\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  system("pause");
  cout <<"\n\t\t\t\tLoading";

  for(process=0;process<25;process++)
  {
    Sleep(100);
    cout <<".";
  }
  PlaySound(TEXT("sucess.wav"), NULL, SND_SYNC);
}
