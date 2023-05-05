#include <bits/stdc++.h>
void dfs(int row, int col, int color, int newColor, vector<vector<int>> &image)
{

    if (row < 0 || row >= image.size() || col < 0 || col >= image[0].size())
        return;

    if (image[row][col] != color)
        return;
    image[row][col] = newColor;

    dfs(row + 1, col, color, newColor, image);
    dfs(row - 1, col, color, newColor, image);
    dfs(row, col + 1, color, newColor, image);
    dfs(row, col - 1, color, newColor, image);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int color = image[x][y];
    if (color == newColor)
        return image;
    dfs(x, y, color, newColor, image);
    return image;
}