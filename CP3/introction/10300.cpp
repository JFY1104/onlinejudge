#include <iostream>
using namespace std;
int main()
{
    int case_numbers;
    cin >> case_numbers;
    for (int i = 0; i < case_numbers; i++)
    {
        int farmer_numbers;
        cin >> farmer_numbers;
        int sum = 0;
        for (int i = 0; i < farmer_numbers; i++)
        {
            int meter, animal_numbers, EF;
            cin >> meter >> animal_numbers >> EF;
            sum += (meter * EF);
            
        }
        cout << sum << endl;
    }
}
