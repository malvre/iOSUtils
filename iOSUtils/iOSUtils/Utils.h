//
//  Utils.h
//  iOSUtils
//
//  Created by Marcelo Alves Rezende on 16/05/14.
//  Copyright (c) 2014 Marcelo Rezende. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Utils : NSObject

+ (UIColor *)colorFromHexString:(NSString *)hexString;

+ (NSInteger)daysBetweenDate:(NSDate*)fromDateTime
					 andDate:(NSDate*)toDateTime;

+ (NSString*) floatToCurrency:(float)v;

@end
