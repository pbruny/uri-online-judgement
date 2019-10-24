from collections import Counter

test_cases = int(input())
for _ in range(test_cases):
	diet = Counter(set(input()))
	breakfast = Counter(input())
	lunch = Counter(input())
	
	diet.subtract(breakfast)
	diet.subtract(lunch)
	dinner = diet.most_common()
	if dinner and dinner[-1][1] < 0:
		print('CHEATER')
	else:
		elements = list(diet.elements())
		elements.sort()
		print(''.join(elements))