from collections import Counter
from operator import itemgetter
from itertools import groupby

count = 0
while True:
	try:	
		string = input()
		if count > 0:
			print()
		frequencies = Counter(string)
		frequenciesGroup = {}
		for item in frequencies.items():
			try:
				frequenciesGroup[item[1]] += [item]
			except KeyError:
				frequenciesGroup[item[1]] = [item]

		frequenciesGroup = list(frequenciesGroup.items())
		frequenciesGroup.sort(key=itemgetter(0))
		for k, group in frequenciesGroup:
			[print(ord(i),j) for i,j in sorted(list(group), key=lambda x: ord(x[0]), reverse=True)]
		count += 1
	except EOFError:
		break