#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
int main()
{
    char num[10];
    cin >> num;
    int n = strlen(num);
    sort(num,num+n);
    do
    {
     for(int i=0;i<n;i++)
        cout << num[i];
        cout << endl;
    }while( next_permutation( num, num+n));
}

