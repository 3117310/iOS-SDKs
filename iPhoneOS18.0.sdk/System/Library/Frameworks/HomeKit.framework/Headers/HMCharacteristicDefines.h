//
//  HMCharacteristicDefines.h
//  HomeKit
//
//  Copyright (c) 2013-2015 Apple Inc. All rights reserved.
//
/* clang-format off */

#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @enum      HMCharacteristicValueLockMechanismLastKnownAction

 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementInterior       Last known action was secured using physical movement, interior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementInterior     Last known action was unsecured using physical movement, interior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementExterior       Last known action was secured using physical movement, exterior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementExterior     Last known action was unsecured using physical movement, exterior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithKeypad                          Last known action was secured with keypad.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredWithKeypad                        Last known action was unsecured with keypad.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredRemotely                            Last known action was secured remotely.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredRemotely                          Last known action was unsecured remotely.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithAutomaticSecureTimeout          Last known action was secured automatically after timeout.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovement               Last known action was secured using physical movement.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovement             Last known action was unsecured using physical movement.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueLockMechanismLastKnownAction) {
    HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementInterior = 0,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementInterior,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementExterior,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementExterior,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredWithKeypad,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredWithKeypad,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredRemotely,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredRemotely,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredWithAutomaticSecureTimeout,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovement,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovement,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);


/*!
 @enum      HMCharacteristicValueAirParticulateSize

 @constant  HMCharacteristicValueAirParticulateSize2_5          Air particulate size of 2.5 micrometers.
 @constant  HMCharacteristicValueAirParticulateSize10           Air particulate size of 10 micrometers.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueAirParticulateSize) {
    HMCharacteristicValueAirParticulateSize2_5 = 0,
    HMCharacteristicValueAirParticulateSize10,
} API_AVAILABLE(ios(9.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);


/*!
 @enum      HMCharacteristicValueAirQuality

 @constant  HMCharacteristicValueAirQualityUnknown              Air quality is unknown.
 @constant  HMCharacteristicValueAirQualityExcellent            Air quality is excellent.
 @constant  HMCharacteristicValueAirQualityGood                 Air quality is good.
 @constant  HMCharacteristicValueAirQualityFair                 Air quality is fair.
 @constant  HMCharacteristicValueAirQualityInferior             Air quality is inferior.
 @constant  HMCharacteristicValueAirQualityPoor                 Air quality is poor.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueAirQuality) {
    HMCharacteristicValueAirQualityUnknown = 0,
    HMCharacteristicValueAirQualityExcellent,
    HMCharacteristicValueAirQualityGood,
    HMCharacteristicValueAirQualityFair,
    HMCharacteristicValueAirQualityInferior,
    HMCharacteristicValueAirQualityPoor,
} API_AVAILABLE(ios(9.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);


/*!
 @enum      HMCharacteristicValuePositionState

 @constant  HMCharacteristicValuePositionStateClosing           Position is moving towards minimum value.
 @constant  HMCharacteristicValuePositionStateOpening           Position is moving towards maximum value.
 @constant  HMCharacteristicValuePositionStateStopped           Position is Stopped.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValuePositionState) {
    HMCharacteristicValuePositionStateClosing = 0,
    HMCharacteristicValuePositionStateOpening,
    HMCharacteristicValuePositionStateStopped,
} API_AVAILABLE(ios(9.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);


/*!
 @enum      HMCharacteristicValueCurrentSecuritySystemState

 @constant  HMCharacteristicValueCurrentSecuritySystemStateStayArm       Home is occupied and residents are active.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateAwayArm       Home is unoccupied.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateNightArm      Home is occupied and residents are sleeping.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateDisarmed      SecuritySystem is disarmed.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateTriggered     SecuritySystem is triggered.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentSecuritySystemState) {
    HMCharacteristicValueCurrentSecuritySystemStateStayArm = 0,
    HMCharacteristicValueCurrentSecuritySystemStateAwayArm,
    HMCharacteristicValueCurrentSecuritySystemStateNightArm,
    HMCharacteristicValueCurrentSecuritySystemStateDisarmed,
    HMCharacteristicValueCurrentSecuritySystemStateTriggered,
} API_AVAILABLE(ios(9.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);


/*!
 @enum      HMCharacteristicValueTargetSecuritySystemState

 @constant  HMCharacteristicValueTargetSecuritySystemStateStayArm        Home is occupied and residents are active.
 @constant  HMCharacteristicValueTargetSecuritySystemStateAwayArm        Home is unoccupied.
 @constant  HMCharacteristicValueTargetSecuritySystemStateNightArm       Home is occupied and residents are sleeping.
 @constant  HMCharacteristicValueTargetSecuritySystemStateDisarm         Disarm.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetSecuritySystemState) {
    HMCharacteristicValueTargetSecuritySystemStateStayArm = 0,
    HMCharacteristicValueTargetSecuritySystemStateAwayArm,
    HMCharacteristicValueTargetSecuritySystemStateNightArm,
    HMCharacteristicValueTargetSecuritySystemStateDisarm,
} API_AVAILABLE(ios(9.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueJammedStatus

 @constant  HMCharacteristicValueJammedStatusNone               Not Jammed.
 @constant  HMCharacteristicValueJammedStatusJammed             Jammed.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueJammedStatus) {
    HMCharacteristicValueJammedStatusNone = 0,
    HMCharacteristicValueJammedStatusJammed,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTamperStatus

 @constant  HMCharacteristicValueTamperStatusNone               Accessory is not tampered with.
 @constant  HMCharacteristicValueTamperStatusTampered           Accessory is tampered with.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueTamperedStatus) {
    HMCharacteristicValueTamperedStatusNone = 0,
    HMCharacteristicValueTamperedStatusTampered,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueLeakDetectionStatus

 @constant  HMCharacteristicValueLeakDetectionStatusNone        Leak is not detected.
 @constant  HMCharacteristicValueLeakDetectionStatusDetected    Leak is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueLeakStatus) {
    HMCharacteristicValueLeakStatusNone = 0,
    HMCharacteristicValueLeakStatusDetected,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueContactState

 @constant  HMCharacteristicValueContactStateDetected           Contact is detected.
 @constant  HMCharacteristicValueContactStateNone               Contact is not detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueContactState) {
    HMCharacteristicValueContactStateDetected = 0,
    HMCharacteristicValueContactStateNone,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueStatusFault

 @constant  HMCharacteristicValueStatusFaultNoFault               No Fault.
 @constant  HMCharacteristicValueStatusFaultGeneralFault          General Fault.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueStatusFault) {
    HMCharacteristicValueStatusFaultNoFault = 0,
    HMCharacteristicValueStatusFaultGeneralFault,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCarbonMonoxideDetectionStatus

 @constant  HMCharacteristicValueCarbonMonoxideDetectionStatusNotDetected       Carbon monoxide is not detected.
 @constant  HMCharacteristicValueCarbonMonoxideDetectionStatusDetected          Carbon monoxide is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCarbonMonoxideDetectionStatus) {
    HMCharacteristicValueCarbonMonoxideDetectionStatusNotDetected = 0,
    HMCharacteristicValueCarbonMonoxideDetectionStatusDetected,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCarbonDioxideDetectionStatus

 @constant  HMCharacteristicValueCarbonDioxideDetectionStatusNotDetected    Carbon dioxide is not detected.
 @constant  HMCharacteristicValueCarbonDioxideDetectionStatusDetected       Carbon dioxide is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCarbonDioxideDetectionStatus) {
    HMCharacteristicValueCarbonDioxideDetectionStatusNotDetected = 0,
    HMCharacteristicValueCarbonDioxideDetectionStatusDetected,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueOccupancyStatus

 @constant  HMCharacteristicValueOccupancyStatusNotOccupied     Occupancy is not detected.
 @constant  HMCharacteristicValueOccupancyStatusOccupied        Occupancy is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueOccupancyStatus) {
    HMCharacteristicValueOccupancyStatusNotOccupied = 0,
    HMCharacteristicValueOccupancyStatusOccupied,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueSecuritySystemAlarmType

 @constant  HMCharacteristicValueSecuritySystemAlarmTypeNoAlarm     No alarm.
 @constant  HMCharacteristicValueSecuritySystemAlarmTypeUnknown     Unknown alarm type.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueSecuritySystemAlarmType) {
    HMCharacteristicValueSecuritySystemAlarmTypeNoAlarm = 0,
    HMCharacteristicValueSecuritySystemAlarmTypeUnknown,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentAirPurifierState

 @constant  HMCharacteristicValueCurrentAirPurifierStateInactive    Inactive.
 @constant  HMCharacteristicValueCurrentAirPurifierStateIdle        Idle.
 @constant  HMCharacteristicValueCurrentAirPurifierStateActive      Active.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentAirPurifierState) {
    HMCharacteristicValueCurrentAirPurifierStateInactive = 0,
    HMCharacteristicValueCurrentAirPurifierStateIdle,
    HMCharacteristicValueCurrentAirPurifierStateActive,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetAirPurifierState

 @constant  HMCharacteristicValueTargetAirPurifierStateManual       Air Purifier is in manual mode.
 @constant  HMCharacteristicValueTargetAirPurifierStateAutomatic    Air Purifier is in automatic mode.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetAirPurifierState) {
    HMCharacteristicValueTargetAirPurifierStateManual = 0,
    HMCharacteristicValueTargetAirPurifierStateAutomatic,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentSlatState

 @constant  HMCharacteristicValueCurrentSlatStateStationary         Slats are stationary.
 @constant  HMCharacteristicValueCurrentSlatStateJammed             Slats are jammed.
 @constant  HMCharacteristicValueCurrentSlatStateOscillating        Slats are oscillating.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentSlatState) {
    HMCharacteristicValueCurrentSlatStateStationary = 0,
    HMCharacteristicValueCurrentSlatStateJammed,
    HMCharacteristicValueCurrentSlatStateOscillating,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueSlatType

 @constant  HMCharacteristicValueSlatTypeHorizontal          Slat type is horizontal.
 @constant  HMCharacteristicValueSlatTypeVertical            Slat type is vertical.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueSlatType) {
    HMCharacteristicValueSlatTypeHorizontal = 0,
    HMCharacteristicValueSlatTypeVertical,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueFilterChange

 @constant  HMCharacteristicValueFilterChangeNotNeeded      Filter does not need to be changed.
 @constant  HMCharacteristicValueFilterChangeNeeded         Filter needs to be changed.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueFilterChange) {
    HMCharacteristicValueFilterChangeNotNeeded = 0,
    HMCharacteristicValueFilterChangeNeeded,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueLabelNamespace

 @constant  HMCharacteristicValueLabelNamespaceDot                      Service labels are dots.
 @constant  HMCharacteristicValueLabelNamespaceNumeral                  Service labels are Arabic numerals.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueLabelNamespace) {
    HMCharacteristicValueLabelNamespaceDot = 0,
    HMCharacteristicValueLabelNamespaceNumeral,
} API_AVAILABLE(ios(10.3), watchos(3.2), tvos(10.2), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueProgramMode

 @constant  HMCharacteristicValueProgramModeNotScheduled                No programs scheduled.
 @constant  HMCharacteristicValueProgramModeScheduled                   Program scheduled.
 @constant  HMCharacteristicValueProgramModeScheduleOverriddenToManual  Schedule currently overridden to manual mode.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueProgramMode) {
    HMCharacteristicValueProgramModeNotScheduled = 0,
    HMCharacteristicValueProgramModeScheduled,
    HMCharacteristicValueProgramModeScheduleOverriddenToManual,
} API_AVAILABLE(ios(11.2), watchos(4.2), tvos(11.2), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueUsageState

 @constant  HMCharacteristicValueUsageStateNotInUse        Not in use.
 @constant  HMCharacteristicValueUsageStateInUse           Currently in use.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueUsageState) {
    HMCharacteristicValueUsageStateNotInUse = 0,
    HMCharacteristicValueUsageStateInUse,
} API_AVAILABLE(ios(11.2), watchos(4.2), tvos(11.2), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueValveType

 @constant  HMCharacteristicValueValveTypeGenericValve    Generic Valve.
 @constant  HMCharacteristicValueValveTypeIrrigation      Irrigation.
 @constant  HMCharacteristicValueValveTypeShowerHead      Shower Head.
 @constant  HMCharacteristicValueValveTypeWaterFaucet     Water Faucet.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueValveType) {
    HMCharacteristicValueValveTypeGenericValve = 0,
    HMCharacteristicValueValveTypeIrrigation,
    HMCharacteristicValueValveTypeShowerHead,
    HMCharacteristicValueValveTypeWaterFaucet,
} API_AVAILABLE(ios(11.2), watchos(4.2), tvos(11.2), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueVolumeControlType

 @constant  HMCharacteristicValueVolumeControlTypeNone                 Volume cannot be controlled.
 @constant  HMCharacteristicValueVolumeControlTypeRelative             Relative control (changed by one step at a time).
 @constant  HMCharacteristicValueVolumeControlTypeRelativeWithCurrent  Relative control (changed by one step at a time), but has a current value.
 @constant  HMCharacteristicValueVolumeControlTypeAbsolute             Absolute control (can be directly set to a specific value).
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueVolumeControlType) {
    HMCharacteristicValueVolumeControlTypeNone = 0,
    HMCharacteristicValueVolumeControlTypeRelative,
    HMCharacteristicValueVolumeControlTypeRelativeWithCurrent,
    HMCharacteristicValueVolumeControlTypeAbsolute,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueVolumeSelector

 @constant  HMCharacteristicValueVolumeSelectorVolumeIncrement     Increment the volume.
 @constant  HMCharacteristicValueVolumeSelectorVolumeDecrement     Decrement the volume.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueVolumeSelector) {
    HMCharacteristicValueVolumeSelectorVolumeIncrement = 0,
    HMCharacteristicValueVolumeSelectorVolumeDecrement,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);


/*!
 @enum      HMCharacteristicValueDoorState

 @constant  HMCharacteristicValueDoorStateOpen     The door is fully open.
 @constant  HMCharacteristicValueDoorStateClosed   The door is fully closed.
 @constant  HMCharacteristicValueDoorStateOpening  The door is actively opening.
 @constant  HMCharacteristicValueDoorStateClosing  The door is actively closing.
 @constant  HMCharacteristicValueDoorStateStopped  The door is not moving, and it is not fully open nor fully closed.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueDoorState) {
    HMCharacteristicValueDoorStateOpen = 0,
    HMCharacteristicValueDoorStateClosed = 1,
    HMCharacteristicValueDoorStateOpening = 2,
    HMCharacteristicValueDoorStateClosing = 3,
    HMCharacteristicValueDoorStateStopped = 4,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentHeatingCooling

 @constant  HMCharacteristicValueCurrentHeatingCoolingOff   Off.
 @constant  HMCharacteristicValueCurrentHeatingCoolingHeat  The Heater is currently on.
 @constant  HMCharacteristicValueCurrentHeatingCoolingCool  Cooler is currently on.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentHeatingCooling) {
    HMCharacteristicValueCurrentHeatingCoolingOff = 0,
    HMCharacteristicValueCurrentHeatingCoolingHeat = 1,
    HMCharacteristicValueCurrentHeatingCoolingCool = 2,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueLockMechanismState

 @constant  HMCharacteristicValueLockMechanismStateUnsecured  Unsecured.
 @constant  HMCharacteristicValueLockMechanismStateSecured    Secured.
 @constant  HMCharacteristicValueLockMechanismStateJammed     Jammed.
 @constant  HMCharacteristicValueLockMechanismStateUnknown    Unknown.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueLockMechanismState) {
    HMCharacteristicValueLockMechanismStateUnsecured = 0,
    HMCharacteristicValueLockMechanismStateSecured = 1,
    HMCharacteristicValueLockMechanismStateJammed = 2,
    HMCharacteristicValueLockMechanismStateUnknown = 3,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetLockMechanismState

 @constant  HMCharacteristicValueTargetLockMechanismStateUnsecured  Unsecured.
 @constant  HMCharacteristicValueTargetLockMechanismStateSecured    Secured.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetLockMechanismState) {
    HMCharacteristicValueTargetLockMechanismStateUnsecured = 0,
    HMCharacteristicValueTargetLockMechanismStateSecured = 1,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueRotationDirection

 @constant  HMCharacteristicValueRotationDirectionClockwise         Clockwise.
 @constant  HMCharacteristicValueRotationDirectionCounterClockwise  Counter-clockwise.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueRotationDirection) {
    HMCharacteristicValueRotationDirectionClockwise = 0,
    HMCharacteristicValueRotationDirectionCounterClockwise = 1,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetDoorState

 @constant  HMCharacteristicValueTargetDoorStateOpen    Open.
 @constant  HMCharacteristicValueTargetDoorStateClosed  Closed.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetDoorState) {
    HMCharacteristicValueTargetDoorStateOpen = 0,
    HMCharacteristicValueTargetDoorStateClosed = 1,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueHeatingCooling

 @constant  HMCharacteristicValueHeatingCoolingOff   Off.
 @constant  HMCharacteristicValueHeatingCoolingHeat  If the current temperature is below the target temperature then turn on heating.
 @constant  HMCharacteristicValueHeatingCoolingCool  If the current temperature is above the target temperature then turn on cooling.
 @constant  HMCharacteristicValueHeatingCoolingAuto  Turn on heating or cooling to maintain temperature within the heating and cooling threshold of the target temperature.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueHeatingCooling) {
    HMCharacteristicValueHeatingCoolingOff = 0,
    HMCharacteristicValueHeatingCoolingHeat = 1,
    HMCharacteristicValueHeatingCoolingCool = 2,
    HMCharacteristicValueHeatingCoolingAuto = 3,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTemperatureUnit

 @constant  HMCharacteristicValueTemperatureUnitCelsius     Celsius.
 @constant  HMCharacteristicValueTemperatureUnitFahrenheit  Fahrenheit.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTemperatureUnit) {
    HMCharacteristicValueTemperatureUnitCelsius = 0,
    HMCharacteristicValueTemperatureUnitFahrenheit = 1,
} API_AVAILABLE(ios(8.0), watchos(2.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueInputEvent

 @constant  HMCharacteristicValueInputEventSinglePress  Single tap or press.
 @constant  HMCharacteristicValueInputEventDoublePress  Double tap or press.
 @constant  HMCharacteristicValueInputEventLongPress    Long Press.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueInputEvent) {
    HMCharacteristicValueInputEventSinglePress = 0,
    HMCharacteristicValueInputEventDoublePress = 1,
    HMCharacteristicValueInputEventLongPress = 2,
} API_AVAILABLE(ios(10.3), watchos(3.2), tvos(10.2), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueSmokeDetectionStatus

 @constant  HMCharacteristicValueSmokeDetectionStatusNone      Smoke is not detected.
 @constant  HMCharacteristicValueSmokeDetectionStatusDetected  Smoke is detected.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueSmokeDetectionStatus) {
    HMCharacteristicValueSmokeDetectionStatusNone = 0,
    HMCharacteristicValueSmokeDetectionStatusDetected = 1,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueBatteryStatus

 @constant  HMCharacteristicValueBatteryStatusNormal  Battery level is normal.
 @constant  HMCharacteristicValueBatteryStatusLow     Battery level is low.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueBatteryStatus) {
    HMCharacteristicValueBatteryStatusNormal = 0,
    HMCharacteristicValueBatteryStatusLow = 1,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueChargingState

 @constant  HMCharacteristicValueChargingStateNone           Not Charging.
 @constant  HMCharacteristicValueChargingStateInProgress     Charging.
 @constant  HMCharacteristicValueChargingStateNotChargeable  Not Chargeable.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueChargingState) {
    HMCharacteristicValueChargingStateNone = 0,
    HMCharacteristicValueChargingStateInProgress = 1,
    HMCharacteristicValueChargingStateNotChargeable = 2,
} API_AVAILABLE(ios(10.0), watchos(3.0), tvos(10.0), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueLockPhysicalControlsState

 @constant  HMCharacteristicValueLockPhysicalControlsStateNotLocked  Physical controls not locked.
 @constant  HMCharacteristicValueLockPhysicalControlsStateLocked     Physical controls locked.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueLockPhysicalControlsState) {
    HMCharacteristicValueLockPhysicalControlsStateNotLocked = 0,
    HMCharacteristicValueLockPhysicalControlsStateLocked = 1,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentFanState

 @constant  HMCharacteristicValueCurrentFanStateInactive  Inactive.
 @constant  HMCharacteristicValueCurrentFanStateIdle      Idle.
 @constant  HMCharacteristicValueCurrentFanStateActive    Blowing Air.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentFanState) {
    HMCharacteristicValueCurrentFanStateInactive = 0,
    HMCharacteristicValueCurrentFanStateIdle = 1,
    HMCharacteristicValueCurrentFanStateActive = 2,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueActivationState

 @constant  HMCharacteristicValueActivationStateInactive  Inactive.
 @constant  HMCharacteristicValueActivationStateActive    Active.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueActivationState) {
    HMCharacteristicValueActivationStateInactive = 0,
    HMCharacteristicValueActivationStateActive = 1,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentHeaterCoolerState

 @constant  HMCharacteristicValueCurrentHeaterCoolerStateInactive  Inactive.
 @constant  HMCharacteristicValueCurrentHeaterCoolerStateIdle      Idle.
 @constant  HMCharacteristicValueCurrentHeaterCoolerStateHeating   Heating.
 @constant  HMCharacteristicValueCurrentHeaterCoolerStateCooling   Cooling.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentHeaterCoolerState) {
    HMCharacteristicValueCurrentHeaterCoolerStateInactive = 0,
    HMCharacteristicValueCurrentHeaterCoolerStateIdle = 1,
    HMCharacteristicValueCurrentHeaterCoolerStateHeating = 2,
    HMCharacteristicValueCurrentHeaterCoolerStateCooling = 3,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetHeaterCoolerState

 @constant  HMCharacteristicValueTargetHeaterCoolerStateAutomatic  Heat or Cool.
 @constant  HMCharacteristicValueTargetHeaterCoolerStateHeat       Heat.
 @constant  HMCharacteristicValueTargetHeaterCoolerStateCool       Cool.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetHeaterCoolerState) {
    HMCharacteristicValueTargetHeaterCoolerStateAutomatic = 0,
    HMCharacteristicValueTargetHeaterCoolerStateHeat = 1,
    HMCharacteristicValueTargetHeaterCoolerStateCool = 2,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentHumidifierDehumidifierState

 @constant  HMCharacteristicValueCurrentHumidifierDehumidifierStateInactive       Inactive.
 @constant  HMCharacteristicValueCurrentHumidifierDehumidifierStateIdle           Idle.
 @constant  HMCharacteristicValueCurrentHumidifierDehumidifierStateHumidifying    Humidifying.
 @constant  HMCharacteristicValueCurrentHumidifierDehumidifierStateDehumidifying  Dehumidifying.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentHumidifierDehumidifierState) {
    HMCharacteristicValueCurrentHumidifierDehumidifierStateInactive = 0,
    HMCharacteristicValueCurrentHumidifierDehumidifierStateIdle = 1,
    HMCharacteristicValueCurrentHumidifierDehumidifierStateHumidifying = 2,
    HMCharacteristicValueCurrentHumidifierDehumidifierStateDehumidifying = 3,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetHumidifierDehumidifierState

 @constant  HMCharacteristicValueTargetHumidifierDehumidifierStateAutomatic   Humidifier or Dehumidifier.
 @constant  HMCharacteristicValueTargetHumidifierDehumidifierStateHumidify    Humidifier.
 @constant  HMCharacteristicValueTargetHumidifierDehumidifierStateDehumidify  Dehumidifier.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetHumidifierDehumidifierState) {
    HMCharacteristicValueTargetHumidifierDehumidifierStateAutomatic = 0,
    HMCharacteristicValueTargetHumidifierDehumidifierStateHumidify = 1,
    HMCharacteristicValueTargetHumidifierDehumidifierStateDehumidify = 2,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueSwingMode

 @constant  HMCharacteristicValueSwingModeDisabled  Swing mode is disabled.
 @constant  HMCharacteristicValueSwingModeEnabled   Swing mode is enabled.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueSwingMode) {
    HMCharacteristicValueSwingModeDisabled = 0,
    HMCharacteristicValueSwingModeEnabled = 1,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetFanState

 @constant  HMCharacteristicValueTargetFanStateManual     Manual.
 @constant  HMCharacteristicValueTargetFanStateAutomatic  Automatic.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetFanState) {
    HMCharacteristicValueTargetFanStateManual = 0,
    HMCharacteristicValueTargetFanStateAutomatic = 1,
} API_AVAILABLE(ios(10.2), watchos(3.1.1), tvos(10.1), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueConfigurationState

 @constant  HMCharacteristicValueConfigurationStateNotConfigured  Not Configured.
 @constant  HMCharacteristicValueConfigurationStateConfigured     Configured.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueConfigurationState) {
    HMCharacteristicValueConfigurationStateNotConfigured = 0,
    HMCharacteristicValueConfigurationStateConfigured = 1,
} API_AVAILABLE(ios(11.2), watchos(4.2), tvos(11.2), macCatalyst(14.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueInputSourceType

 @constant  HMCharacteristicValueInputSourceTypeOther           Other.
 @constant  HMCharacteristicValueInputSourceTypeHomeScreen      Home Screen.
 @constant  HMCharacteristicValueInputSourceTypeTuner           Tuner.
 @constant  HMCharacteristicValueInputSourceTypeHDMI            HDMI.
 @constant  HMCharacteristicValueInputSourceTypeCompositeVideo  Composite Video.
 @constant  HMCharacteristicValueInputSourceTypeSVideo          S-Video.
 @constant  HMCharacteristicValueInputSourceTypeComponentVideo  Component Video.
 @constant  HMCharacteristicValueInputSourceTypeDVI             DVI.
 @constant  HMCharacteristicValueInputSourceTypeAirPlay         AirPlay.
 @constant  HMCharacteristicValueInputSourceTypeUSB             USB.
 @constant  HMCharacteristicValueInputSourceTypeApplication     Application.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueInputSourceType) {
    HMCharacteristicValueInputSourceTypeOther = 0,
    HMCharacteristicValueInputSourceTypeHomeScreen = 1,
    HMCharacteristicValueInputSourceTypeTuner = 2,
    HMCharacteristicValueInputSourceTypeHDMI NS_SWIFT_NAME(hdmi) = 3,
    HMCharacteristicValueInputSourceTypeCompositeVideo = 4,
    HMCharacteristicValueInputSourceTypeSVideo = 5,
    HMCharacteristicValueInputSourceTypeComponentVideo = 6,
    HMCharacteristicValueInputSourceTypeDVI NS_SWIFT_NAME(dvi) = 7,
    HMCharacteristicValueInputSourceTypeAirPlay = 8,
    HMCharacteristicValueInputSourceTypeUSB NS_SWIFT_NAME(usb) = 9,
    HMCharacteristicValueInputSourceTypeApplication = 10,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueInputDeviceType

 @constant  HMCharacteristicValueInputDeviceTypeOther        Other.
 @constant  HMCharacteristicValueInputDeviceTypeTV           TV.
 @constant  HMCharacteristicValueInputDeviceTypeRecording    Recording.
 @constant  HMCharacteristicValueInputDeviceTypeTuner        Tuner.
 @constant  HMCharacteristicValueInputDeviceTypePlayback     Playback.
 @constant  HMCharacteristicValueInputDeviceTypeAudioSystem  Audio System.
 @constant  HMCharacteristicValueInputDeviceTypeNone         None.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueInputDeviceType) {
    HMCharacteristicValueInputDeviceTypeOther = 0,
    HMCharacteristicValueInputDeviceTypeTV NS_SWIFT_NAME(tv) = 1,
    HMCharacteristicValueInputDeviceTypeRecording = 2,
    HMCharacteristicValueInputDeviceTypeTuner = 3,
    HMCharacteristicValueInputDeviceTypePlayback = 4,
    HMCharacteristicValueInputDeviceTypeAudioSystem = 5,
    HMCharacteristicValueInputDeviceTypeNone = 6,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueClosedCaptions

 @constant  HMCharacteristicValueClosedCaptionsDisabled  Disabled.
 @constant  HMCharacteristicValueClosedCaptionsEnabled   Enabled.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueClosedCaptions) {
    HMCharacteristicValueClosedCaptionsDisabled = 0,
    HMCharacteristicValueClosedCaptionsEnabled = 1,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValuePowerModeSelection

 @constant  HMCharacteristicValuePowerModeSelectionShow  Show.
 @constant  HMCharacteristicValuePowerModeSelectionHide  Hide.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValuePowerModeSelection) {
    HMCharacteristicValuePowerModeSelectionShow = 0,
    HMCharacteristicValuePowerModeSelectionHide = 1,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentMediaState

 @constant  HMCharacteristicValueCurrentMediaStatePlaying      Playing content.
 @constant  HMCharacteristicValueCurrentMediaStatePaused       Paused playback of media content.
 @constant  HMCharacteristicValueCurrentMediaStateStopped      Stopped playback.
 @constant  HMCharacteristicValueCurrentMediaStateUnknown      Unknown playback state.
 @constant  HMCharacteristicValueCurrentMediaStateLoading      Loading content.
 @constant  HMCharacteristicValueCurrentMediaStateInterrupted  Playback interrupted.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentMediaState) {
    HMCharacteristicValueCurrentMediaStatePlaying = 0,
    HMCharacteristicValueCurrentMediaStatePaused = 1,
    HMCharacteristicValueCurrentMediaStateStopped = 2,
    HMCharacteristicValueCurrentMediaStateUnknown = 3,
    HMCharacteristicValueCurrentMediaStateLoading = 4,
    HMCharacteristicValueCurrentMediaStateInterrupted = 5,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueRemoteKey

 @constant  HMCharacteristicValueRemoteKeyRewind         Rewind.
 @constant  HMCharacteristicValueRemoteKeyFastForward    Fast Forward.
 @constant  HMCharacteristicValueRemoteKeyNextTrack      Next Track.
 @constant  HMCharacteristicValueRemoteKeyPreviousTrack  Previous Track.
 @constant  HMCharacteristicValueRemoteKeyArrowUp        Arrow Up.
 @constant  HMCharacteristicValueRemoteKeyArrowDown      Arrow Down.
 @constant  HMCharacteristicValueRemoteKeyArrowLeft      Arrow Left.
 @constant  HMCharacteristicValueRemoteKeyArrowRight     Arrow Right.
 @constant  HMCharacteristicValueRemoteKeySelect         Select.
 @constant  HMCharacteristicValueRemoteKeyBack           Back.
 @constant  HMCharacteristicValueRemoteKeyExit           Exit.
 @constant  HMCharacteristicValueRemoteKeyPlayPause      Play Pause.
 @constant  HMCharacteristicValueRemoteKeyPlay           Play.
 @constant  HMCharacteristicValueRemoteKeyPause          Pause.
 @constant  HMCharacteristicValueRemoteKeyMenu           Menu.
 @constant  HMCharacteristicValueRemoteKeyInfo           Info.
 @constant  HMCharacteristicValueRemoteKeyHome           Home.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueRemoteKey) {
    HMCharacteristicValueRemoteKeyRewind = 0,
    HMCharacteristicValueRemoteKeyFastForward = 1,
    HMCharacteristicValueRemoteKeyNextTrack = 2,
    HMCharacteristicValueRemoteKeyPreviousTrack = 3,
    HMCharacteristicValueRemoteKeyArrowUp = 4,
    HMCharacteristicValueRemoteKeyArrowDown = 5,
    HMCharacteristicValueRemoteKeyArrowLeft = 6,
    HMCharacteristicValueRemoteKeyArrowRight = 7,
    HMCharacteristicValueRemoteKeySelect = 8,
    HMCharacteristicValueRemoteKeyBack = 9,
    HMCharacteristicValueRemoteKeyExit = 10,
    HMCharacteristicValueRemoteKeyPlayPause = 11,
    HMCharacteristicValueRemoteKeyPlay = 12,
    HMCharacteristicValueRemoteKeyPause = 13,
    HMCharacteristicValueRemoteKeyMenu = 14,
    HMCharacteristicValueRemoteKeyInfo = 15,
    HMCharacteristicValueRemoteKeyHome = 16,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValuePictureMode

 @constant  HMCharacteristicValuePictureModeStandard    Standard.
 @constant  HMCharacteristicValuePictureModeMovie       Movie.
 @constant  HMCharacteristicValuePictureModeSport       Sport.
 @constant  HMCharacteristicValuePictureModeGame        Game.
 @constant  HMCharacteristicValuePictureModePhoto       Photo.
 @constant  HMCharacteristicValuePictureModeVivid       Vivid.
 @constant  HMCharacteristicValuePictureModeDark        Dark.
 @constant  HMCharacteristicValuePictureModeBright      Bright.
 @constant  HMCharacteristicValuePictureModeComputer    Computer.
 @constant  HMCharacteristicValuePictureModeNight       Night.
 @constant  HMCharacteristicValuePictureModeCalibrated  Calibrated.
 @constant  HMCharacteristicValuePictureModeCustom1     Custom1.
 @constant  HMCharacteristicValuePictureModeCustom2     Custom2.
 @constant  HMCharacteristicValuePictureModeCustom3     Custom3.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValuePictureMode) {
    HMCharacteristicValuePictureModeStandard = 0,
    HMCharacteristicValuePictureModeMovie = 1,
    HMCharacteristicValuePictureModeSport = 2,
    HMCharacteristicValuePictureModeGame = 3,
    HMCharacteristicValuePictureModePhoto = 4,
    HMCharacteristicValuePictureModeVivid = 5,
    HMCharacteristicValuePictureModeDark = 6,
    HMCharacteristicValuePictureModeBright = 7,
    HMCharacteristicValuePictureModeComputer = 8,
    HMCharacteristicValuePictureModeNight = 9,
    HMCharacteristicValuePictureModeCalibrated = 10,
    HMCharacteristicValuePictureModeCustom1 = 11,
    HMCharacteristicValuePictureModeCustom2 = 12,
    HMCharacteristicValuePictureModeCustom3 = 13,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetVisibilityState

 @constant  HMCharacteristicValueTargetVisibilityStateShow  Show.
 @constant  HMCharacteristicValueTargetVisibilityStateHide  Hide.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetVisibilityState) {
    HMCharacteristicValueTargetVisibilityStateShow = 0,
    HMCharacteristicValueTargetVisibilityStateHide = 1,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueCurrentVisibilityState

 @constant  HMCharacteristicValueCurrentVisibilityStateShown        The media source is displayed.
 @constant  HMCharacteristicValueCurrentVisibilityStateHidden       The media source is not displayed.
 @constant  HMCharacteristicValueCurrentVisibilityStateConnected    The media source is displayed since there is a connected device.
 @constant  HMCharacteristicValueCurrentVisibilityStateAlwaysShown  The media source is always displayed.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentVisibilityState) {
    HMCharacteristicValueCurrentVisibilityStateShown = 0,
    HMCharacteristicValueCurrentVisibilityStateHidden = 1,
    HMCharacteristicValueCurrentVisibilityStateConnected = 2,
    HMCharacteristicValueCurrentVisibilityStateAlwaysShown = 3,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueTargetMediaState

 @constant  HMCharacteristicValueTargetMediaStatePlay   Start playback.
 @constant  HMCharacteristicValueTargetMediaStatePause  Pause playback.
 @constant  HMCharacteristicValueTargetMediaStateStop   Stop playback.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetMediaState) {
    HMCharacteristicValueTargetMediaStatePlay = 0,
    HMCharacteristicValueTargetMediaStatePause = 1,
    HMCharacteristicValueTargetMediaStateStop = 2,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueRouterStatus

 @constant  HMCharacteristicValueRouterStatusReady     Router has deployed HomeKit configuration.
 @constant  HMCharacteristicValueRouterStatusNotReady  Router has not deployed HomeKit configuration.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueRouterStatus) {
    HMCharacteristicValueRouterStatusReady = 0,
    HMCharacteristicValueRouterStatusNotReady = 1,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);

/*!
 @enum      HMCharacteristicValueWiFiSatelliteStatus

 @constant  HMCharacteristicValueWiFiSatelliteStatusUnknown       Unknown.
 @constant  HMCharacteristicValueWiFiSatelliteStatusConnected     Connected.
 @constant  HMCharacteristicValueWiFiSatelliteStatusNotConnected  Not Connected.
*/
typedef NS_ENUM(NSInteger, HMCharacteristicValueWiFiSatelliteStatus) {
    HMCharacteristicValueWiFiSatelliteStatusUnknown = 0,
    HMCharacteristicValueWiFiSatelliteStatusConnected = 1,
    HMCharacteristicValueWiFiSatelliteStatusNotConnected = 2,
} API_AVAILABLE(ios(18.0), watchos(11.0), tvos(18.0), visionos(2.0)) API_UNAVAILABLE(macos);


NS_ASSUME_NONNULL_END
