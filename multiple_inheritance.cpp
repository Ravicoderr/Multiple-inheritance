#include <iostream>
using namespace std;
class base1
{
protected:
    int num1;

public:
    void setnum(int a)
    {
        num1 = a;
    }
};
class base2
{
protected:
    int num2;

public:
    void setnum(int b)
    {
        num2 = b;
    }
};
class derieved : public base1, public base2
{
public:
    void print()
    {
        cout << "the sum of num1 and num2 is " << num1 + num2 << endl;
    }
    void master(int c, int d)
    {
        base1::setnum(c);
        base2::setnum(d);
        derieved::print();
    }
};
int main()
{
    int p, q;
    derieved ravi;
    cout << "enter the values of num1 and num2 " << endl;
    cin >> p >> q;
    ravi.master(p, q);
    return 0;
}