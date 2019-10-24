while True:
	try:
		number = float(input())
		cutoff = float(input())
		decimal_part = number - int(number)
		if decimal_part > cutoff:
			print(int(number) + 1)
		else:
			print(int(number))	
	except EOFError:
		break