#StatsDeltaMetric

import sim, sim_hooks, sys, os, sim
class Class:
 p = 0
 sd = ""
 pathToFile = "/home/vanyo/sniper/TextFileDelete.txt"	
 def foo(self,t):
  with open(Class.pathToFile, 'w') as f:
   f.write("Now the file has more content!\n" + str(Class.p))

  with open(Class.pathToFile, 'r') as f:
   print(f.read())

  Class.p = Class.p + 1
  Class.sd = sim.util.StatsDelta()
  print(self.sd.getter('performance_model', 0, 'instruction_count').delta)
  testvar = sim.util.register(Class)
  print(testvar)
  print(sim.stats.time()) #gets simulation time
  print(sim.stats.getter('StatsMetricBase', 0, 'IPC')) # ne znam koi sa stats metric, vij i napravi makefile
  #for core in range(sim.config.ncores[0])
  print(str(sim.config.ncores)) # tova vzima ot config faila

Class = Class()
sim_hooks.register(sim_hooks.HOOK_PERIODIC, Class.foo)	

print 1*sim.util.Time.MS
print 1*sim.util.Time.MS
print 1*sim.util.Time.MS
print 1*sim.util.Time.MS
print 1*sim.util.Time.MS





    #self.stats = {
    #  'time': [ self.sd.getter('performance_model', core, 'elapsed_time') for core in range(sim.config.ncores) ],
    #  'ffwd_time': [ self.sd.getter('fastforward_performance_model', core, 'fastforwarded_time') for core in range(sim.config.ncores) ],
    #  'instrs': [ self.sd.getter('performance_model', core, 'instruction_count') for core in range(sim.config.ncores) ],
    #  'coreinstrs': [ self.sd.getter('core', core, 'instructions') for core in range(sim.config.ncores) ],
    #}

#instrs = self.stats['instrs'][core].delta
#stats = {
#      'time': [ sd.getter('performance_model', core, 'elapsed_time') for core in range(sim.config.ncores) ],
#      'instrs': [ sd.getter('core', core, 'instructions') for core in range(sim.config.ncores) ],
#      'misses': [ sd.getter('light_cache', core, 'misses') for core in range(sim.config.ncores) ],
#}


#sim.util.register(Class())
#def periodic(self, t, t_delta):	
# print 'The time is now', t	
# print 'Elapsed time since last call', t_delta	



#import sim_hooks
#import sys, os, sim
#def foo(t):
# x = sim.stats.get('core',0,'energy-dynamic')
# print x
#sim_hooks.register(sim_hooks.HOOK_PERIODIC, foo)


 #x = sim.stats.get('core',0,'energy-dynamic')
 #x = sim.stats.get('core',0,'energy-dynamic')
