while True:
	flawedDigit, originalNumber = input().split()
	if flawedDigit == '0' and originalNumber == '0':
		break
	newNumber = originalNumber.replace(flawedDigit, '')
	print(0) if not newNumber else print(int(newNumber))