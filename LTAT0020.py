import re
count = int(input())
for i in range(1,count+1):
	st = input()
	print (i)
	search = re.findall(r"(https?://\.?\w\S+|ftp://\.?\w\S+)",st);
	for link in search:
		print("Found:",link[:-1])
	
