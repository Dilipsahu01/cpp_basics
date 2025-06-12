#include<iostream>
#include<vector>
#include<climits>
#include <algorithm>


using namespace std;
int main() {


//////                        majority element in the array  by mooriss /// answer will always exist in the given array

vector < int > v={1,2,3,1,1,2,2,1,4,1};
int major=v[0],frequency=1;
for (int i = 1;i< v.size();i++) {
        if (v[i]==v[i-1]) {
            frequency++;
        } else frequency--;
        if (frequency==0) {
            major = v[i];
            frequency=1;
        }
}
cout << major;


return 0;
}
