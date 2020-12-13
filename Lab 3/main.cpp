#include <iostream>

using namespace std;
#include "functions.h"
int main()
{
    //Question 1.
    cout<<"\nQuestion 1.\n";
  LabInfo ();

    //Question 2.
    cout<<"\nQuestion 2.\n";
    int arr[6];
    int x;
    int sca;
    int w;

    cout<<"\nEnter 6 Numbers to an Array\n";

    for (int i=0;i<6;i++)
    {
    cout<<"Please enter number: ";
    cin>>arr[i];
    if(arr[i]>100||arr[i]<0){
    i=x;
    cout<<"Please enter a number between 0 and 100\n\nTry Again\n\n";
    }
    }
    cout<<"\nThe Array you Entered is: ";
    for (int i=0;i<6;i++)
        {
        cout<<arr[i]<<",";

        }
    cout<< "\nWell done.\n";

//Question 3
    cout <<"\nQuestion 3.";
 cout<<"\nThe Addresses are: ";
    for (int i=0;i<6;i++)
        {
        cout<<arr[i]<<" = "<<&arr[i]<<", ";

        }
    //Question 4.
    cout<<"\n\nQuestion 4.";
    cout <<"\n\nPlease Enter a scaler value:";
    cin>>sca;
    cout<<"\nQuestion 5/6.\n";
     for (int i=0;i<6;i++){
   w=arr[i]*sca;

    cout<<"Multiplied Value = "<<w<<"  Address = "<<&w<<",\n";
     }

    cout<<"\n\nQuestion 7.\n";
int rows=5;
	pyramid(0,rows);
    pyramid(rows/2,rows);
	base(rows);
}
