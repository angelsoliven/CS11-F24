## Setup
```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {

}
```

## Game plan
1. Create variables
    1. `double` income
    2. Constants 
    3. `double` tax
2. Take input for the income
3. Calculation (`if`s)
    ```cpp
    const int UPPER_BOUND_3 = 38959;
    const int UPPER_BOUND_4 = 54081;

    const double RATE_4 = 0.06;

    const double TAX_4 = 960.56;

    double tax;
    ```
    ```cpp
    // if() {...
    // 6% tax bucket

    else if (income > UPPER_BOUND_3 && income <= UPPER_BOUND_4) {
        tax = TAX_4 + RATE_4 * (income - UPPER_BOUND_3);
    }
    // More else ifs
    ```

4. Output the result back (with formatting)
    ```cpp
    cout << tax << endl;
    ```