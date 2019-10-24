test_cases = int(input())
for _ in range(test_cases):
	M = int(input())
	products = dict(input().split() for _ in range(M))
	P = int(input())
	finalPrice = 0
	for i in range(P):
		product, quantity = input().split()
		finalPrice += float(products[product]) * int(quantity)
	print('R$ %.2f'%finalPrice)