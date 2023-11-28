#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int swaps = 0;

    for(int i=1; i<n; i++) {
        for (int j = 1; j<n; j++) {
            if (arr[j - 1] > arr[j]) {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
                swaps++;
            }
        }
    }
    if(swaps%2==0)
        cout << "Marcelo" << endl;
    else
        cout << "Carlos" << endl;
}
