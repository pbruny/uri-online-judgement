from atexit import register
from sys import stdin, stdout

stream = ''

def batch_print():
	stdout.write(stream)

def evaluate(freq):
	freq = freq.replace('M','')
	return freq.count('P') / len(freq)

register(batch_print)

test_cases = int(input())
for _ in range(test_cases):
	stdin.readline()
	students = stdin.readline().split()
	frequencies = stdin.readline().split()
	not_frequent = [name for name, freq in zip(students, frequencies) if evaluate(freq) < 0.75]
	text = ' '.join(not_frequent)
	stream += text + '\n' if text != ' ' else '\n'