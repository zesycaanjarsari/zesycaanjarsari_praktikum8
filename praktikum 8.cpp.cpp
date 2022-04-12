#include <iostream>
using namespace std;
int fib (int i)
{
    int pred, result, temp;
    pred = 1;
    result = 0;
    while (i > 0)
    {
        temp = pred + result;
        result = pred;
        pred = temp;
        i = i-1;
    }
    return(result);
}

int main()
{
    int n;
    cout<<"Masukkan angka fibonacci ke-berapa: ";
    cin>>n;
    while(n < 0)
    {
        cin>>n;
    }
    cout<<"Hasil angka fibonaccinya adalah "<<fib(n)<<endl;
    return(0);
}

