
#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int n , int sz){
    int s =0;
    int e = sz-1;

    while(s<=e){
        int mid = s + (e-s)/2 ;
        if(arr[mid] == n)
            return mid;
        else if(arr[mid] > n){
            e = mid -1;
        }
        else{
            s = mid + 1 ;
        }
    }

    return -1 ;
}


int main()
{
    int arr[6] = {1, 5, 7, 8, 11, 12};
    int n = 8 ;
    int sz = 6 ;
    cout<<"At index: "<<binary_search(arr, n, sz);
    return 0;
}
