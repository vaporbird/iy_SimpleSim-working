import sim_hooks	
def foo(t):		
  print 'The time is now:',t	
sim_hooks.register(sim_hooks.HOOK_PERIODIC, foo)
