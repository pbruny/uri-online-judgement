test_cases = int(input())
for _ in range(test_cases):
	begin, end = input().split()
	sequence = ''.join(map(str, range(int(begin), int(end) + 1)))
	print(''.join((sequence, sequence[::-1])))