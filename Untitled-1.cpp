#include <iostream>
#include <cmath>

using namespace std;

double y(double x, int n) 
{
    if (x < 0) 
    {
        double product = 1.0;
        for (int j = 2; j <= n - 2; j++) 
        {
            product *= (j * j + x);
        }
        return product;
    } else 
    {
        double sum = 0.0;
        for (int i = 0; i <= n - 1; i++) 
        {
            double product = 1.0;
            for (int j = 0; j <= n - 1; j++) 
            {
                product *= (x + i * i + j);
            }
            sum += product;
        }
        return sum;
    }
}
void readData(double &x_start, double &x_end, double &step, int &n) 
{
    cout << "Enter the initial value x: ";
    cin >> x_start;
    cout << "Enter the final value x: ";
    cin >> x_end;
    cout << "Enter the magnification step x: ";
    cin >> step;
    cout << "Enter the value n: ";
    cin >> n;
}

int main() 
{
    double x_start, x_end, step;
    int n;
    
    readData(x_start, x_end, step, n);
    
    cout << "result:" << endl;
    for (double x = x_start; x <= x_end; x += step) 
    {
        cout << "y(" << x << ", " << n << ") = " << y(x, n) << endl;
    }
    
    return 0;
}
