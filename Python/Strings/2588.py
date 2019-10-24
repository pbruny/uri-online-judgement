while True:
	try:
		string = input()
		letters = set(string)
		counters = list([ string.count(c) for c in letters ])
		counters = list(filter(lambda x: x % 2 != 0, counters))
		if len(counters) == 0:
			print(0)
		else:
			print(len(counters) - 1)
	except EOFError:
		break