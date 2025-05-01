__all__ = ["parsed_cmd", "scripted_process", "scripted_platform", "operating_system", "scripted_thread_plan"]
for x in __all__:
  __import__('lldb.plugins.' + x)

def __lldb_init_module(debugger, internal_dict):
  import lldb
  for x in __all__:
    submodule = getattr(lldb.plugins, x)
    lldb_init = getattr(submodule, '__lldb_init_module', None)
    if lldb_init:
      lldb_init(debugger, internal_dict)
