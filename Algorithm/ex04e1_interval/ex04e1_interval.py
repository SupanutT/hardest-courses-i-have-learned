import sys
input = sys.stdin.readline

n = int(input())
start = [int(i) for i in input().split()]
end = [int(i) for i in input().split()]

d = dict()
for i in range(n):
    if (end[i] in d):
        if (start[i] > d[end[i]]): # compare with the data in list
            d[end[i]] = start[i]   # if it has the earlier start time 
    else: d[end[i]] = start[i]     # it will be added to the dict
count = 0
prev_time = -float('inf')
for end_time in sorted(d.keys()):
    if (d[end_time] >= prev_time): # if the current start time
        count += 1                 # is greater than the previous
        prev_time = end_time       # end time it will add to the task
print(count)