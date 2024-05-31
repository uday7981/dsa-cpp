#include <bits/stdc++.h>
using namespace std;

void doSomething(int &num1)
{

    cout << num1 << endl;
    num1 += 5;

    cout << num1 << endl;
    num1 += 5;
    cout << num1 << endl;
}

int main()
{

    int num1 = 10;
    doSomething(num1);
    cout << num1 << endl;
    return 0;
}
