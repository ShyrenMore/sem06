'''
we will create a set for storing the value of the visited nodes to keep track of the visited nodes of the graph.

After the above process, we will declare a function with the parameters as visited nodes, the graph itself and the node respectively. And inside the function, we will check whether any node of the graph is visited or not using the “if” condition. If not, then we will print the node and add it to the visited set of nodes.

Then we will go to the neighboring node of the graph and again call the DFS function to use the neighbor parameter.

NOTE: for this implementation to work, 
you have to mark leaf node in a self loop while defining the graph
else it will give KeyError
'''

visited = set()  # Set to keep track of visited nodes of graph.

def dfs(visited, graph, node):  # function for dfs
    if node not in visited:
        print(node, end = " ")
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)


# eg 1
# graph = {
#     '5': ['3', '7'],
#     '3': ['2', '4'],
#     '7': ['8'],
#     '2': [],
#     '4': ['8'],
#     '8': []
# }

# print("Following is the Depth-First Search")
# dfs(visited, graph, '5')

# op 1
# 5 3 2 4 8 7

# eg 2
graph2 = {
    '0': ['1', '9'],
    '1': ['2'],
    '2': ['0', '3'],
    '9': ['3'], 
    '3': ['3']
}

print("\nFollowing is the Depth-First Search for graph 2")
dfs(visited, graph2, '0')

# op2
# 0 1 2 3 9
