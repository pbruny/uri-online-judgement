from itertools import groupby

mod = lambda x: x < 0 and -(abs(x) % M) or x % M
getMod = lambda x: x[1]
getNum = lambda x: x[0]

while True:
	N, M = map(int, input().split())
	print(N, M)
	if M == 0 and N == 0:
		break
	numbers = [int(input()) for _ in range(N)]
	numbers = [(number, mod(number)) for number in numbers]
	numbers_grouped = groupby(sorted(numbers, key=getMod), getMod)
	for k, group in numbers_grouped:
		odd = []
		even = []
		for x in group:
			if getNum(x) % 2:
				odd.append(x)
			else:
				even.append(x)
		[print(getNum(n)) for n in sorted(odd, key=getNum, reverse=True)]
		[print(getNum(n)) for n in sorted(even, key=getNum)]