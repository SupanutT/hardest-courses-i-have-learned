from collections import deque
import sys
input = sys.stdin.readline

n,m,k = [int(i) for i in input().split()]
instruction = [None]*k

for i in range(k):
    d,e,c = [int(i) for i in input().split()]
    instruction[d-1] = (e,c)
instruction = deque(instruction)
waiting_queue = deque()

stock_queue = deque()

while (len(instruction) != 0):
    e,c = instruction.popleft()
    if (e): # sent requests
        if (len(stock_queue)):
            print(stock_queue.popleft())
        else:
            waiting_queue.append(c) # append store
            print(0)
    else:
        if (len(waiting_queue)):
            print(waiting_queue.popleft())
        else:
            stock_queue.append(c)
            print(0)

    
    
