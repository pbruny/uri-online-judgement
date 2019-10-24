from collections import Counter
from itertools import takewhile

def endOfLoop():
	raise StopIteration

test_cases = int(input())
for _ in range(test_cases):
	frequencies = Counter(input().lower().replace(' ', ''))
	mostCommons = frequencies.most_common()
	maxNum = mostCommons[0][1]
	listOfLettersIter = (letter for letter in mostCommons)
	listOfLetters = list(takewhile(lambda x: x[1] == maxNum, listOfLettersIter))
	[print(letter[0] ,end='') for letter in sorted(listOfLetters, key=lambda x: ord(x[0]))]
	print()