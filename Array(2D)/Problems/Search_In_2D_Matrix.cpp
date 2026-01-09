#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int startRow = 0, lastRow = rows - 1;

    while (startRow <= lastRow)
    {
        int midRow = startRow + (lastRow - startRow) / 2;

        if (matrix[midRow][0] <= target &&
            target <= matrix[midRow][cols - 1])
        {
            return binarySearch(matrix[midRow], target);
        }
        else if (target > matrix[midRow][cols - 1])
        {
            startRow = midRow + 1;
        }
        else
        {
            lastRow = midRow - 1;
        }
    }
    return false;
}
bool binarySearch(vector<int> vec, int target)
{
    int st = 0, end = vec.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] == target)
        {
            return true;
        }
        else if (vec[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}