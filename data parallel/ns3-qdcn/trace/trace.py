import os

for filename in  os.listdir('.'):
	total_flow = [ [] for x in xrange(16)]
	if ".tr" not in filename:
		continue
	with open(filename) as f:
		lines = f.readlines()
	for line in lines:
		src, dst, prio, size, t, end = map(eval,line.split())
		# if src==dst or src<20 or dst<20:
		# 	print "Error, src=%d, dst=%d"%(src,dst)
		total_flow[src-20].append(size)
	print filename, sum([sum(x)/10000000.0 for x in total_flow])/16/end
		
	# break