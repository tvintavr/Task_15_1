#include <iostream>
#include <vector>
#include <cassert>
#include <limits.h>


int main() {
    std::vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int max=INT_MIN;
    int first=0;
    int last=0;
    for (int i=0;i<a.size();i++) {
        for (int j=i;j<a.size();j++) {
            int sum=0;
            for (int k=i;k<=j;k++) {
                sum+=a[k];
            }
            if (sum>max) {
                max=sum;
                first=i;
                last=j;
            }
        }
    }
    std::cout<<std::endl<<"sum: "<<max<<" first: "<<first<<" last: "<<last;
}