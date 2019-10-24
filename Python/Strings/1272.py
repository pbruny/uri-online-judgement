from atexit import register
from sys import stdin, stdout

stream = ''

def batch_print():
	stdout.write(stream)

register(batch_print)

test_cases = int(input())
for _ in range(test_cases):
	phrase = stdin.readline().split()
	hidden = [word[0] for word in phrase]
	stream += ''.join(hidden) + '\n'