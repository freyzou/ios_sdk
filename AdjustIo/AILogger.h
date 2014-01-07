//
//  AILogger.h
//  AdjustIo
//
//  Created by Christian Wellenbrock on 2012-11-15.
//  Copyright (c) 2012-2013 adeven. All rights reserved.
//

typedef enum {
    AILogLevelVerbose = 1,
    AILogLevelDebug   = 2,
    AILogLevelInfo    = 3,
    AILogLevelWarn    = 4,
    AILogLevelError   = 5,
    AILogLevelAssert  = 6
} AILogLevel;

// A simple logger with multiple log levels.
@interface AILogger : NSObject

+ (void)setLogLevel:(AILogLevel)logLevel;

+ (void)verbose:(NSString *)message, ...;
+ (void)debug:  (NSString *)message, ...;
+ (void)info:   (NSString *)message, ...;
+ (void)warn:   (NSString *)message, ...;
+ (void)error:  (NSString *)message, ...;
+ (void)assert: (NSString *)message, ...;

@end
