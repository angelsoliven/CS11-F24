# Instructions
**Objective:** Write a function which finds the Minkowski Sum of the elements of two vectors.

## Background information
The Minkowski Sum of two sets, $A$ and $B$ is defined as the set which contains every elements of $A$ added to every element of $B$, or equivalently, every element in $B$ added to every element of a $A$. 

## Steps
1. Write another function which finds the minkowski sum of two vectors (sets). Return the resultant set.
    ```cpp
    /**
     * Minkowski Sum of two sets.
     * 
     * The Minkowski Sum of two sets, A and B is defined as the set which contains
     * every elements of A added to every element of B, or equivalently, every
     * element in B added to every element of a A. 
     * @see https://en.wikipedia.org/wiki/Minkowski_addition
     * 
     * @param a, b Set of elements
     * @return a + b
     */
    vector<int> minkowski_sum(vector<int> a, vector<int> b)
    ```

## Test cases
### Case 1
See printed tests.
```
{1, 2, 3} + {2, 4, 6, 8} = {3, 5, 7, 9, 4, 6, 8, 10, 5, 7, 9, 11}
{32, 64, 96} + {0, 1, 1, 2, 3, 5} = {32, 33, 33, 34, 35, 37, 64, 65, 65, 66, 67, 69, 96, 97, 97, 98, 99, 101}
```