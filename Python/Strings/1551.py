A = set(map(chr, range(97, 123)))
test_cases = int(input())
for _ in range(test_cases):
	phrase = input()
	letters = set(phrase)
	common = A.intersection(letters)
	if len(common) == 26:
		print('frase completa')
	elif len(common) >= 13:
		print('frase quase completa')
	else:
		print('frase mal elaborada')