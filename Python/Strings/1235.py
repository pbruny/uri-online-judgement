test_cases = int(input())
length = len
for _ in range(test_cases):
	string = input()
	half = length(string) // 2
	string1, string2 = string[:half], string[half:]
	print('%s%s'%(string1[::-1],string2[::-1]))