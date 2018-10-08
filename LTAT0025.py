import re
count = int(input())
for i in range(1,count+1):
	st = input()
	arr = st.split("\\n")
	search = [x for i, x in enumerate(arr) if re.search(r"192\.168\.200\.137\s\d{1,3}(\.\d{1,3}){3}",x)]
	print (i)
	for found in search:
		print ("Found ",found)
