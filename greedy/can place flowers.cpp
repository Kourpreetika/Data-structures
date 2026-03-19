class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
   for(int i = 0 ; i < flowerbed.size(); i++){
    int left;
    int right;
    if(i == 0){
        left = 0;
    }else{
        left = flowerbed[i-1];
    }
    if(i == flowerbed.size()-1){
        right = 0;
    }else{
        right = flowerbed[i+1];
    }
    if(flowerbed[i] == 0 && left == 0 && right == 0){
        flowerbed[i] = 1;
        n--;
        i++;
    }
   }
    return n <= 0;
   }
};