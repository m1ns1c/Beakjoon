#include <iostream>
#include <stack>
#include <string>

using namespace std;
 
int arr[1000001];
int main(void)
{
    stack<int> st;

    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
        while (true)
        {
            if (st.empty())
            {
                st.push(i);
                break;
            }
            int a = st.top();
            if (num > arr[a])
            {
                arr[a] = num;
                st.pop();
            }

            else
            {
                st.push(i);
                break;
            }
        }
    }
    while (!st.empty())
    {
        int a = st.top();
        arr[a] = -1;
        st.pop();
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}

