#
# Plugin Message
# 
# A command from the user to activate or deactivate a plugin
#
# @author Kyle Rush
# @version 0.1
#

std_msgs/Header header

# The name of the plugin to change the activation state for
string plugin_name

# The version of the plugin to change the activation state for
string plugin_version

# The state to change to
bool activated

