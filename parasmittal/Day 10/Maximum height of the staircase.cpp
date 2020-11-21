class Solution {
  public:
    int maxStairHeight(int N) {
        // Code here
        return (-1+(sqrt(1+8*N)))/2;
    }
};