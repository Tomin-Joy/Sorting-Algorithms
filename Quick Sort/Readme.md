# QuickSort
It is another algorithm from the Divide and Conquer category. 
It operates by breaking down large problems into smaller, more easily solvable problems. 

The idea of QuickSort is the following: a pivot element is picked. The versions of QuickSort differ in the way of pivot picking. First, last, median, or even a randomly selected element is a candidate to be picked as the pivot.

The primary part of the sort process is partitioning. Once the pivot is picked, the array is partitioned into two halves - one half containing all the elements less than the pivot and the other half containing the elements greater than the pivot. The equal ones can remain either side. Then, the same process occurs to the remaining halves of the array recursively, eventually resulting in a sorted array.

# Example

Suppose we have the following sequence:
[ 2, 0, 7, 4, 3 ]<br>
We choose 3 (last element) as the pivot. <br>
After doing 4 comparisons we get the two halves:
[ 2, 0 ] (3) [ 7, 4 ]<br>
Now, the same process repeats for the two halves. <br>We choose (0) as a pivot for the lesser half, and (4) for the greater half.<br>
After a comparison for each half, we get:
[ (0) [2] ] (3) [ (4) [7] ]
Which is a sorted sequence.

# Advantages / Disadvantades

QuickSort operates in-place, so it doesn't require extra storage.
The choice of the pivot makes a big difference, as an unsuccessful pivot selection can decreases the algorithm's speed significantly.

A variation of QuickSort is the 3-way QuickSort - it divides the sequence into three pieces: smaller, greater, and equal. This makes it more convenient for data with high redundancy (repetitions).