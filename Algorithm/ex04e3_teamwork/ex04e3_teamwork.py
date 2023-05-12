from collections import deque
import sys
input = sys.stdin.readline

n,m = [int(i) for i in input().split()]
task_times = [int(i) for i in input().split()]
worker_time = deque([0]*n)
total_time = 0
task_times.sort()

for time in task_times:
    min_time = worker_time[0]
    worker_time.popleft()
    total_time += min_time + time
    worker_time.append(min_time + time)
    worker_time = deque(sorted(list(worker_time)))
print("{:.3f}".format(total_time/m))