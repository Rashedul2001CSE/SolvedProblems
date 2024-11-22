#include <bits/stdc++.h>

using namespace std;
double fun(double A, double s)
{
    double l = (A - s * s) / (2 * s);
    if (l <= s / 2)
        return 0;
    double h = sqrt(l * l - (s / 2) * (s / 2));
    return (1.0 / 3.0) * s * s * h;
}

int main()
{
    double A;
    while (cin >> A)
    {
        if (A < 0)
            break;

        double left = 0, right = sqrt(A);
        double ans = 0;

        while (right - left > 1e-7)
        {
            double mid = (left + right) / 2;
            double volume = fun(A, mid);
            if (volume > ans)
            {
                ans = volume;
            }

            left = mid;
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;
}