# to solve the dungeon problem

# Gobal or class scope var
R, C = ... # R = rows, C = cols
m = ... # input char matrix aka dungeon
sr, sc = ... # 's' starting row and cols value
rq, cq = ... # Empty Row Queue (RQ) and Column Queue (CQ)

# Track no of steps taken
move_count = 0
nodes_left_in_layer = 1
nodes_in_next_layer = 0

# Reached the End?
reached_end = false

# Create a visited matrix of R x C
visited = ...

# Direction 
dr = [-1, +1 0, 0]
dc = [0, 0, +1 -1]

function solve():
    rq.enqueue(sr)
    cq.enqueue(sc)
    visited[sr][sc] = true

    while rq and cq not empty:
        r = rq.dequeue()
        c = cq.dequeue()

        if m[r][c] == 'E':
            # we reached the end
            reached_end = true
            break
        explore_neighbours(r, c)
        nodes_left_in_layer--
        if nodes_left_in_layer == 0:
            nodes_left_in_layer = nodes_in_next_layer
            nodes_in_next_layer = 0
            move_count++
    if reached_end:
        return move_count
    return -1

function explore_neighbours(r, c):
    for i = 0 to 3:
        rr = r + dr[i]
        cc = c + dc[i]

        # check out of bounds
        if rr < 0 or cc < 0: continue
        if rr >= R or cc >= C: continue

        # check if visited or if it's blocked
        if visited[rr][cc]: continue
        if m[rr][cc] = '#': continue

        rq.enqueue(rr)
        cq.enqueue(cc)
        visited[rr][cc] = true
        nodes_in_next_layer++

