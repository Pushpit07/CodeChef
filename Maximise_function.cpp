#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int test_cases = 0;
    cin >> test_cases;

    vector<int> arr;

    while (test_cases != 0)
    {
        int no_of_items = 0;
        cin >> no_of_items;

        int mx = INT_MIN;
        int mn = INT_MAX;

        for (int i = 0; i < no_of_items; i++)
        {
            int item = 0;
            cin >> item;

            mx = max(mx, item);
            mn = min(mn, item);
        }

        arr.push_back(2 * (mx - mn));

        test_cases--;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}