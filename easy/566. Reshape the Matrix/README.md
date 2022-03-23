# 566. Reshape the Matrix

---

## Problem

In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

### Example 1

Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]

### Example 2

Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]

### Constraints

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- -1000 <= mat[i][j] <= 1000
- 1 <= r, c <= 300

---

## Solution

The way to solve is a simple iteration through the matrix, and have two variables for keeping track of which index of the new matrix to fill on each iteration. We achieve this by checking when we reach the desired index for the column, we reset it back to zero; incrementing the row count for the new matrix.

Finally just return the matrix.

### Time Complexity

O(row\*col)

### Space Complexity

O(1) ~ excluding the space reserved for the new matrix

---

**NGL** it was quite hard for me to come up with a quick solution. So I looked it up online and felt so dumb as I was basically 80% there and gave up, welp lesson learned to go 101% before looking up the solution
