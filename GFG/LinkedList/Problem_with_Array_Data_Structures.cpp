/*Problem with Array Data Structures

BACKGROUND AND INTRODUCTION

Previously we have seen arrays:

    int arr[100];
    int arr[n]; //n is an integer
    int *arr = new int[n];
    vector<int> v;

PROBLEM WITH ARRAYS

    1.  Either size is fixed and preallocated (in both fixed and variable sized arrays),
        OR The worst case insertion of element at the end is θ(n).
    
    2. Insertion in the middle (or beginning) is costly. (we run loop -> then shift -> then insert)
       It is costly for large number of elements.

    3. Deletion from the middle (or beginning) is also costly.

    4. Implementation of data structures like queue & dequeue is complex with arrays.
       (Since Insertion and deletion happens at different ends in them).


PROBLEMS DIFFICULT TO IMPLEMENT USING ARRAYS BUT EASY WITH  LINKED LIST

    1. Round Robin Scheduling

        we have a queue of waiting processes and token time is given.
        [10, 5, 3, 15, 10, 8] Token Time = 5
         p0 p1 p2  p3  p4 p5

        [ 5, 3, 15, 10, 8, 5] Token Time = 5
         p1 p2  p3  p4  p5 p0

    2. Given a sequence of items whenever we see an item 'x' in the sequence,
       we need to replace it 5 instances of another 'y'.
        IP: a b c x r t
        OP: a b c y y y y y r t
        **Note: We do not know how many 'x' are there.

        In array, we would need another array that has size defined after counting the no. of x's
        in the first given array.
    
    3. We have multiple sorted sequences and we need to merge them frequently.
        Sequences[] = {(1,2,3,4,5), (7,8,9), (10, 11, 12), ...}
        merge(0,1) = {(1,2,3,4,5,6,7,8,9), (10, 11, 12), ...}
        These merging will be costly with arrays
*/

