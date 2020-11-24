    #include <iostream>

    using namespace std;

    int main()

{
    //Question 1
    cout << "Fergus O Boyle" <<endl;


    //Question 2
    int num1;
    int num2;
    int num3;

    cout << "\n\nInput your first number please\n\n";

    cin >>num1;


    //Question 3 part 1
    cout << "\n\nInput your second number please\n\n";

    cin >>num2;

    num3 = num1 + num2;

    cout << "Num1 + Num2 = "<<num3;

    //Question 3 part 2
    float num4;
    float num5;
    float num6;

    cout <<" \nInput the next number please\n\n";

    cin >>num4;

    cout <<" \nInput the next number please\n\n";

    cin >>num5;

    num6 =num5 + num4;

    cout << "Num4 + Num5 = " <<num6;

    //Question 4 and 5 part 1
    float a,b,c,x,y;

    cout<< "\nInput value for A\n\n";

    cin >>a;

    cout<< "\nInput value for B\n\n";

    cin >>b;

    x=a+b;

    cout << " a + b = x " <<x;

    //Question 4 part 2

    cout <<"\nInput value for C\n\n";

    cin >>c;

    y=x-c;

    cout <<" x - c =" <<y;

    //Question 4 part 3

    cout<< "\nInput value for A\n\n";

    cin >>a;

    cout<< "\nInput value for B\n\n";

    cin >>b;

    x=a+b;

    cout << " a + b = x " <<x;


    cout <<"\nInput value for C\n\n";

    cin >>c;

    y=x-c;

    cout <<" x - c =" <<y;

    // Question 4 part 4
    cout<< "\nInput value for A\n\n";

    cin >>a;

    cout<< "\nInput value for B\n\n";

    cin >>b;

    x=a+b;

    cout << " a + b = x " <<x;

    cout <<"\nInput value for C\n\n";

    cin >>c;

    y=x-c;

    cout <<" x - c =" <<y;

    /*Question 6 Make the following program swap
      two numbers using the temp variable*/

    int h = 2, j = 50, temp;
    cout << "\n\nBefore swapping.\n\n";

    cout <<"h = " << h << ", j = " << j;
    temp=h;
    h=j;
    j=temp;
    //YOUR CODE to swap
    cout << "\nAfter swapping\n\n";
    cout << "h = " << h << ", j = " << j;

    /* Question 7 Make the program that can find the size of  variable types*/
    // Deceleration of Variables
    char A;
    int B;
    float C;
    double D;

    cout << "\n\nEnter Size of Char";
    cin >> A;
    cout << sizeof(A) << "byte";
    cout << "\n\nEnter an int";
    cin >> B;
    cout << sizeof(B) <<"byte";
    cout << "\n\nEnter Float";
    cin >> C;
    cout << sizeof(c) <<"byte";
    cout << "\n\nEnter a Double";
    cin >> D;
    cout << sizeof(D) <<"byte";

    /* Question 8 Make the following program take in
    the radius value and calculate the area of a circle*/

    cout <<"\n\nArea of a circle with radius";
    // Deceleration of variables.
    float PI = 3.14159;
    float Radius;
    float Area;

    cin >> Radius;
    Area = PI*Radius*Radius;
    cout <<Area<<"mm^2";

    // Question 9 Area of a rectangle

    cout << "\n\nArea of rectangle\n\n";
    // Deceleration of variables.
    float length;
    float breath;
    float area;
    cout <<"\n\nEnter length\n\n";
    cin >> length;
    cout <<"\n\nEnter breath\n\n";
    cin >> breath;
    area = length * breath;
    cout <<area<<"mm^2";

    // Question 10 Circumference of a circle
    cout << "\n\nCircumference of a circle\n\n";
    // Deceleration of variables.
    float circumference;
    cout <<"\n\nEnter radius\n\n";
    cin >> radius;
    circumference = 2 * PI * radius;
    << circumference << "mm";








    return 0;

}

