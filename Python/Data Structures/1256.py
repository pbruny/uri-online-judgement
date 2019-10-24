from collections import defaultdict
from sys import stdin, stdout
from atexit import register

stream = ''

def batch_print():
	stdout.write(stream)

def formatedOutput(hashTable, indexes):
	output = ''
	for i in range(indexes):
		output += ' -> '.join([str(i)] + hashTable[i])
		output += ' -> \\\n'
	return output

register(batch_print)

hashTable = defaultdict(list)

test_cases = int(input())
for j in range(test_cases):
	indexes, keysNum = map(int, input().split())
	numbers = input().split()
	[hashTable[int(num) % indexes].append(num) for num in numbers]
	stream += formatedOutput(hashTable, indexes)
	if j != test_cases - 1:
		stream += '\n'
	hashTable = defaultdict(list)