test_cases = int(input())
for _ in range(test_cases):
	string = input().split()
	new_string = ' '.join(sorted(string, key=len, reverse=True))
	print(new_string)