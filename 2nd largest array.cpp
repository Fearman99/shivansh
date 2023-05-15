#include <iostream>

using namespace std;

class solutions {
public:
     int s(int arr[], int n) {
        for (int i = 0; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (arr[i] > arr[j]) {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    return arr[i];
                }
            }
        }//cout<<arr[2];
    }


};

int main() {
    int arr[10]={1,7,87,65,3,4};
    int n= sizeof(arr);
    cout << "Hello, World!" << endl;
    s(arr[10] , n);
    return 0;
}

