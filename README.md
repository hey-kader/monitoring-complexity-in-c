# Comparing complexity of popular sorting algorithms

### bubble sort O(n^2)

##### slowest sorting algorithm
##### should only be implemented for pedagogical reasons

### quick sort o(n log n)

##### best case complexity occurs when every element of the array is equal (O n log n)
##### logarithmically scales, but always takes one pass more than log(n)
##### recursive sort which is most often used in scaled processes

### merge sort 

##### I think this is also n*log(n), only merge sort is more consistent 
##### than quick sort when the list is partially sorted, or closer than not
##### this is a "stable sort", meaning wether the data is close or far from completely sorted
##### the varyance does not play a monumental role in execution time 

### insertion sort

##### best sorting algorithm to use when the data is probably already sorted, and the array
##### contains not very many elements 
##### If the list is sorted, insertion sort only takes one O(n) pass through to confirm

### shell sort

##### created by shell, implemented in K&R as an improvement to insertion sort 
##### generally faster than its worst-case-complexity O(n^2) and only as fast as O(n log n) when the list is already sorted
##### like insertion sort, only the list has to be already sorted in its entirety
##### shell sort should be used when the array is really thoroughly shuffled
##### when you need to move elements many positions in one iteration
