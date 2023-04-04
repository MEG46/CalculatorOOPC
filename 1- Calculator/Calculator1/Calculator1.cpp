
#include "Header1i.h"
int main()
{
    int counter = 1;
    while (counter>0) {
        Calculator cal;
        char ch;
        float num1, num2;
        if (counter == 1) { 
            cout << "Please enter a number : ";
            cin >> num1;
            cout << "Please enter a process : ";
            cin >> ch;
            cout << "Please enter a number : ";
            cin >> num2;
            if (ch == '+') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Sum();
                num1 = cal.getResult();

            }else if (ch == '-') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Subs();
                num1 = cal.getResult();
            }
            else if (ch == '*'||ch=='x') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Mult();
                num1 = cal.getResult();
            }
            else if (ch == '/') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Divide();
                num1 = cal.getResult();
            }
            else {
                cout << "Invalid Process!" << endl;
            }
        }
        else {
            num1 = num1 = cal.getResult();
            cout << "Num : " << num1 << endl;
            cout << "Please enter a process : ";
            cin >> ch;
            cout << "Please enter a number : ";
            cin >> num2;
            if (ch == '+') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Sum();
                num1 = cal.getResult();

            }
            else if (ch == '-') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Subs();
                num1 = cal.getResult();
            }
            else if (ch == '*' || ch == 'x') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Mult();
                num1 = cal.getResult();
            }
            else if (ch == '/') {
                cal.setNum1(num1);
                cal.setNum2(num2);
                cal.Divide();
                num1 = cal.getResult();
            }
            else {
                cout << "Invalid Process!" << endl;
            }
        }
        counter++;
    }
}
