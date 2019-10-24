def rot13(letter):
	if letter.isalpha():
		if letter.islower():
			inc = ord('a')
		else:
			inc = ord('A')
		new_letter = (abs(ord(letter) - inc) + 13) % 26
		return chr(new_letter + inc)
	return letter

while True:
	try:
		string = input()
		print(''.join(map(rot13, string)))
	except EOFError:
		break