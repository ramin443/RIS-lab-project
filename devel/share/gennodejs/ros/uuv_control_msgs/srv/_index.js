
"use strict";

let GetPIDParams = require('./GetPIDParams.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let ResetController = require('./ResetController.js')
let SwitchToManual = require('./SwitchToManual.js')
let GetWaypoints = require('./GetWaypoints.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let AddWaypoint = require('./AddWaypoint.js')
let Hold = require('./Hold.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let GoTo = require('./GoTo.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let StartTrajectory = require('./StartTrajectory.js')
let SetPIDParams = require('./SetPIDParams.js')
let GoToIncremental = require('./GoToIncremental.js')

module.exports = {
  GetPIDParams: GetPIDParams,
  IsRunningTrajectory: IsRunningTrajectory,
  ClearWaypoints: ClearWaypoints,
  ResetController: ResetController,
  SwitchToManual: SwitchToManual,
  GetWaypoints: GetWaypoints,
  SetSMControllerParams: SetSMControllerParams,
  GetMBSMControllerParams: GetMBSMControllerParams,
  InitCircularTrajectory: InitCircularTrajectory,
  InitHelicalTrajectory: InitHelicalTrajectory,
  InitWaypointSet: InitWaypointSet,
  InitWaypointsFromFile: InitWaypointsFromFile,
  AddWaypoint: AddWaypoint,
  Hold: Hold,
  InitRectTrajectory: InitRectTrajectory,
  SetMBSMControllerParams: SetMBSMControllerParams,
  GoTo: GoTo,
  SwitchToAutomatic: SwitchToAutomatic,
  GetSMControllerParams: GetSMControllerParams,
  StartTrajectory: StartTrajectory,
  SetPIDParams: SetPIDParams,
  GoToIncremental: GoToIncremental,
};
