#include <vector>
#include <iostream>
using namespace std;


//matrix problem combines with binary search, please solve them

    int upperBound(vector<int>& row, int value){
        int rowsize = row.size();
        int low = 0;
        int high = rowsize -1;
        int ans = rowsize;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(row[mid]>value){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
    return ans;
    }

int findRowWithMaximumOnes(vector<vector<int>> &matrix)
{
  int noOfRows = matrix.size();
  int noOfColumns = matrix[0].size();

  int maxCount = 0;
  int index = -1;


    //TC = O(noOfRows * (log2(noOfColumns)));
    //SC = O(1)
  for(int i=0;i<noOfRows;i++){
    //count will give the no of ones in that row
    int count = noOfColumns - upperBound(matrix[i], 0);

    if(count>maxCount){
        maxCount = count;
        index = i;
    }
  }
  return index;
}

int main()
{
    vector<vector<int>> matrix = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};

    cout << findRowWithMaximumOnes(matrix);
    return 0;
}
