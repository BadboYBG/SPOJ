import re
count = int(input())
for i in range(1,count+1):
	st = input()
	print (i)
	arr = st.split(" ")
	
	search_img = [x for i, x in enumerate(arr) if re.search(r"\w+\.([pP][nN][gG]|[jJ][pP][gG]|[gG][iI][fF])",x)]
	for found in search_img:
		print (found,": hinh anh")
		
	search_media = [x for i, x in enumerate(arr) if re.search(r"\w+\.([mM][pP][34]|[aA][vV][iI])",x)]
	for found in search_media:
		print (found,": media")
	
	search_docx = [x for i, x in enumerate(arr) if re.search(r"\w+\.([pP][dD][fF]|[dD][oO][cC]|[pP]{2}[tT][xX])",x)]
	for found in search_docx:
		print (found,": tai lieu")
