//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "LogMacros.h"
#include "SystemHeaderIncludes.h"

//! Project version number for Continuum.
double SampleContinuumVersionNumber;

//! Project version string for Continuum.
const unsigned char SampleContinuumVersionString[];

/**
  * @brief simple type function brief description
  * @remark  simple type function remark
  * @discussion simple type function discussion
  * @param valueSet parameter valueSet for this method
  * @return return NSDictionary
  */
NSDictionary<NSString,NSString> * SampleSimpleTypeFunction(const ConnectedDevices::ValueSet valueSet, NSArray<NSString> param2);

/**
  * @brief simple type function brief description
  * @remark  simple type function remark
  * @discussion simple type function discussion
  */
enum class SampleConnectionState
{
    //! brief description for NotConnected
    NotConnected,
    //! brief description for Pending
    Pending = 10,
    //! brief description for Connected
    Connected, 
    //! brief description for Error
    Error
};

/**
  * @brief NSEnumTest1 brief NSEnumTest1 NSEnumTest1
  */
typedef NS_ENUM(NSInteger, NSEnumTest1)
{
    //! brief description for MCDAccessTokenRequestStatusSuccess
    MCDAccessTokenRequestStatusSuccess = 0,  // comments
    //! brief description for MCDAccessTokenRequestStatusTransientError
    MCDAccessTokenRequestStatusTransientError, /* comments too */ MCDAccessTokenRequestStatusOtherError
};

/**
  * @brief structtt brief description
  */
struct SampleStruct
{
  //! brief description for xx
  int entityX;
  //! brief description for yy
  int entityY;
  //! brief description for ll
  int entityLength;
  //! brief description for ww
  int entityWidth;
  //! brief description for tt
  int entityType;
  //! brief description for dd
  bool isDead;
};

/**
  * @brief simple type define brief description
  * @remark  simple type define remark
  * @discussion simple type define discussion
  */
#define Sample__MCD_VISIBLE_EXTERNALLY __attribute__((visibility("default")))

/**
  * @brief simple type typedef brief description
  * @remark  simple type typedef remark
  * @discussion simple type typedef discussion
  */
typedef void (^SampleMCDAuthCodeCallback)(NSError* _Nullable error, NSString* _Nullable accessCode);

/**
 * @brief brief description for an atom class
 * @remark  remark for atom class
 * @discussion discussion for atom class
 */
@interface SampleClassA : NSObject
  /**
  * @brief The App Service Identifier name.
  * @remark  remark for atom class
    * @discussion discussionsssssss
  */
  @property(nonatomic, readonly, copy, nonnull) NSString* property1;

  /**
  * @brief Create an instance.
  * @remark  remark for atom class
    * @discussion discussionsssssss
  * @param request parameter request for this method
  * @param appServiceName parameter appServiceName for this 
  * @return return instancetype
  */
  - (nullable instancetype) method1:(nonnull NSString*)request
                                    appServiceName:(nonnull NSString*)appServiceName;
@end