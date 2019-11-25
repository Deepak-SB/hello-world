#include<bits/stdc++.h>

using namespace std;

// The idea here is to find the leftmost index and RightMost index of the given element, and subtract them 
int LeftMostIndex(vector<int> arr, int l , int r, int x){
    int mid;
    while(l <= r){
        int mid = l + (r-l)/2;
        if((arr[mid] == x) && ((mid == 0)||(arr[mid-1] != x))){
            //cout<<"the leftmost index of "<<x<<" is "<<mid<<endl;
            return mid;
        }
        if(arr[mid] >= x)
            r = mid - 1;
        else
            l = mid + 1;
        
    }

    return -1;
}

int RightMostIndex(vector<int> arr, int l, int r, int x){

        int flag = 0;
        int mid;
        while(l <= r){
         mid = l + (r-l)/2;
        if((arr[mid] == x) && ((mid == (arr.size()-1))||(arr[mid+1] != x))){
          // cout<<"the rightmost index of "<<x<<" is "<<mid<<endl;
           return mid;
        }
        if(arr[mid] <= x)
            l = mid + 1;

        else
            r = mid - 1;
            
     }

        return -1;
}
int main(){

    vector<int> arr = {2,3,3,3,3};

    int x = 3;
    int k = RightMostIndex(arr,0,(arr.size()-1),x);
    int m = LeftMostIndex(arr,0,(arr.size()-1),x);
    if((k == -1) ||(m == -1))
        cout<<"the element is not present"<<endl;
    else 
        cout<<"the number of occurences of the given element is "<<k - m + 1<<endl;
}