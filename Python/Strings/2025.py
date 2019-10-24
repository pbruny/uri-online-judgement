import re

regex = re.compile('\woulupukk\w')
lineNum = int(input())
for _ in range(lineNum):
	line = input()
	print(regex.sub('Joulupukki', line))