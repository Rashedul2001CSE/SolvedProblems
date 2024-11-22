#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int N;
        long long K;
        cin >> N >> K;

        long long totalWaterings = 0;

        for (int i = 0; i < N; ++i)
        {
            long long X, Y;
            cin >> X >> Y;

            long long waterings = K / X;
            totalWaterings += waterings;
        }

        cout << "Case " << t << ": " << totalWaterings << "\n";
    }

    return 0;
}
