test_cases = int(input())
for _ in range(test_cases):
	string = input()
	half = len(string) // 2
	string = string[::-1]
	halfString = [chr(ord(letter) + 3) if letter.isalpha() else letter for letter in string[:half]]
	halfString += [chr(ord(letter) + 2) if letter.isalpha() else chr(ord(letter) - 1) for letter in string[half:]]
	print(''.join(halfString))