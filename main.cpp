#include <iostream>
#include <cstdlib>
#include "tstack.h"

using namespace std;
int main()
{
    srand(NULL);
    int length;
    cout << "Length"<<endl;
    cin >> length;
    sstack<int> st(length);
    for (int i = 0; i < st.getlen(); i++)
    {
        int tmp = rand() % 10;
        st.push(tmp);
        st.print();
        cout << endl;
    }
    int temp;
    while (st.pop(temp))
    {
        st.print();
        cout << endl;
    }
    return 1;

}