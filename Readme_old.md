# algorithms
This repo contains most common algorithms and DS implementations. To execute implemented tasks please follow the instructions in **wiki** of this repo. Tasks are briefly described in ```Readme.md```, but _solutions description_ are in source files of actual tasks.
Current list:

### Stack & Queue: [stack_and_queue/](stack_and_queue)
    
   1. Stack implemented with Linked List: [**stack_linked_list/**](stack_and_queue/stack_linked_list)
   2. Queue implemented with Linked List: [**queue_linked_list/**](stack_and_queue/queue_linked_list)
   3. Special Stack with getMin() method : [**special_stack/**](stack_and_queue/special_stack)
   4. Stack implemented from a Queue: [**stack_queue/**](stack_and_queue/stack_queue)
   5. Queue implemented from a Stack: [**queue_stack/**](stack_and_queue/queue_stack)
    
### Trees: [trees/](trees)
##### For this section ```Makefile``` is provided: [wiki](https://github.com/UseTheApi/algorithms/wiki/Setting-up-a-local-project)
  1. Heap: [**binary_heap/**](trees/binary_heap)
  5. Binary Search Tree: [**binary_search_tree/**](trees/binary_search_tree)
    0. Implementation: [**implementation/**](trees/binary_search_tree/implementation)
      * BST implementation: [**bst/**](trees/binary_search_tree/implementation/bst)
      
        > Class template for BST with *Search* and *FindMin* for tree and a subtree. *Parent Pointer*.
      * AVL Tree implementation: [**avl/**](trees/binary_search_tree/implementation/avl)
      
        > Class template for AVL tree with implemented balancing methods
    1. Traversals : [**traversals/**](trees/binary_search_tree/traversals)
      * Pre-, In-, Post-order traversals using recursion
      * In-order traversal using Stack
      * In-order traversal without recursion or Stack - Morris traversal
      * Breadth traversal (using queue)
      * Breadth traversal (using height of the tree)
    2. Applications: [**application/**](trees/binary_search_tree/application)
      * In-order Successor (2 methods) : [**in_order_successor/**](trees/binary_search_tree/application/in_order_successor)
      * Lowest Common Ancestor for two nodes in BST (2 methods) : [**lowest_common_ancestor/**](trees/binary_search_tree/application/lowest_common_ancestor)
      * 2nd Largest Node in BST: [**second_largest_node/**](trees/binary_search_tree/application/second_largest_node)
      * Non-related nodes in BST: [**not_related_nodes/**](trees/binary_search_tree/application/not_related_nodes)
      
          > Given a pointer to the root of BST. Write a function that will return the max set of nodes that are not children or parents for each other.
          
      * Determine if two trees are equal: [**equal_trees/**](trees/binary_search_tree/application/equal_trees)
      
  3. Weighted Tree: [**weighted_tree/**](trees/weighted_tree)
    0. Weighted BST: [**weighted_binary_tree/**](trees/weighted_tree/weighted_binary_tree)
        * Implementation: [**implementation/**](trees/weighted_tree/weighted_binary_tree/implementation)
        * Application: [**application/**](trees/weighted_tree/weighted_binary_tree/application)
            
            > Max Path in Weighted BST
     
    1. Weighted K-ary tree: [**k-ary_weighted_tree/**](trees/weighted_tree/k-ary_weighted_tree)
        * Implementation: [**implementation/**](trees/weighted_tree/k-ary_weighted_tree/implementation)
        * Application: [**application/**](trees/weighted_tree/k-ary_weighted_tree/application)
            
            > Max Path in Weighted K-ary Tree
  
### Graphs: [graphs/](graphs)
##### For this section ```Makefile``` is provided: [wiki](https://github.com/UseTheApi/algorithms/wiki/Setting-up-a-local-project)
   1. Warshall's Algorithm: [**warshall_floyd_algorithm/**](graphs/warshall_floyd_algorithm)
      
      > Build a Reachability Matrix for a given Adjacency Matrix.

   2. Floyd's Algorithm: [**warshall_floyd_algorithm/**](graphs/warshall_floyd_algorithm)
    
      > Build a Reachibility Matrix for a weighted graph Adjacency Matrix.
      
   3. Graph Representations: [**representations/**](graphs/representations)
      1. Adjacency Matrix: [**adjacency_matrix/**](graphs/representations/adjacency_matrix)
      2. Adjacency Lists: [**adjacency_lists/**](graphs/representations/adjacency_lists)
      3. Weighted Directed Graph: [**weighted_graph/**](graphs/representations/weighted_graph)
    
   4. Graph Traversals: [**traversals/**](graphs/traversals)
      1. Breadth First Search: [**breadth_first_search/**](graphs/traversals/breadth_first_search)
         * BFS using map
         * BFS using queue and vertex attributes
      2. Depth First Search: [**depth_first_search/**](graphs/traversals/depth_first_search)
   5. Graph applications: [**application/**](graphs/application)
      1. BFS application tasks: [**bfs_application/**](graphs/application/bfs_application)
         * Finding a shortest path from a given node to a root of BST tree: [**a_shortest_path/**](graphs/application/bfs_application/a_shortest_path)
      2. DFS application tasks: [**dfs_application/**](graphs/application/dfs_application)
         * Edge Classification for (un-)directed Graphs: [**edge_classification/**](graphs/application/dfs_application/edge_classification)
            
            > Define Tree, Backward, Forward (only directed) and Cross (only directed) Edges for (un-)directed Graph
            
         * Detecting and Removing cycles from (un-)directed Graph: [**detect_remove_cycle/**](graphs/application/dfs_application/detect_remove_cycle)
         * Topological Sort for DAG (Directed Acyclic Graph): [**topological_sort/**](graphs/application/dfs_application/topological_sort)
            
            > A Topological sort of a DAG is a linear ordering of all vertices such that if
            Graph contains an edge(u, v), then u appears before v in ordering.
      3. Graph Tasks: [**graph_tasks/**](graphs/application/graph_tasks)
         * Alien Alphabet: [**alien_alphabet/**](graphs/application/graph_tasks/alien_alphabet)
         
            > Given a sorted dictionary of an alien language, calculate alien alphabet (order of characters).
     
         * Dijkstra's Algorithm: [**dijkstra/**](graphs/application/graph_tasks/dijkstra)
         
            > Finding the Shortest Weighted Paths in Directed Graph
           
         * Graph Coloring: [**graph_coloring/**](graphs/application/graph_tasks/graph_coloring)
         
            > Greedy Algorithm to color the graph.Graph coloring problem is to assign colors to certain elements of a graph subject to certain constraints.
         
         * Traveling Salesman [**traveling_salesman/**](graphs/application/graph_tasks/traveling_salesman)
         
            > Naive Approach (Using vertices permutations) (complexity: O(n!)) and DP implementation.

### Dynamic Programming: [dynamic_programming/](dynamic_programming)
   1. Factorial and Fibonacci : [**factorial_fibonacci/**](dynamic_programming/factorial_fibonacci)
   2. Binomial Coefficient : [**binomial_coefficient/**](dynamic_programming/binomial_coefficient)
   3. Pascal's Triangle: [**pascals_triangle/**](dynamic_programming/pascals_triangle)
    
      > Given an index k, return the kth row of the Pascal's triangle.
   3. Jump Stairs task: [**stairs_hopper/**](dynamic_programming/stairs_hopper)
  
       >*A child is running up a staircase with n steps, and can hop either 1 step, 2 steps or 3 steps at a time.*
       >*Implement a method to count how many possible ways the child can run up the stairs.*
   4. Amount from given denominations: [**amount_with_coins/**](dynamic_programming/amount_with_coins)
       
       > *Write a function that, given:*
       >  * *an amount of money*
       >  * *a list of coin denominations*

       > *computes the number of ways to make amount of money with coins of the available denominations.*
   4. Knapsack problem (1-0) : [**knapsack_problem/**](dynamic_programming/knapsack_problem)
   5. Max Wealth problem : [**max_wealth_dp/**](dynamic_programming/max_wealth_dp)
        
      > *Given Matrix of integers representing kg of gold at every mine.*
      > *Write a function that will calculate the max welth that can be made.*
      > *Acceptable moves are only __right__ or __down__ .*
      
   6. Number of words: [**alphabetic_numbers/**](dynamic_programming/alphabetic_numbers) - solution created can work with any inputs (0 in number)
        
      > *Given an mapped alphabet A=1, B=2, C=3 ...Z=26.*
      > *Calculate how many words can you form from a given number.*
      
   7. Find min for every window of given size in array : ```c++``` - [**min_or_max_for_window/**](dynamic_programming/min_or_max_for_window) ```python``` - [**min_for_windows/**](python/min_for_windows)
      
      > *Given an array: [1, -2, 5, 3, 4, 6, 8, 10], window_size = 3.*
      > *Output is [-2 -2 3 3 4 6 ].*
      
      > *This task can also be solved using __dequeue__, but found elegant DP solution.*
      
   8. Longest Palindromic Subsequence [**longest_palindromic_subsequence**](dynamic_programming/longest_palindromic_subsequence)
   
      > Find the longest Palindrome that is a subsequence of a given string. Provided Solution return the length of longest palindrome.
      
   9. Optimal BST Problem [**optimal_bst**](dynamic_programming/optimal_bst)
   
      > Given integer keys for BST (increasing order) and weights for these keys (search probabilities). Calculate minimal cost of the optimal BST that can be constructed from given data. cost(i, j) = di ```*``` wi + dj ```*``` wj, where ```d``` is depth of the given node
     
### Arrays: [arrays/](arrays)
   1. Prices in Stock: [**stock_prices/**](arrays/stock_prices)
      
      > Write an efficient function that takes stock_prices_yesterday and returns the best profit I could have made from 1 purchase and 1 sale of 1 Apple stock yesterday.
      
      > Ex: stock_prices_yesterday = [10, 7, 5, 8, 11, 9], answer is 6
      
   2. Pairs: [**pairs/**](arrays/pairs)
    
      > Given N integers, count the number of pairs of integers whose difference is K.
      
   3. Multiplication in Array: [**products_in_array/**](arrays/products_in_array)
    
      > Given an array of integrs. Write a function that will return array of products of all numbers in a given array except itslef.
        Ex: [3,2,4,1] => [8, 12, 6, 24]
        
   4. Median in merged lists: [**merge_lists_median/**](arrays/merge_lists_median)
    
      > Given two sorted array. Write a function that returns a median of merged array. 
      > Both arrays are of the same size
      
   5. Longest non-decreasing interval: [**non_decreasing_interval/**](arrays/non_decreasing_interval)
    
      > Given an array of intergers. Write a funtion that returns an array of max length 
      > with non-decreasing elements from a given array
      
   6. Smallest subarray with sum greater than a given value: [**shortest_subarray_sum/**](arrays/shortest_subarray_sum)
    
      > Given Array:
      ```c++
      arr = [1, 4, 45, 6, 0, 19, 39]
      ```
      > given number: num = 51 output -> length of shortest subarray with sum of elements > num.
      
   7. Find max subarray sum (Kadane's Algorithm) : *TBD*
      
      > *With variation of this task: Find a subarray with max sum of elements*
      
   8. Count Distinct Elements in array: [**count_distinct_elements/**](arrays/count_distinct_elements)
    
      > Given a sorted array. Write a function that calculates all distinct absolute values in this array.
      > Ex.: 
      ```c++
      arr = [-3, -2, 0, 1, 2, 3]
      ```
      answer is 4 (0, 1, 2, 3)
      
   9. Complete Cycle in Array: [**index_cycle/**](arrays/index_cycle)
    
      > Determine whether a circular array of relative indices is composed of a single, complete cycle.
      > Ex.: 
      ```c++
      arr = [3, 2, -1, 1] // 3 is pointing to 0+3 position -> 1, then 1 is pointion to the first on. Incomplete cycle
      ```
      > [2, -1, -1] represents a correct Cycle.
      
   10. Robbery with Max benefit: [**max_burglary/**](arrays/max_burglary) 
   
        > The burglar wants to get the max profit from the street of houses. Array represents amount of money to still
        > Given array represents amount of money in each house.
        > The robber cannot get into two houses in a row - the alarm will work and he will get caught.
   
   11. Array From Array: [**array_from_array/**](arrays/array_from_array)
   
        > Given an int array A, return an int array B that A[i + B[i]] is the first element in A after A[i] that is greater than or equal to A[i]: ```A = [2, 5, 1, 3, 4, 7] => B = [3, 4, -2, 1, -3, 0]```

### Strings: [strings/](strings)
   1. Substrings: [**substrings/**](strings/substrings)
    
      > Given a string. Write a function to return all substrings for a given string.
      
   2. All string permutations(without duplicates): [**string_permutations/**](strings/string_permutations)
   3. All string permutations(with duplicates): *TBD*
   4. Single Char String: [**substring_with_k_chars/**](strings/substring_with_k_chars)
      
      > Given a string, find the length of the longest substring consisting of a single character.
      
   5. K distinct Chars String: [**substring_with_k_chars/**](strings/substring_with_k_chars)
      
      > Find the length of the longest substring consisting of at most k distinct characters.
      
   6. Reverse a sentence : [**sentence_reverse/**](strings/sentence_reverse)
    
      > You are given an array of characters arr, which consists of sequences of characters (words) separated by space characters.
      > How can you most efficiently reverse the order of words in the sentence?
      > For example:
      ```c++
      [ 'p', 'e', 'r', 'f', 'e', 'c', 't', '  ', 'm', 'a', 'k', 'e', 's', '  ', 'p', 'r', 'a', 'c', 't', 'i', 'c', 'e' ]
      would turn into:
      [ 'p', 'r', 'a', 'c', 't', 'i', 'c', 'e', '  ', 'm', 'a', 'k', 'e', 's', '  ', 'p', 'e', 'r', 'f', 'e', 'c', 't' ]
      ```
      
   7. Unpack a String: [**unpack_string/**](strings/unpack_string)
     
      > You are given a string of kind: ```{abc}3xyz``` .
      > Write a function that will unpack a string and will return 
      > a result string that looks like: ```abcabcabcxyz```
    
### Bit Manipulations: [bit_manipulations/](bit_manipulations)
   1. Find maximum between two numbers wihout using any comparison: [**max_without_comparison/**](bit_manipulations/max_without_comparison)
   2. Count number of 1s in binary representation of an integer: [**bits_in_integer/**](bit_manipulations/bits_in_integer)

### Binary Search
   - set of tasks: [**binary_search/**](binary_search)

### Interesting tasks: 
   1. Drone Flight Planning: [**drone_flight_planner/**](drone_flight_planner)
    
      > You are planning the amount of fuel need to complete a drone flight.
      > To fly higher, the drone burns 1 liter of fuel per feet. However, flying lower charges the drone with the amount of energy equivalent to 1 liter of fuel for every feet. Flying sideways takes no energy (only flying up and down takes/charges energy).
 
      > Given an array of 3D coordinates named route, find the minimal amount of fuel the drone would need to fly through this route.
      > Explain and code the most efficient solution possible, with the minimal number of actions and variables.
 
      > Example:
      > Completing the route [{x:0, y:2, z:10}, {x:3, y:5, z:0}, {x:9, y:20, z:6}, {x:10, y:12, z:15}, {x:10, y:10, z:8}] requires a minimum of 5 liters of fuel.
      
   2. Find and Remove loop in Linked List: [**detect_remove_loop_linked_list/**](detect_remove_loop_linked_list)
   
   3. Template implementation of a *Linked List*: [**linked_list/**](linked_list)
   
   4. Find the biggest inclusive interval from given tuples: [**biggest_interval/**](biggest_interval)
   
   5. Dinner Party: [**dinner_party/**](dinner_party)
   
       > Given a table for ```N``` people. Figure out every possible seating of the table for ```M``` given friends.
    
### Sorting Algorithms: [sorting/](sorting)
