#include <iostream>
#include <chrono>
using namespace std;

int n, a[100000];
void sort();

int main()
{
    long int max_tries = 1000000000;
    for (n = 10; n < 30000; n *= 1.3)
    {
        int max_tries_n = max_tries / n / n;
        double res = 0.0;
        for (int tries = 0; tries < max_tries_n; tries++)
        {
            for (int i = 0; i < n; i++)
                a[n - 1 - i] = i;
            auto start = chrono::high_resolution_clock::now();
            sort();
            auto end = chrono::high_resolution_clock::now();
            for (int i = 0; i < n; i++)
                if (a[i] != i)
                {
                    for (int i = 0; i < n; i++)
                       cout << a[i] << " ";
                    cout << endl << "Not sorted, lol." << endl;
                    return 0;
                }
            chrono::duration<double> diff = end - start;
            res += diff.count();
        }
        // cout << n << "\t\t" << diff.count() << endl;
        cout << res / max_tries_n << endl;
    }
    return 0;
}

#include "sort.h"
