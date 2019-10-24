odd = []
even = []
numbers_len = int(input())
for _ in range(numbers_len):
	number = int(input())
	if number % 2:
		odd.append(number)
	else:
		even.append(number)
	
[print(x) for x in sorted(even)]
[print(x) for x in sorted(odd, reverse=True)]