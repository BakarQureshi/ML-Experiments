#include <iostream>
#include <vector>

using namespace std;

void func(vector<int>& arr){

    arr.at(1) = 2;

}

int main()
{

    vector<int> arr(3, 0);

    for(int i = 0; i < 3; i++){

        cout << arr.at(i) << endl;
    }

    cout << endl;

    func(arr);

    for (int i = 0; i < 3; i++)
    {

        cout << arr.at(i) << endl;
    }

    cout << endl;

    return 0;
}