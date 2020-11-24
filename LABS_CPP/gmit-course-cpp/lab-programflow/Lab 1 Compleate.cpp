#include <iostream>

using namespace std;

int main()
{
    cout<< "Lab Task 1\n";//Print Operator Name
    cout << "Brendan O Boyle\n\n" ;

    //Deceleration of Variables
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    cout<< "Lab Task 2/3\n";
    // Take in 2 numbers and add them
    cout<< "Enter First Numeric Value:";
    cin >> num1;
    cout<< "\n\nEnter Second Numeric Value:";
    cin>> num2;
    num3=num1+num2;
    cout<< "\nAns:"<<num3;
    //take in 2 numbers with decimals and add them
    //Deceleration of Variables
    float num6,num7,num8,num9,num10,a,b,c,x,y;
    cout<<"\n\nEnter Third Numeric Value:";
    cin >>num6;
    cout<< "\n\nEnter Forth Numeric Value:";
    cin >>num7;
    num8=num6+num7;
    cout<<"\nAns:"<<num8;

    cout<< "Lab Task 4/5";// Declared a,b,c,x,y as floats to accomadate decimals
    //Take in three numbers a,b,c
    cout << "\n\nEnter Value for a : ";
    cin>>a;
    cout<<"\n\nEnter Value for b : ";
    cin>>b;
    x=a+b;
    cout<< "\nAns: "<<x;
    cout<< "\n\nEnter Value for c : ";
    cin>>c;
    y=x-c;
    cout << "\n\na+b-c="<<y;
     //Take in three numbers a,b,c
    cout << "\n\nEnter Value for a : ";
    cin>>a;
    cout<<"\n\nEnter Value for b : ";
    cin>>b;
    x=a+b;
    cout<< "\nAns: "<<x;
    cout<< "\n\nEnter Value for c : ";
    cin>>c;
    y=x-c;
    cout << "\n\na+b-c="<<y;
     //Take in three numbers a,b,c
    cout << "\n\nEnter Value for a : ";
    cin>>a;
    cout<<"\n\nEnter Value for b : ";
    cin>>b;
    x=a+b;
    cout<< "\nAns: "<<x;
    cout<< "\n\nEnter Value for c : ";
    cin>>c;
    y=x-c;
    cout << "\n\nAns:a+b-c="<<y;


    cout<< "\n\nTask 6";//make the program swap two numbers
    int e=10,f=5,temp;// i used the letters e and f to aviode conflicting declaration

    cout<<"\n\nBefore Swapping\n\n";

    cout <<"e="<<e<<",f="<<f;
    temp=e;
    e=f;
    f=temp;

    // code to swap
    cout<<"\nAfter Swapping\n\n";
    cout<<"e="<<e<<",f="<<f;

    cout<< "\n\n Task 7\n\n";
    //make a program that will find the size of a variable type.
    //Deceleration of Variables
    char A;
    int B;
    float C;
    double D;
    cout<<"What size are the following Variables\n";

    cout<<"\nPlease enter a single char:";
    cin>> A;
    cout<<"\nAns:"<<sizeof(A) << "byte";
    cout<< "\n\nPlease Enter a int:";
    cin>>B;
    cout<<"\nAns:"<<sizeof(B) <<"byte";
    cout<<"\n\nPlease Enter a float:";
    cin>>C;
    cout<<"\nAns:"<<sizeof(C)<<"byte";
    cout<<"\n\nPlease Enter a double:";
    cin>>D;
    cout<<"\nAns:"<<sizeof(D)<<"byte";
    cout<<"\n\n\Task 8\n\n";
    cout<<"What is the area of a circle with the following radius in mm:";
    //Deceleration of Variables
    float PI = 3.14159;
    float radius;
    float Area;
    cin>>radius;
    Area = PI * radius * radius;

    cout<<"\nAns:" <<Area<<"mm^2";
    cout<<"\n\nCalculate the Area of Rectangle ?\n\n";
    //Deceleration of Variables
    float length;
    float breath;
    float area;
    cout<<"Enter Length in mm:";
    cin>>length;
    cout<<"\n\nEnter Breath in mm:";
    cin>>breath;
    area = length * breath;
    cout<<"\n\nArea of Rectangle is  "<<area<<"mm^2\n\n";
    cout<<"\n\n\nFind the Circumference of a circle ?\n\n";
    float circumference;
    cout<< "Enter Radius in mm:";
    cin>>radius;
    circumference=2*PI*radius;
    cout<<"\nAns:Circumferance="<<circumference<<"mm";
    cout<<"\n\nLab 1 in c++ Compleat\n\n";











    return 0;
}
