;; Auto-generated. Do not edit!


(when (boundp 'uuv_control_msgs::StartTrajectory)
  (if (not (find-package "UUV_CONTROL_MSGS"))
    (make-package "UUV_CONTROL_MSGS"))
  (shadow 'StartTrajectory (find-package "UUV_CONTROL_MSGS")))
(unless (find-package "UUV_CONTROL_MSGS::STARTTRAJECTORY")
  (make-package "UUV_CONTROL_MSGS::STARTTRAJECTORY"))
(unless (find-package "UUV_CONTROL_MSGS::STARTTRAJECTORYREQUEST")
  (make-package "UUV_CONTROL_MSGS::STARTTRAJECTORYREQUEST"))
(unless (find-package "UUV_CONTROL_MSGS::STARTTRAJECTORYRESPONSE")
  (make-package "UUV_CONTROL_MSGS::STARTTRAJECTORYRESPONSE"))

(in-package "ROS")





(defclass uuv_control_msgs::StartTrajectoryRequest
  :super ros::object
  :slots ())

(defmethod uuv_control_msgs::StartTrajectoryRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass uuv_control_msgs::StartTrajectoryResponse
  :super ros::object
  :slots (_success ))

(defmethod uuv_control_msgs::StartTrajectoryResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass uuv_control_msgs::StartTrajectory
  :super ros::object
  :slots ())

(setf (get uuv_control_msgs::StartTrajectory :md5sum-) "358e233cde0c8a8bcfea4ce193f8fc15")
(setf (get uuv_control_msgs::StartTrajectory :datatype-) "uuv_control_msgs/StartTrajectory")
(setf (get uuv_control_msgs::StartTrajectory :request) uuv_control_msgs::StartTrajectoryRequest)
(setf (get uuv_control_msgs::StartTrajectory :response) uuv_control_msgs::StartTrajectoryResponse)

(defmethod uuv_control_msgs::StartTrajectoryRequest
  (:response () (instance uuv_control_msgs::StartTrajectoryResponse :init)))

(setf (get uuv_control_msgs::StartTrajectoryRequest :md5sum-) "358e233cde0c8a8bcfea4ce193f8fc15")
(setf (get uuv_control_msgs::StartTrajectoryRequest :datatype-) "uuv_control_msgs/StartTrajectoryRequest")
(setf (get uuv_control_msgs::StartTrajectoryRequest :definition-)
      "# Copyright (c) 2016 The UUV Simulator Authors.
# All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the \"License\");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an \"AS IS\" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

---
bool success

")

(setf (get uuv_control_msgs::StartTrajectoryResponse :md5sum-) "358e233cde0c8a8bcfea4ce193f8fc15")
(setf (get uuv_control_msgs::StartTrajectoryResponse :datatype-) "uuv_control_msgs/StartTrajectoryResponse")
(setf (get uuv_control_msgs::StartTrajectoryResponse :definition-)
      "# Copyright (c) 2016 The UUV Simulator Authors.
# All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the \"License\");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an \"AS IS\" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

---
bool success

")



(provide :uuv_control_msgs/StartTrajectory "358e233cde0c8a8bcfea4ce193f8fc15")


