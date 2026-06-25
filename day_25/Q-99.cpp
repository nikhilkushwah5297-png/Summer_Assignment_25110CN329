#include<iostream>
using namespace std;
int main()
{
    string name[5], temp;
    for(int i=0; i<5; i++)
        cin >> name[i];
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(name[i] > name[j])
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
    cout << "Sorted Names:\n";
    for(int i=0; i<5; i++)
        cout << name[i] << endl;
    return 0;
}
