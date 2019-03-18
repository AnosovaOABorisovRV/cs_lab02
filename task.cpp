#include <iostream>

using namespace std;

int main()
{
    //комментарий: последняя редакция Алисы
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    if(a == b)
        cout << "There is not MAX";
    else
    {
        if(a > b)
            cout << "MAX: " << a;
        else
            cout << "MAX: " << b;
    }

}
