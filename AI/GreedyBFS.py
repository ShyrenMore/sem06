class Graph:
    def __init__(self):
        self.adjDict = dict()
        self.start_node = "S"
        self.goal_node = "S"
        self.heuristics = dict()

    def add_edge(self, u, v):
        if u not in self.adjDict:
            self.adjDict[u] = list()
        self.adjDict[u].append(v)

    def set_heuristic(self, node, value):
        self.heuristics[node] = value

    def print(self):
        for key in self.adjDict:
            print(key)
            print(self.adjDict[key])

    def set_start_node(self, node):
        self.start_node = node

    def set_goal_node(self, node):
        self.goal_node = node

    def best_fs(self):
        q = list()
        visited = list()
        q.append([self.heuristics[self.start_node], self.start_node])
        while q:
            # print(q)
            pair = q.pop(0)
            node = pair[1]
            if node in visited:
                continue
            visited.append(node)
            if node == self.goal_node:
                break
            children = []
            if node in self.adjDict:
                children = self.adjDict[node]
            for child in children:
                q.append([self.heuristics[child], child])
                q.sort()
        print("path to goal node is: ")
        print(visited)


def main():
    print("enter input")
    graph = Graph()
    while True:
        tokens = input().split()
        parent = tokens[0]
        if parent == "-1":
            break
        children = tokens[1:]
        for child in children:
            # print(child)
            # print(child.split(","))
            graph.add_edge(parent, child)
    # graph.print()
    print("enter nodes and heuristic values")
    while True:
        tokens = input().split()
        node = tokens[0]
        if node == "-1":
            break
        value = int(tokens[1])
        graph.set_heuristic(node, value)
    start_node = input("enter start node: ")
    goal_node = input("enter goal node: ")
    graph.set_start_node(start_node)
    graph.set_goal_node(goal_node)
    graph.best_fs()
    # graph.ucs()
    # graph.print()


main()

'''
S A B
A C D
B E F
F G
-1
enter nodes and heuristic values
S 7
A 6
B 5
C 3
D 4
E 2
F 1
G 0
-1
enter start node: S
enter goal node: G
path to goal node is: 
['S', 'B', 'F', 'G']
'''
