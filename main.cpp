#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void justPrintHelloWorld() { // 1
    cout << "Hello, world!";
}

int getNextEvenNumber(int num) { // 2
    int answer;
    answer = (num + 2 - num % 2);
    return answer;
}

int evenNumberOrNot(int a) { // 3
    if (a % 2 == 0)
        return 1;
    return 0;
}

int isSymmetryOrNot(int num) { // 4
    int answer, one, two;
    one = num / 100;
    two = (num % 10) * 10 + (num % 100) / 10;
    answer = one - two + 1;
    return answer;
}

int getSummaOfDigits(int num) { // 5
    int answer = 0, digit;
    while (num > 0) {
        digit = num % 10;
        answer += digit;
        num /= 10;
    }
    return answer;
}

int getNumberOfDigits(int num) { // 6
    string text;
    int answer;
    text = to_string(num);
    answer = text.length();
    return answer;
}

double numIntoPow(double a, double b) {
    double r = a;
    if (b < 0)
    {
        b *= -1;
        for (int i = 1; i < b; i++)
        {
            r *= a;
        }
        r = 1 / r;
    }
    else if (b == 0)
        r = 1;
    else
    {
        for (int i = 1; i < b; i++)
        {
            r *= a;
        }
    }
    return r;
}

bool checkNumberOrNo(int a) { // 8
    int y = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && i != a && i != 1)
            return false;
    }
    return true;
}

void printMenu() {
    cout << "Hello! Welcome to FunnyCalc!" << endl << "My possibilities:" << endl;
    cout << "1. Hello, world!" << endl << "2. Checking for a next even number" << endl;
    cout << "3. Checking a Number for Even" << endl << "4. Checking a number for symmetry" << endl;
    cout << "5. Summa of number digits" << endl << "6. Number of number digits" << endl;
    cout << "7. Entering a number to a power" << endl << "8. Checking for a number" << endl;
    cout << "- - - - -" << endl << "Choose a function:" << endl;
}


int main() {
    int num, a, b, result;

    printMenu();

    cin >> num;
    while (num != 9) {
        if (num == 1) {
            justPrintHelloWorld();
        } else if (num == 2) {
            cout << "Enter number: ";
            cin >> a;
            result = getNextEvenNumber(a);
            cout << result;
        } else if (num == 3) {
            cout << "Enter number: ";
            cin >> a;
            result = evenNumberOrNot(a);
            cout << result;
        } else if (num == 4) {
            cout << "Enter number: ";
            cin >> a;
            result = isSymmetryOrNot(a);
            if (result == 1) {
                cout << "Number is symmetrical";
            } else {
                cout << "Number is not symmetrical";
            }
            cout << result;
        } else if (num == 5) {
            cout << "Enter number: ";
            cin >> a;
            result = getSummaOfDigits(a);
            cout << result;
        } else if (num == 6) {
            cout << "Enter number: ";
            cin >> a;
            result = getNumberOfDigits(a);
            cout << result;
        } else if (num == 7) {
            cout << "Enter main number: ";
            cin >> a;
            cout << "Enter degree: ";
            cin >> b;
            result = numIntoPow(a, b);
            cout << result;
        } else if (num == 8) {
            cout << "Enter number: ";
            cin >> a;
            result = checkNumberOrNo(a);
            cout << result;
        }
        else if (num == 9) {
            cout << "Good buy!";
        }
        cout << endl << "- - - - - " << endl << "Choose next function: " << endl;
        cin >> num;
    }
    cout << "Good buy :3";
    return 0;
}
