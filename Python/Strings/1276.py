def rangeGetter(string, begin=0):
	if begin < 0 or begin >= len(string):
		return ()
	begin_chr = string[begin]
	end_chr = ''
	i = begin + 1
	while i < len(string):
		if ord(string[i]) - ord(string[i - 1]) != 1:
			break
		end_chr = string[i]
		i += 1
	if end_chr == '':
		return (i, (begin_chr, begin_chr))
	return (i, (begin_chr, end_chr))
	
while True:
	try:
		ranges = []
		count = 0
		string = input().replace(' ', '')
		letters = list(set(string))
		letters_sort = sorted(letters, key=ord)
		while count < len(letters):
			count, letter_range = rangeGetter(letters_sort, begin = count)
			if count >= len(letters):
				print('%s:%s'%(letter_range[0], letter_range[1]), end='')
			else:
				print('%s:%s,'%(letter_range[0], letter_range[1]), end=' ')
		print()				
	except EOFError:
		break