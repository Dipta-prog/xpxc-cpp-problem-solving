#include <iostream>
#include <vector>
using namespace std;

string findMaxStreak(int N, vector<int> &Om, vector<int> &Addy)
{
    int maxOmStreak = 0;
    int maxAddyStreak = 0;
    int currentOmStreak = 0;
    int currentAddyStreak = 0;
    for (int i = 0; i < N; i++)
    {
        if (Om[i] > 0)
        {
            currentOmStreak++;
            maxOmStreak = max(maxOmStreak, currentOmStreak);
        }
        else
            currentOmStreak = 0;

        if (Addy[i] > 0)
        {
            currentAddyStreak++;
            maxAddyStreak = max(maxAddyStreak, currentAddyStreak);
        }
        else
            currentAddyStreak = 0;
    }

    if (maxOmStreak > maxAddyStreak)
        return "Om";
    else if (maxOmStreak < maxAddyStreak)
        return "Addy";
    else
        return "Draw";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> Om(N);
        vector<int> Addy(N);

        for (int i = 0; i < N; i++)
        {
            cin >> Om[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> Addy[i];
        }

        string result = findMaxStreak(N, Om, Addy);
        cout << result << endl;
    }

    return 0;
}
