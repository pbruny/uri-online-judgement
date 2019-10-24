while True:
	M, N = tuple(map(int, input().split()))
	if not M and not N:
		break
	result = M + N
	print(str(result).replace('0',''))