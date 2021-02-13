(Note : in Order to better understand this optimised please make sure you have a depth understanding in C programming and pointers in C , any doubt refer to "ANSCI C" by Dennis Ritchie)

# Sorting Algorithms in C

## #0

###### *Counting Sort*

​	linear Sort of time nearly O(n+k) , where k is range - Boils down to linear Sort ~O(n) in Best Case , 
​	but Space is of O(Range) ,if the Distance b/w nos are more i.e., like Numbers : 1,100,10000,1000000 ->for 4 numbers it may require 999999C ~ O(largestNumber) of Space 

## #1

###### *Heap Sort*

###### *Merge Sort*

###### *Quick Sort*

​	Best Known Sorting techniques use to sort in Time of O(nlogn)
​	

	Heap Sort : Space req = O(n) to Build_Heap
	Merge Sort : Space req = O(n) in max ,
	Quick Sort : No Extra Space Required = O(1)
	
	If inplace Sort req : Quick Sort
	If outof place Sort is fine : Merge Sort
	To use the Order of Sort in any manner : Heap Sort :: very useful in Solving problems like
			Huffman Coding : min Heap ; 
			Optimal Merge Pattrens : min Heap ; 
			Prims Algo : Min Heap = O(E logV) ; 

## #2

###### *Insertion Sort*

###### *Selection Sort*

###### *Bubble Sort*

###### *Shell Sort*

	Third Type of Sortings which almost uses 'Brute force' method to sort arrays inplace
	
	```Time = O(n^2) ```
	
	These sortings can be used when we need to sort more than one array at same time 


​	
​	
