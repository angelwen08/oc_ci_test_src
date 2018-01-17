//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "LogMacros.h"
#include "SystemHeaderIncludes.h"

//! Project version number for Continuum.
double ContinuumVersionNumber;

//! Project version string for Continuum.
const unsigned char ContinuumVersionString[];

/**
  * @brief simple type function brief description
  * @remark  simple type function remark
  * @discussion simple type function discussion
  * @param valueSet parameter valueSet for this method
  * @return return NSDictionary
  */
NSDictionary<NSString,NSString> * SimpleTypeFunction(const ConnectedDevices::ValueSet valueSet, NSArray<NSString> param2);

/**
  * @brief simple type function brief description
  * @remark  simple type function remark
  * @discussion simple type function discussion
  */
enum class ConnectionState
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
      MCDAccessTokenRequestStatusTransientError, /* comments too */ 
      //! brief description for MCDAccessTokenRequestStatusOtherError
      MCDAccessTokenRequestStatusOtherError
  };

/**
  * @brief structtt brief description
  */
struct StructTest
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
#define Test__MCD_VISIBLE_EXTERNALLY __attribute__((visibility("default")))

/**
  * @brief simple type typedef brief description
  * @remark  simple type typedef remark
  * @discussion simple type typedef discussion
  */
typedef void (^TestMCDAuthCodeCallback)(NSError* _Nullable error, NSString* _Nullable accessCode);