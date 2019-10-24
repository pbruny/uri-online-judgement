import re

test_cases = int(input())
for _ in range(test_cases):
    string = input()
    a_strings = re.findall('a{1,}', string)
    print('k' + 'a' * (len(a_strings[0]) * len(a_strings[1])))