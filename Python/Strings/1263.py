import re
 
while True:
	try:
		phrase = input().lower().split()
	except EOFError:
		break
	alliterations = []
	first_letters = ''.join(map(lambda x: x[0], phrase))
	for c in set(first_letters):
		alliterations += re.findall('%s{2,}'%c, first_letters)
	print(len(alliterations))