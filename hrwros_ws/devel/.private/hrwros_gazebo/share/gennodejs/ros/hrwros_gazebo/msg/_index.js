
"use strict";

let PopulationState = require('./PopulationState.js');
let TrayContents = require('./TrayContents.js');
let Order = require('./Order.js');
let Proximity = require('./Proximity.js');
let Kit = require('./Kit.js');
let StorageUnit = require('./StorageUnit.js');
let ConveyorBeltState = require('./ConveyorBeltState.js');
let DetectedObject = require('./DetectedObject.js');
let Model = require('./Model.js');
let VacuumGripperState = require('./VacuumGripperState.js');
let KitTray = require('./KitTray.js');
let KitObject = require('./KitObject.js');
let LogicalCameraImage = require('./LogicalCameraImage.js');

module.exports = {
  PopulationState: PopulationState,
  TrayContents: TrayContents,
  Order: Order,
  Proximity: Proximity,
  Kit: Kit,
  StorageUnit: StorageUnit,
  ConveyorBeltState: ConveyorBeltState,
  DetectedObject: DetectedObject,
  Model: Model,
  VacuumGripperState: VacuumGripperState,
  KitTray: KitTray,
  KitObject: KitObject,
  LogicalCameraImage: LogicalCameraImage,
};
