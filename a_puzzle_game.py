possible_primes = (3, 5, 7, 11, 13, 17)

swapable_nodes = (
        (0,1), (0,3),   (1,2), (1,4),   (2, 5),
        (3,4), (3,6),   (4,5), (4,7),   (5,8),
        (6,7),          (7,8)
        )

final_state = (1,2,3,4,5,6,7,8,9)

possible_grids = {final_state:0}
queue = [list(final_state)]
# print(queue)
while queue:
    curr_grid = queue.pop()

    for node in swapable_nodes:
        if curr_grid[node[0]] + curr_grid[node[1]] in possible_primes:
            #swap
            new_grid = curr_grid[:]
            new_grid[node[0]], new_grid[node[1]] = new_grid[node[1]], new_grid[node[0]] 

            if tuple(new_grid) not in possible_grids:
                possible_grids[tuple(new_grid)] = possible_grids[tuple(curr_grid)]+1
                queue.append(new_grid)

print(possible_grids)
