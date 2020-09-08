# Notes Lecture 3 CS50: Algorithms

<b>Types of algorithms</b>

- linear search
- Binary search (divide and conquer)
- 

### Linear search

```
    for i from 0 to n-1
        if i'th element is 50
            return true
    return false
```

### binary search

```
    if no items
        return false
    if middle item is 50
        return true
    else if 50 < middle item
        search left half
    else if 50 > middle item
        search right half

```
## algorithm comparison

![algorithm comparison](Images/firefox_301iqHrkDW.png)

big o notation = on the order of<br>
= efficiency of the algorithm<br>
O(N) O(N/2) O(log2N)<br>

## The bigger the problem the more binary and linear search become similar

![algorithm comparison with bigger problem set](images/firefox_CtOEWPIPhw.png)

<b>Common run times</b>

- O(n2) 
- O(n log n)
- O(n) = linear search
- O(log n) = binary search
- O(1)

omega = oppisite of big O<br>
= best cases<br>
Big O = upper bound
omega = lower bound

Ω