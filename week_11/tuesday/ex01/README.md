# Instructions
**Objective:** Write a function which finds the intersection of the elements of two vector.

## Background information
The intersection of two sets, $A$ and $B$ is defined as the set which contains elements of $A$ which are also found in $B$, or equivalently, all elements in $B$ also found in $A$. This may be symbolically written as $A \cap B$. Note, a set is normally defined as a collection of distinct (not repeating) elements, but for this exercise, $A$ and $B$ may contain duplicates, the resultant set should **not** contain any duplicates. 

## Steps
1. Write another function which finds the intersection of two vectors. Be sure to use the provided `contains()` function.
    ```cpp
    /**
     * Intersection of two sets.
     * 
     * The intersection of two sets `a` and `b`, denoted by a ∩ b, is the set 
     * containing all elements of a that also belong to b or equivalently, 
     * all elements of a that also belong to b. 
     * @see https://en.wikipedia.org/wiki/Intersection_(set_theory)
     * 
     * @param a, b Set of elements
     * @return a ∩ b
     */
    vector<int> intersection(vector<int> a, vector<int> b)
   ```

## Test cases
### Case 1
See printed tests.
```
{1, 2, 2, 1, 1} ∩ {2, 2, 1000, 12} = {2}
{4, 9, 5, 2, 3, 2, 9, 9} ∩ {12, 23, 3, 4, 0, 9} = {4, 9, 3}
```