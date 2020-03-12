#include <iostream>
using namespace std;
int choice;
int long num1, num2, num3;
int main()
{
#ifndef test
cout << "WELCOME TO THE CALC\n";
cout << "CHOOSE OPTION: \n";
cout << "\n\n1.ADDITION";
cout << "\n2.SUBTRACTION";
cout << "\n3.MULTIPLICATION";
cout << "\n4.DIVISON";
cout << "\n\nCHOICE: ";
cin >> choice;
#endif
#ifdef test
int i;
i=1;
while (i!=4) {
choice=i;
num1=10;
num2=4;
#endif
while(choice < 1 || choice > 4)
{
cout << "INVALID CHOICE\n";
cout << "CHOICE: \n";
cin >> choice;
}
char *a;
switch(choice)

//cases
{
case 1:
//Addition
#ifndef test
cout << "INPUT FIRST NUMBER: \n";
cin >> num1;
cout << "PLUS: \n";
cin >> num2;
#endif
num3 = num1 + num2;
a="+";
//cout << "YOUR ANS IS: " << num3 << "\n";
break;
    
  case 2:
    //Subtraction
#ifndef test
    cout << "INPUT FIRST NUMBER: \n";
cin >> num1;
    cout << "MINUS: \n";
    cin >> num2;
#endif
    num3 = num1 - num2;
a="-";
//    cout << "YOUR ANS IS: " << num3 << "\n";
    break;
    
  case 3:
    //Multiplication
#ifndef test
    cout << "INPUT FIRST NUMBER: \n";
      cin >> num1;
    cout << "TIMES: \n";
    cin >> num2;
#endif
    num3 = num1 * num2;
a="*";
//    cout << "YOUR ANS IS: " << num3 << "\n";
    break;
    
  case 4:
    //Divison
#ifndef test
    cout << "INPUT FIRST NUMBER: \n";
    cin >> num1;
    cout << "DIVIDED BY: \n";
    cin >> num2;
#endif
    num3 = num1 / num2;
a="/";
//    cout << "YOUR ANS IS: " << num3 << "\n";
    break;
}
cout << num1 << " " << a << " " << num2 << "=" << num3 << endl;
#ifdef test
i=i+1;
}
#endif
}
