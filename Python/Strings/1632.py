from functools import reduce

prod = lambda x,y: x*y

def evaluate(string):
    if string.lower() in ['a','e','i','o','s']:
        return 3
    return 2

test_cases = int(input())
for _ in range(test_cases):
    string = input()
    value = reduce(prod, map(evaluate, string))
    print(value)