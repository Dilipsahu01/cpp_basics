 ////    maximum water stored problem
                           // maximum water means height * width max .. ... so focus on that part only with two pointer approach
#include<iostream>
using namespace std;
int main() {
vector<int> v={1,2,3,4,5,6,7,8};     /////{2,5,6,2,8,4,9,4,1};
int st=0,ed=v.size()-1;int w,h; int maxvol=0;
while(st<ed) {
    w=ed-st;
    h=min(v[st],v[ed]);
    maxvol=max(maxvol,w*h);
    st<ed?st++:ed--;
}
cout<< maxvol;
return 0;
}
