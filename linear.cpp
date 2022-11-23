#include <iostream>
using namespace std;
bool search(int array[], int size, int no)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == no)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int array[10] = {1, 4, 5, 6, 7, 8, 9, -10, 22, 1};
    cout << "enter the element to search for" << endl;
    int no;
    cin >> no;
    bool found = search(array, 10, no);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
    return 0;
}