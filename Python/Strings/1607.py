def distance(a, b):
    if ord(b) < ord(a):
        return ((ord('z') - ord(a)) + (ord(b) - ord('a') + 1))
    return (ord(b) - ord(a))

test_cases = int(input())
for _ in range(test_cases):
    string1, string2 = input().split()
    num_operations = sum(list([distance(a,b) for a,b in zip(string1, string2)]))
    print(num_operations)