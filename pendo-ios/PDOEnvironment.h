//
//  PDOEnvironment.h
//  Pendo iOS SDK
//
//  Created by Antonio Rodriguez on 12/15/15.
//  Copyright © 2015 Pendo.io, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PDOSerialize.h"

/**
 Information about the environment where Pendo is running.
 */
@interface PDOEnvironment : NSObject <PDOSerialize>

#pragma mark - About the device and its software
/**
 iDevice hardware architecture description. E. g.: x86_64, armv7, etc.
 */
@property (strong, nonatomic, readonly, nonnull) NSString *hardware;

/**
 Operating System version of the iDevice. E. g.: iOS 7.0.1, iOS 8.0, etc.
 */
@property (strong, nonatomic, readonly, nonnull) NSString *osVersion;

/**
 iDevice type: iPhoneX, iPadY
 */
@property (strong, nonatomic, readonly, nonnull) NSString *device;

/**
 Phone's carrier. E. g.: AT&T, Verizon, etc.
 */
@property (strong, nonatomic, readonly, nonnull) NSString *carrier;

#pragma mark - About the app
/**
 Host app name
 */
@property (strong, nonatomic, readonly, nonnull) NSString *appName;

/**
 Host app version
 */
@property (strong, nonatomic, readonly, nonnull) NSString *appVersion;

#pragma mark - About the lib
/**
 Pendo's lib version
 */
@property (strong, nonatomic, readonly, nonnull) NSString *libVersion;

#pragma mark - Constructor
/**
 Initialized an environment.
 */
- (instancetype _Nonnull)initWithHardware:(NSString * _Nonnull)hardware osVersion:(NSString * _Nonnull)osVersion device:(NSString * _Nonnull)device carrier:(NSString * _Nonnull)carrier appName:(NSString * _Nonnull)appName appVersion:(NSString * _Nonnull)appVersion libVersion:(NSString * _Nonnull)libVersion;

@end
