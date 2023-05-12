w,n = [float(i) for i in input().split()]
values = [float(i) for i in input().split()]
weights = [float(i) if (i!=0) else 0.00001 for i in input().split()]
ratios = []

for i in range(int(n)):
    ratio = (values[i]/weights[i], weights[i])
    ratios.append(ratio)

total_value = 0
ratios.sort(reverse=True)

for (ratio, weight) in ratios:
    if (w == 0): break
    weight_to_append = weight if (w > weight) else w
    total_value += ratio * weight_to_append
    w -= weight_to_append
print("{:.4f}".format(total_value))