#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    if (test_cases < 1 || test_cases > 5)
    {
        exit(-1);
    }

    while (test_cases != 0)
    {
        int no_of_items = 0;
        cin >> no_of_items;

        if (no_of_items < 0 || no_of_items > 500)
        {
            exit(-2);
        }

        int mx = INT_MIN;
        int mn = INT_MAX;

        int arr[no_of_items] = {0};

        for (int i = 0; i < no_of_items; i++)
        {
            cin >> arr[i];

            if (arr[i] > mx)
                mx = arr[i];

            if (arr[i] < mn)
                mn = arr[i];
        }

        cout << 2 * (mx - mn) << endl;

        test_cases--;
    }

    return 0;
}