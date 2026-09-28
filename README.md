# DSA Assignment – Max Heap vs Linear Search

## Problem
Find the highest student score from the given scores:

78, 92, 65, 88, 95, 72, 84, 90

## Objectives
- Implement Max Heap.
- Record the heap arrangement after every insertion.
- Find the maximum using Max Heap and Linear Search.
- Compare their performance.
- Analyze time and space complexity.

## Max Heap
A Max Heap is a complete binary tree in which the parent node is greater than or equal to its children.

The maximum element is always stored at the root.

## Results
Highest score using Max Heap = 95

Highest score using Linear Search = 95

Number of comparisons in Linear Search = 7

## Complexity

| Operation | Max Heap | Linear Search |
|---|---|---|
| Find Maximum | O(1) | O(n) |
| Insertion | O(log n) | O(1) |
| Space | O(n) | O(1) |

## Files
- `max_heap.c` – C program
- `output.txt` – Program output
- `trace_table.txt` – Max Heap insertion trace
- `complexity.txt` – Complexity analysis
- `comparison.txt` – Performance comparison
- `conclusion.txt` – Final conclusion

## Conclusion
For the given scores, both methods find the highest score as 95.

Max Heap provides O(1) access to the highest score after maintaining the heap, while insertion takes O(log n). Therefore, Max Heap is useful when scores are continuously added and the highest score needs to be obtained repeatedly.
