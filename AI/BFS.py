'''
The steps of the algorithm work as follow:

- Start by putting any one of the graph’s vertices at the back of the queue.
- Now take the front item of the queue and add it to the visited list.
- Create a list of that vertex's adjacent nodes. Add those which are not within the visited list to the rear of the queue.
- Keep continuing steps two and three till the queue is empty.
NOTE: for this implementation to work, 
you have to mark leaf node in a self loop while defining the graph
else it will give KeyError
'''

visited = []  # List for visited nodes.
queue = []  # Initialize a queue


def bfs(visited, graph, node):  # function for BFS
    visited.append(node)
    queue.append(node)

    while queue:          # Creating loop to visit each node
        m = queue.pop(0)
        print(m, end=" ")

        for neighbour in graph[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)


# eg 1
# graph = {
#     '0': ['1', '2'],
#     '1': ['2'],
#     '2': ['0', '3'],
#     '3': ['3'],
# }

# print("Following is the Breadth-First Search")
# bfs(visited, graph, '2')    # function calling
# op 1
# 2 0 3 1

# eg 2
graph = {
    '5': ['3', '7'],
    '3': ['2', '4'],
    '7': ['8'],
    '2': [],
    '4': ['8'],
    '8': []
}
print("Following is the Breadth-First Search")
bfs(visited, graph, '5')
# op 2
# 5 3 7 2 4 8
