# Bubble Sort
It is an algorithm which is used to sort a list of elements, for example elements in an array.
The algorithm compares two adjacent elements and then swaps them if they are not in order.
The process is repeated until no more swapping is needed.
<br><br><br>
Let's take the following array: [3, 1, 5, 2]
Step 1: [1, 3, 5, 2] - the first two elements are compared and swapped.
Step 2: [1, 3, 5, 2] - the next pair is compared and not swapped, as they are in order.
Step 3: [1, 3, 2, 5] - the last two elements are swapped.

This was the first iteration over the array. Now we need to start the second iteration:<br>
Step 1: [1, 3, 2, 5]<br>
Step 2: [1, 2, 3, 5]<br>
Step 3: [1, 2, 3, 5]<br>

The third iteration will not swap any elements, meaning that the list is sorted!

The main advantage of Bubble Sort is the simplicity of the algorithm. Also, it does not require any additional storage space, as it operates in-place.
In terms of complexity, bubble sort is considered to be not optimal, as it required multiple iterations over the array. In the worst scenario, where all elements need to be swapped, it will require (n-1)+(n-2)+(n-3)+...+3+2+1 = n(n-1)/2 swaps (n is the number of elements).