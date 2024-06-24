#include<iostream>
using namespace std;
 int main()
 {
    int choice;
    double num1, num2, result;
    cout<<"select an arithematic operation:\n";
    cout<< "1.Addition(+)\n";
    cout<< "2.Subtraction(-)\n";
    cout<< "3.Multiplication(*)\n";
    cout<< "4.Division(/)\n";
    cout<<"Enter your choice(1-4)";
    cin>>choice;

    if(choice>=1 &&choice<=4){
        cout<<"enter two number:";
        cin>> num1>>num2;
    }

    switch(choice){
        case 1 :
        result = num1+num2;
        cout << "Result of " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result of " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result of " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result of " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please choose a number between 1 and 4." << endl;
    }

    return 0;
}