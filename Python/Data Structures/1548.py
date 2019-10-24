from operator import itemgetter

test_cases = int(input())
for _ in range(test_cases):
	studentsNum = int(input())
	queue = sorted(enumerate(map(int, input().split())), key=itemgetter(1), reverse=True)
	notSwitch = [1 for i in range(studentsNum) if i == queue[i][0]]
	print(len(notSwitch))