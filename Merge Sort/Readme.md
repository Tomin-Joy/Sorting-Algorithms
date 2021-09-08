# Merge Sort
It belongs to the category of Divide and Conquer algorithms.
These algorithms operate by breaking down large problems into smaller, more easily solvable problems. 
The idea of the merge sort algorithm is to divide the array in half over and over again until each piece is only one item long. Then those items are put back together (merged) in sort-order.
<hr>
Let's have a look at an example:<br>
We start by dividing the array :
[31, 4, 88, 1, 4, 2, 42]<br><br>
[31, 4, 88, 1] , [4, 2, 42] //divided into 2 parts<br><br>
[31, 4] , [88, 1] , [4, 2]  [42] //divided into 4 parts<br><br>
[31] , [4] , [88] , [1] , [4] , [2] , [42] //dividing into single items <br><br>
Now we need to merge them back together in sort-order:<br><br>
First we merge single items into pairs. Each pair is merged in sort-order : 
[4, 31] , [1, 88] , [2, 4] , [42]<br><br>
Next we merge the pairs, again in sort order:
[1, 4, 31, 88] , [2, 4, 42]<br><br>
And then we merge the final two groups:
[1, 2, 4, 4, 31, 42, 88]<br><hr>

Now the array is sorted! The idea behind the algorithm is that smaller parts are easier to sort.
The merge operation is the most important part of the algorithm.