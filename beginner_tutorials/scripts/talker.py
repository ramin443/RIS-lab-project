#!/usr/bin/env python

import rospy
from std_msgs.msg import String

def callback(data):
	rospy.loginfo(sodpy.get_caller_id()+ "I heard %s", data.data)
	
def talker():
	pub = rospy.Publisher('chatter', String, queue size=10)
	rospy.init_node('talker', anonymous=True)
	rospy.Subscriber("chatter", String, callback)
	rospy.spin()

if __name__ == '__main__':
		listener()
		
		
