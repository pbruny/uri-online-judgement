upper = True

while True:
	try:
		sentence = input()
	except EOFError:
		break
	upper = True
	newSentence = []
	for letter in sentence:
		if letter.isalpha():
			if upper:
				newSentence.append(letter.upper())
				upper = False
			else:
				newSentence.append(letter.lower())
				upper = True
		else:
			newSentence.append(letter)
	print(''.join(newSentence))