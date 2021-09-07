# Insertion Sort

It is a simple sorting algorithm that works the way we sort playing cards in our hands. We sort the first two cards and then place the third card in the appropriate position within the first two, and then the fourth is positioned within the first three, and so on until the whole hand is sorted.

During an iteration, an element of the list is inserted into the sorted portion of the array to its left. So, basically, for each iteration, we have an array of sorted elements to the left, and an array of other elements still to be sorted to the right.
Sounds confusing? Let's look at an example to better understand the algorithm.
<hr>
Take the following array: [3, 1, 5, 2]<br>
Step 1: We start with the second element (1) and properly position it in the "array" of the first two elements.<br>
&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;Result: [1, 3, 5, 2] - now we have a sorted array to the left ([1, 3]), and the other elements to the right. 

Step 2: The next element is 5. Inserting it into the array to the left results in [1, 3, 5, 2].

Step 3: The last element (2) is inserted into the corresponding position, resulting in: [1, 2, 3, 5]