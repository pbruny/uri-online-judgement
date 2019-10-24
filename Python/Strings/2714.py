test_cases = int(input())
for _ in range(test_cases):
	identification = input()
	if identification.startswith('RA') and len(identification) == 20:
		number = identification.strip('RA')
		print(int(number))
	else:
		print('INVALID DATA')