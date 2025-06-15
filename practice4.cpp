#include<iostream>
using namespace std;

int targetsearch(int* arr,int st,int ed,int target) {
    while(st<=ed){
        int mid = st+ ((ed-st)/2);
        if (target==arr[mid]) return mid;
        if(arr[st]<=target&&target<arr[mid]) {
                ed=mid -1;
        }
        else st=mid +1;
    }
 return -1;
 }

int main() {
int arr[10] = {5,6,7,8,9,0,1,2,3,4};
cout<<targetsearch(arr,0,9,4);




return 0;
}
