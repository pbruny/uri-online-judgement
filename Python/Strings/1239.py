import re
while True:
	try:
		HTML = input()
		italic_phrases = re.findall('_[^_]*_', HTML)
		for italic_phrase in italic_phrases:
			HTML = HTML.replace(italic_phrase, '<i>%s</i>'%italic_phrase[1:-1],1)
		bold_phrases = re.findall('\*[^*]*\*', HTML)
		for bold_phrase in bold_phrases:
			HTML = HTML.replace(bold_phrase, '<b>%s</b>'%bold_phrase[1:-1],1)
		print(HTML)
	except EOFError:
		break