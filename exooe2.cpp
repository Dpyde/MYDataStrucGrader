#include <iostream>
#include <cmath>

int main()
{
    int row, column, number;
    int r1, c1, r2, c2, temp;
    std::cin >> row >> column >> number;
    int matrix[row][column];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            std::cin >> matrix[i][j];
            // std::cout << matrix[i][j] << std::endl;
        }
    }
    // std::cout << "End matrix Initialized" << std::endl;
    for (size_t i = 0; i < number; i++)
    {
        std::cin >> r1 >> c1 >> r2 >> c2;
        // std::cout << r1 << c1 << r2 << c2;

        if (r2 < r1 || c2 < c1)
        {
            std::cout << "INVALID" << std::endl;
        }
        else
        {
            if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
            {
                std::cout << "OUTSIDE" << std::endl;
            }
            else
            {
                r1 = std::min(r1, row);
                c1 = std::min(c1, column);
                r2 = std::min(r2, row);
                c2 = std::min(c2, column);
                temp = matrix[r1][c1];
                for (int j = r1; j < r2 + 1; j++)
                {
                    for (int k = c1; k < c2 + 1; k++)
                    {    //std::cout<<matrix[j-1][k-1]<<"-";
                        if (j == r1 && k == c1)
                        {
                            temp = matrix[j - 1][k - 1];
                            // std::cout<<matrix[j-1][k-1]<<"--";
                        }
                        else
                        {   
                            temp = std::max(matrix[j - 1][k - 1], temp);
                        }
                    }
                }
                std::cout << temp;
                
            }
        }
    }
}
