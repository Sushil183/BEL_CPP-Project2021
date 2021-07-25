#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

int login()
{
  char username[30];
  char password[30];
  //int true1 = 1;
  int try1 = 0;
  int i=0;
  do
  {
    system("cls");
    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\t\t\t\t    |KATHMANDU METRO POLICE STATION   |\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout << "Username : ";
    cin >> username;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Password : ";
    cin >> password;
    if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
      {
        PlaySound(TEXT("sucess.wav"), NULL, SND_SYNC);
        cout << "\n\n";
        cout << "\t\t\t\t";
        cout << "You are accessed to the system!\n\n";
        cout << "\t\t\t\t";
        system("pause");
        system("cls");
        //true1 = 0;
        return 1;
      }
      else
      {
        system("cls");
        try1 = try1+1;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t";
        PlaySound(TEXT("fail.wav"), NULL, SND_SYNC);
        cout << "No. of attempts remain: " << 3-try1;
        cout << "\n\n";
        cout << "\t\t\t\t";
        system("pause");
        if(try1>=3)
        {

          cout << "\t\t\t\t\t\t";
          cout << "\n";
          cout << "\t\t\t\t";
          PlaySound(TEXT("fail.wav"),NULL,SND_LOOP|SND_ASYNC);
          cin.get();
          cout << "No permission to enter the system!\n\n";
          cout << "\t\t\t\t";
          system("pause");
        }
      }
    }
 while(try1<3);
}


