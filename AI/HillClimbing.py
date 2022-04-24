# sauce: https://www.educative.io/edpresso/what-is-the-hill-climbing-algorithm
import numpy as np

def find_neighbours(state, landscape):
    neighbours = []
    dim = landscape.shape

    # left neighbour
    if state[0] != 0:
        neighbours.append((state[0] - 1, state[1]))

    # right neighbour
    if state[0] != dim[0] - 1:
        neighbours.append((state[0] + 1, state[1]))

    # top neighbour
    if state[1] != 0:
        neighbours.append((state[0], state[1] - 1))

    # bottom neighbour
    if state[1] != dim[1] - 1:
        neighbours.append((state[0], state[1] + 1))

    # top left
    if state[0] != 0 and state[1] != 0:
        neighbours.append((state[0] - 1, state[1] - 1))

    # bottom left
    if state[0] != 0 and state[1] != dim[1] - 1:
        neighbours.append((state[0] - 1, state[1] + 1))

    # top right
    if state[0] != dim[0] - 1 and state[1] != 0:
        neighbours.append((state[0] + 1, state[1] - 1))

    # bottom right
    if state[0] != dim[0] - 1 and state[1] != dim[1] - 1:
        neighbours.append((state[0] + 1, state[1] + 1))

    return neighbours


# Current optimization objective: local/global maximum
def hill_climb(curr_state, landscape):
    neighbours = find_neighbours(curr_state, landscape)
    bool
    ascended = False
    next_state = curr_state
    for neighbour in neighbours: #Find the neighbour with the greatest value
        if landscape[neighbour[0]][neighbour[1]] > landscape[next_state[0]][next_state[1]]:
            next_state = neighbour
            ascended = True

    return ascended, next_state


def __main__():
    landscape = np.random.randint(1, high=50, size=(10, 10))
    print(landscape)
    start_state = (3, 6)  # matrix index coordinates
    current_state = start_state
    count = 1
    ascending = True
    while ascending:
        print("\nStep #", count)
        print("Current state coordinates: ", current_state)
        print("Current state value: ", landscape[current_state[0]][current_state[1]])
        count += 1
        ascending, current_state = hill_climb(current_state, landscape)

    print("\nStep #", count)
    print("Optimization objective reached.")
    print("Final state coordinates: ", current_state)
    print("Final state value: ", landscape[current_state[0]][current_state[1]])


__main__()


'''
op
[[45  1 33 43 32 42 29 24 28 33]
 [32 10 49 18 29 32 29 32 25 10]
 [ 8 29  3 14 45  2  1 27 11 21]
 [18 43  2 49 48 12 20 44 22 10]
 [39 21  1 43 21 11 26  4 19 10]
 [19 43  1 42 25 34 17 16 46 33]
 [46 22 20 42 19  5 46 20 46 14]
 [22 22  7 48 12  8 17 21 31 17]
 [49  3 26 10 49 31  1  2 20 22]
 [49 14  9 31 45 44  5 45 29 13]]

Step # 1
Current state coordinates:  (3, 6)
Current state value:  20

Step # 2
Current state coordinates:  (3, 7)
Current state value:  44

Step # 3
Optimization objective reached.
Final state coordinates:  (3, 7)
Final state value:  44
'''
