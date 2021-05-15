#!/usr/bin/python3
high = 0

for i in range(999, 100, -1):
    for j in range(i, 100, -1):
        num = i * j
        if num > high and str(num) == str(num)[::-1]:
            high = num

print("{:d}".format(high))
