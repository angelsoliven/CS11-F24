# Instructions
**Objective:** Write a function(s) which "deletes" the first occurrence of an element in a partially filled array,

## Background information
Recall currently we define arrays with a fixed size, meaning their capacity is set from the start. However, there are cases where we need flexibility to add or remove elements during program execution. To address this, we use a *partially filled array*.

A partially filled array has a set *capacity* defined upon declaration—the maximum number of elements it can hold. But it also maintains a *size* variable, which tracks the current count of valid elements in the array. Elements at the front of the array up to the size contain meaningful data, while the remaining slots are considered garbage values. By adjusting the size variable, we can add or remove elements as needed, as long as the number of elements stays within the array’s capacity. This makes partially filled arrays ideal for situations in which the amount of data stored is dynamic during the duration of the program.

## Steps
1. Write a function which returns the index of the first occurrence of the requested element to delete (using linear search).
    ```cpp
    /**
     * Performs linear search on an array, returning the index of
     * the first occurrence of an element.
     * 
     * @param a Array to search
     * @param size Size of `a`
     * @param target Element to find
     * @return Index of first occurrence of `target`, -1 if not found.
     */
   ```
2. Write another function which "deletes" the first occurrence of an element.
    ```cpp
    /**
     * Removes the first occurrence of an element from a partially filled array,
     * maintaining the original order. Also adjusts the size.
     * 
     * @param a Array to remove element from
     * @param size Size of `a`
     * @param target Element to "delete"
    */
   ```
    - Use the function you wrote in step one to find the element to delete.
    - Ensure to update the size.
    - Ensure the original order of the elements is maintained.
    - You may assume that the input is valid (the provided element to delete does exist).
3. **Challenge:** If the element to remove does not exist in the array, print an error message. 

## Test cases
### Case 1
Run your program with the assertion tests. See [`assert`](https://en.cppreference.com/w/cpp/error/assert).

Compile/run your program as follows (if you would like to use the test file) `del_github.cpp`:
```sh
g++ solution.cpp tests.cpp
./a.out
```