/*Tree Data Structure
    
    node: the values in a tree
    root: the topmost node
    leaf: the bottom-most nodes
    chil: the adjacent nodes below root
    parent: the adjacent node on top of the children nodes
    subtree: the tree within the tree
    descendants: all the nodes below any given node in the tree
    ancestors: the nodes above given node, directly connected to given node
    degree: the no. of children nodes of a node
    internal nodes: nodes that are not leaf nodes
Note: all leaf nodes have degree 0


Application of Trees:

1. To Represent Hierarchical data
- Organization Structure
- Folder Structures
- XML/ HTML Content (JSON Objects) - since there is nesting of tags
(Js in browser reads html as a tree)
- In OOPs (Inheritance) - base class, children class etc

2. Binary Search Tree (IMPORTANT)

3. Binary Heap: it is mainly used to represent priority queues
(Priority queues are useful in - djikstras algo, hoffmann algo, prims algo etc)

4. B and B+ Trees in DBMS:
(Used in databases for indexing; indexing is done through B/B+ Trees or Hashing)

5. Spanning and shortest path trees in computer networks
(these trees are used in bridges and routers respectively)

6. Parse Tree, Expression tree
(Used to parse the source code)

7. Tries - to represent dictionaries and used to represent prefix search

8. Suffix tree - to do fast searches in a text/string 
(time taken is proportional to length of pattern, not the whole text)

9. Binary Index Tree: used for range query searches (More powerful)

10. Segment:  used for range query searches (faster for a limited set of operations)
 */