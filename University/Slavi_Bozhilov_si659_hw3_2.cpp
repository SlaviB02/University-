#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    const int N_ATHLETES{ 4 };
    const int N_ATTEMPTS{ 3 };
    string names[N_ATHLETES]{ "Петров","Иванов","Асенов", "Илиев" };
    double result[N_ATHLETES][N_ATTEMPTS]{};
    double max_result = 0;
    int idx_athlete = -1;
    int idx_attempt = -1;

    for (int i = 0; i < N_ATTEMPTS; i++)
    {
        cout << "******Опит " << i + 1 << "******" << endl;
        for (int j = 0; j < N_ATHLETES; j++)
        {
            cout << "Състезател " << j + 1 << ": ";
            cin >> result[j][i];
            if (result[j][i] > max_result)
            {
                max_result = result[j][i];
                idx_athlete = j;
                idx_attempt = i;
            }
        }
        cout << "Най-добър резултат : " << max_result << "м Състезател " << names[idx_athlete] << " опит " << idx_attempt + 1 << endl;

    }


    cout << endl;

    cout << "Резултати\n";
    cout << "Aтлет\tOпит1\tOпит2\tOпит3\n";
    for (int i{ 0 }; i < N_ATHLETES; i++) {
        cout << names[i] << '\t';
        for (int j{ 0 }; j < N_ATTEMPTS; j++) {
            cout << result[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    cout << "****Победител****" << endl;
    cout << "Състезател " << names[idx_athlete] << " опит " << idx_attempt + 1 << " Резултат : " << max_result << "м";
}

