# Changelog

## 3.1.11 (09/15/2020)
* Fixes crash on changing custom tags in ContentInfo object which was not thread safe
* Using Network.framework to detect connection type for iOS 12 and above
* Using latest api "serviceCurrentRadioAccessTechnology" from CoreTelephony framework to detect cellular connection type for iOS 13 and above
* Does not collect Advertising identifier(IDFA)

## 3.0.11 (09/15/2020)
* Fixes crash on changing custom tags in ContentInfo object which was not thread safe
* Using Network.framework to detect connection type for iOS 12 and above
* Using latest api "serviceCurrentRadioAccessTechnology" from CoreTelephony framework to detect cellular connection type for iOS 13 and above
* Supports Advertising identifier(IDFA) collection

## 3.1.10 (06/25/2020)
* Support for auto detection of connection type (Ethernet) in tvOS.
* Bug Fixes.

## 3.0.10 (06/25/2020)
* Support for auto detection of connection type (Ethernet) in tvOS.
* Bug Fixes.

## 3.1.9 (04/22/2020)
* Fixes an issue where same version is reported for both AdIdentifier enabled and disabled frameworks.
* Fixes meta data reporting issue

## 3.1.8 (12/13/2019)
* Supports Data collection and Data compliance as per GDPR and CCPA.Advertising identifier support is not available.
* Introduces new API setUserPreferenceForDataCollection() for setting user preferences to opt-out of user data collection.
* Introduces new API setUserPreferenceForDataDeletion() for setting user preferences to delete previously collected user data.

## 3.0.7 (10/30/2019)
* Supports iOS 13.

## 3.0.6 (08/17/2019)
* Supports iOS 12.3.
* Introduces a new API for customers to set CDN Edge Server IP Address.


## 3.0.5 (06/28/2019)
* Includes info.plist files for ConvivaCore framework.
* Displays log messages to indicate External Bitrate or Internal Bitrate.
* There are metadata values which need to be updated before first video frame appears (Viewer ID, Stream Type, Player Name, Content Length, Custom Tags).
* If any/all of these metadata values are not reported at the time of session creation, we log a warning for the same metadata value(s) from this release.
* If any/all of these metadata values are not reported before first frame appears, we log an error for the same metadata value(s) from this release.

## 3.0.4 (03/07/2019)
* Fixes an issue during CDN switch and multithreading, which affects AVPlayeritem
* Fixes a multithreading issue when different threads access the event queue
* Fixes an issue with viewId updates after initially setting the value to nil.

## 3.0.3 (10/26/2018)
* Validated on iOS 12
* Fixes an issue related to asset name

## 3.0.2 (07/20/2018)
* Fixes an issue related to attachStreamer

## 3.0.1 (06/20/2018)
* Exposes ConvivaAdPlayerState enum to fix the issue with setAdPlayerState API

## 3.0.0 (05/31/2018)
* Supports insight into Offline Video Experience

## 2.141.0 (05/31/2018)
* Supports Cocoapods deployment method
