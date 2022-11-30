
"use strict";

let SetCurrentDirection = require('./SetCurrentDirection.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let SetCurrentModel = require('./SetCurrentModel.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')

module.exports = {
  SetCurrentDirection: SetCurrentDirection,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  TransformToSphericalCoord: TransformToSphericalCoord,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  GetCurrentModel: GetCurrentModel,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  SetCurrentModel: SetCurrentModel,
  SetCurrentVelocity: SetCurrentVelocity,
};
