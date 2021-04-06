# Pointers


|  |
---
| Heap memory (Out of scope)   | 
| Stack Memory (Variables are stored here)  |
| Code Memory (program scope)  |


---

## Heap Memory

RAM outside the scope of the program, `pointers` can be used to point to the heap memory, which is how we can access external files.
```cpp
  int *ptr = new int[5]
  // Points to the array of 5 int elements in heap memory
```

## Stack Memory

Variables are stored in this memory, which can be pointed by your `ptr`
```cpp
  int a = 7;  // a is stored in stack memory
  int *ptr = &a; // pointers points to a location in stack memory
```

## Notes

1. Always `free` the memory from the pointer
```cpp
  int a = 50;
  int *ptr = &a;
  // After the ptr is used, and no more required
  free(ptr);
```

2. Never define an uninitialized pointer, they may point to the system file, and may cause the system to crash
> Always initialize `pointer` with `NULL` or `nullptr`(introduced in **c++11**)
```cpp
  int *ptr1 = NULL;
  int *ptr2 = nullptr;
```

3. After freeing the memory, pointer is still pointing to some location, which is known as `dangling pointer`(pointing to the empty location)
```cpp
  int *m = new int[2];
  free(m);
  m = nullptr;
```

4. You can now `delete` the pointer directly
```cpp
int* ptr = new int[2];
delete(ptr);
```
