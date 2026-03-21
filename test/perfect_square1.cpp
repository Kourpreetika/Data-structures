#include <iostream>
#include <string>
#include <vector>
using namespace std;

// given an integer a in the range [0, 1000] return if the number is a perfect square or not

// example 36 -> true
// 0 -> true
// 99 -> false

int sqrt(int a) {

    // search space [0, a]
    int low = 0; int high = a;
    while(low <= high){
        int mid = (low + high) /2;
        if(mid * mid == a){
            return mid;
        }else if(mid * mid < a){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    
    return high;
}

bool perfect_square(int a) {
    //1. find sqrt(a)  
    //  int i ; i*i <=a;i++
    //2.introot = int(root)
    //3.introot * introot == a{
    // return true 
    // }
    // else false;
    int root = sqrt(a);
    if(root * root == a){
        return true;
    }else{
        return false;
    }
}

// 4 / 10
// 10 / 10
