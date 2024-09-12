import sys

input = int(sys.stdin.readline())

sbb = [1, 1]

for i in range(2, input) :
    sbb.append(sbb[i - 1] + sbb[i - 2])
    
sys.stdout.write(str(sbb[input - 1]))