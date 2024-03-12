The following files are for ALX 0x1E-search_algorithms, inside it contains the following following C functions to perform different types of searches:

* A function that searches for a value in an array of integers using the Linear search algorithm
* A function that searches for a value in a sorted array of integers using the Binary search algorithm
* The time complexity (worst case) of a linear search in an array of size n
* The space complexity (worst case) of an iterative linear search algorithm in an array of size n
* The time complexity (worst case) of a binary search in an array of size n
* The space complexity (worst case) of a binary search in an array of size n
* The space complexity of this function/algorithm
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

* A function that searches for a value in a sorted array of integers using the Jump search algorithm
* The time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)
* A function that searches for a value in a sorted array of integers using the Interpolation search algorithm
* A function that searches for a value in a sorted array of integers using the Exponential search algorithm
* A function that searches for a value in a sorted array of integers
* A function that searches for a value in a sorted list of integers using the Jump search algorithm
* A function that searches for a value in a sorted skip list of integers
* The time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)
* The time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)
