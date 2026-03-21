#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// given an integer a in the range [0, 1000] return if the number is a perfect square or not

// example 36 -> true
// 0 -> true
// 99 -> false

bool perfect_square(int a) {
    //1. find sqrt(a) 
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

// 10 / 10 logic + implementation
// 0 / 10 TC