/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
*/
#include <iostream>
#include <string>
using namespace std;

void merge(string &s, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    string leftHalf = s.substr(left, n1);
    string rightHalf = s.substr(mid + 1, n2);

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftHalf[i] <= rightHalf[j])
        {
            s[k] = leftHalf[i];
            i++;
        }
        else
        {
            s[k] = rightHalf[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        s[k] = leftHalf[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        s[k] = rightHalf[j];
        j++;
        k++;
    }
}

void mergeSort(string &s, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(s, left, mid);
        mergeSort(s, mid + 1, right);
        merge(s, left, mid, right);
    }
}

void sortString(string &s)
{
    int n = s.length();
    mergeSort(s, 0, n - 1);
}

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    sortString(S);

    cout << S << endl;

    return 0;
}
