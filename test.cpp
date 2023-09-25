#include <iostream>
#include <vector>
#include <thread>

// 矩阵乘法函数
void matrixMultiply(const std::vector<std::vector<int>>& matrixA, const std::vector<std::vector<int>>& matrixB, std::vector<std::vector<int>>& result, int startRow, int endRow) {
    for (int i = startRow; i < endRow; ++i) {
        for (size_t j = 0; j < matrixB[0].size(); ++j) {
            int sum = 0;
            for (size_t k = 0; k < matrixA[0].size(); ++k) {
                sum += matrixA[i][k] * matrixB[k][j];
            }
            result[i][j] = sum;
        }
    }
}

// 并行矩阵乘法函数
void parallelMatrixMultiply(const std::vector<std::vector<int>>& matrixA, const std::vector<std::vector<int>>& matrixB, std::vector<std::vector<int>>& result, int numThreads) {
    int numRows = matrixA.size();
    int numCols = matrixB[0].size();
    int numElements = numRows * numCols;
    int rowsPerThread = numRows / numThreads;
    int remainingRows = numRows % numThreads;

    std::vector<std::thread> threads(numThreads);

    int startRow = 0;
    int endRow = 0;

    for (int i = 0; i < numThreads; ++i) {
        startRow = endRow;
        endRow = startRow + rowsPerThread;
        if (i < remainingRows) {
            endRow++;
        }
        threads[i] = std::thread(matrixMultiply, std::ref(matrixA), std::ref(matrixB), std::ref(result), startRow, endRow);
    }

    for (auto& thread : threads) {
        thread.join();
    }
}

// 打印矩阵函数
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // 定义两个矩阵
    std::vector<std::vector<int>> matrixA = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> matrixB = {{7, 8}, {9, 10}, {11, 12}};

    // 计算矩阵乘法
    int numRowsA = matrixA.size();
    int numColsA = matrixA[0].size();
    int numRowsB = matrixB.size();
    int numColsB = matrixB[0].size();

    // 创建结果矩阵
    std::vector<std::vector<int>> result(numRowsA, std::vector<int>(numColsB));

    // 并行计算矩阵乘法
    int numThreads = std::thread::hardware_concurrency();
    parallelMatrixMultiply(matrixA, matrixB, result, numThreads);

    // 打印结果矩阵
    printMatrix(result);

    return 0;
}
