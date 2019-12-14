#include <iostream>
#include "dynarr.h";
#include "dynarr.cpp";

using namespace std;

int main()
{
    dynArr<int> arr(4);
    for (int i=0;i<4;i++){
        int x;
        cin>>x;
        arr.setValue(i,x);
    }
    for (int i=0; i<4; i++){
        cout<<arr.getValue(i);
    }
    return 0;
}
