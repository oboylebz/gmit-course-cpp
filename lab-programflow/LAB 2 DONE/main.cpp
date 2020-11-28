#include <iostream>
using namespace std;
#include "functions.h"

    int main ()
    {


    LabInfo ();//Question 1.
    cal();//Question 2.
    check();//Question 3.

    //Question 4.
    cout <<"\n\nQuestion 4\nPlease select one of the following Questions:\n\n";
    int x ;
    char a;
    cout <<"MENU:\n\n 1. Do you like c++? \n 2. Have you enough time for c++?\n 3. Would you rather be on holiday ?";
    cout<<"\n\nEnter Question number:";
    cin>>x;

    switch (x)
    {
    case 1:
        cout<<"\nDo you like c++?(y/n)";
        cin>>a;
        if (a=='y'){
            cout<<"\nYou must be jokeing\n\n";
        }
        else if (a=='n')  {
            cout<<"\nStick with it you will get it\n\n";
        }
        else {
            cout<< "You must enter y or n";
        }
        break;
    case 2:
        cout <<"\nHave you enough time to learn c++?(y/n)";
        cin>>a;
        if (a=='y'){
            cout <<"\nYou must not have a full time job\n\n";
        }
        else if  (a=='n'){
            cout<<"\nMe neither i feel your pain\n\n";
        }
         else {
            cout<< "You must enter y or n";
        break;
    case 3:
        cout<<"\nWould you rather be on holliday?(y/n)";
        cin>>a;
         if(a=='y'){
        cout<< "\nCORRECT ANSWER so would I\n\n";
        }
        else if (a=='n'){
            cout<<"\nLiar\n\n";
        }
         else {
            cout<< "\nYou must enter y or n.\n\n";
       }

       } break;
       default: cout<<"You must select a question number 1,2 or 3.";

    }


    AreaOfCircle();//Question 5.
    AreaOfRectangle();//Question6.
    TempHumidtyMonitering();//Question 7.



//Question 8.
     cout<<"\n\n\nWould you like to know the area of a circle with the range of radius 0-120 in 1 meters steps:(y/n)";
       cin>>a;
        if (a=='y'){
    //Deceleration of Variables
    float PI = 3.14159;

    float Area;

    for (float radius = 0; radius <= 120;++radius){

    Area = PI * radius * radius;
                cout<<"\nAns:" <<Area<<"M^2";}}

       else if (a=='n'){
            cout <<"\nThats OK not many people do.\n\n";
        }
         else {
            cout<< "\nYou must enter y or n.\n";
         }
    Conversion();//Question 9.
    FindEvenNumbers();//Question 10.
    FindOddNumbers ();//Question 11.
    OverloadQ11();//Question 12.
    Rand();//Question 13.
    FixCode();//Question 14.
    Finished3Ways ();//Question 15.

    return 0;


    }





