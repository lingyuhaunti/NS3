import os
import sys
import threading
from time import sleep

max_thread = 2
base_path = "/home/antl/Codes/ns3-tgz/ns3-qdcn/"
excutor = "build/scratch/fattree"
trace_dir = "trace/"
runner_dir = "runner/"
prefix = ""
suffix = "_15_delay_1us"

def runner(offerload, run_path):
    os.chdir(run_path)
    with os.popen("%s --trace=%s"%(base_path+excutor,base_path+trace_dir+"offerload_%.1f.tr"%offerload)) as pipe:
      print pipe.read()
    print "RED offerload_%.1f Finished."%offerload
	# print os.getcwd()


if not os.path.exists(base_path+runner_dir):
	os.mkdir(base_path+runner_dir)

t_list = []
for offerload in xrange(1,2):
	run_path = base_path+runner_dir+prefix+str(offerload)+suffix
	if not os.path.exists(run_path):
		os.mkdir(run_path)
	t_list.append(threading.Thread(target=runner,args=(offerload/10.0, run_path)))
for t in t_list:
	while threading.activeCount()>10:
		sleep(10)
	sleep(1)
	t.start()

# os.
